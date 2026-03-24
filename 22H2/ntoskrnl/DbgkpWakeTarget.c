/*
 * XREFs of DbgkpWakeTarget @ 0x140885B60
 * Callers:
 *     DbgkClearProcessDebugObject @ 0x140772C50 (DbgkClearProcessDebugObject.c)
 *     DbgkpCloseObject @ 0x140884880 (DbgkpCloseObject.c)
 *     DbgkpSetProcessDebugObject @ 0x140885860 (DbgkpSetProcessDebugObject.c)
 *     NtDebugContinue @ 0x140885FA0 (NtDebugContinue.c)
 * Callees:
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     PsResumeThread @ 0x1406C5AA0 (PsResumeThread.c)
 *     DbgkpFreeDebugEvent @ 0x140884B14 (DbgkpFreeDebugEvent.c)
 */

void __fastcall DbgkpWakeTarget(char *P, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v4; // eax
  struct _EX_RUNDOWN_REF *v6; // rdi

  v4 = *((_DWORD *)P + 19);
  v6 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)P + 8);
  if ( (v4 & 0x20) != 0 )
  {
    PsResumeThread(*((_QWORD *)P + 8), 0LL, a3, a4);
    v4 = *((_DWORD *)P + 19);
  }
  if ( (v4 & 8) != 0 )
  {
    ExReleaseRundownProtection(v6 + 159);
    v4 = *((_DWORD *)P + 19);
  }
  if ( (v4 & 2) != 0 )
    DbgkpFreeDebugEvent(P);
  else
    KeSetEvent((PRKEVENT)(P + 16), 0, 0);
}
