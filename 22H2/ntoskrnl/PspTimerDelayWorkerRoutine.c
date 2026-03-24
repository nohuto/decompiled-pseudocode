/*
 * XREFs of PspTimerDelayWorkerRoutine @ 0x140582720
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     PspApplyTimerDelayProcess @ 0x140581E28 (PspApplyTimerDelayProcess.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PspTimerDelayWorkerRoutine(_QWORD *P)
{
  __int64 v2; // r8

  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(P[4] + 1112LL)) )
  {
    PspApplyTimerDelayProcess(P[4], 0LL, v2);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(P[4] + 1112LL));
  }
  ObfDereferenceObjectWithTag((PVOID)P[4], 0x624A7350u);
  ExFreePoolWithTag(P, 0x65446954u);
}
