/*
 * XREFs of DbgkpWakeTarget @ 0x1409384E8
 * Callers:
 *     DbgkClearProcessDebugObject @ 0x14068277C (DbgkClearProcessDebugObject.c)
 *     DbgkpCloseObject @ 0x1409371C0 (DbgkpCloseObject.c)
 *     DbgkpSetProcessDebugObject @ 0x1409381F8 (DbgkpSetProcessDebugObject.c)
 *     NtDebugContinue @ 0x140938990 (NtDebugContinue.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B270 (ExReleaseRundownProtection_0.c)
 *     PsMultiResumeThread @ 0x140309C58 (PsMultiResumeThread.c)
 *     DbgkpFreeDebugEvent @ 0x140937454 (DbgkpFreeDebugEvent.c)
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
