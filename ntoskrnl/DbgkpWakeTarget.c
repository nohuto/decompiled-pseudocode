/*
 * XREFs of DbgkpWakeTarget @ 0x1409354D4
 * Callers:
 *     DbgkClearProcessDebugObject @ 0x14067F39C (DbgkClearProcessDebugObject.c)
 *     DbgkpCloseObject @ 0x1409341B0 (DbgkpCloseObject.c)
 *     DbgkpSetProcessDebugObject @ 0x1409351E4 (DbgkpSetProcessDebugObject.c)
 *     NtDebugContinue @ 0x140935970 (NtDebugContinue.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     PsMultiResumeThread @ 0x140354658 (PsMultiResumeThread.c)
 *     DbgkpFreeDebugEvent @ 0x140934444 (DbgkpFreeDebugEvent.c)
 */

void __fastcall DbgkpWakeTarget(char *P)
{
  struct _EX_RUNDOWN_REF *v2; // rdi

  v2 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)P + 8);
  if ( (*((_DWORD *)P + 19) & 0x20) != 0 )
    PsMultiResumeThread(*((_QWORD *)P + 8), 0LL, 1u);
  if ( (*((_DWORD *)P + 19) & 8) != 0 )
    ExReleaseRundownProtection_0(v2 + 169);
  if ( (*((_DWORD *)P + 19) & 2) != 0 )
    DbgkpFreeDebugEvent(P);
  else
    KeSetEvent((PRKEVENT)(P + 16), 0, 0);
}
