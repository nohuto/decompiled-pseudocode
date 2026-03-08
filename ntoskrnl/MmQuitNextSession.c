/*
 * XREFs of MmQuitNextSession @ 0x14087FF10
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1402A031C (MiTrimSharedPageFromViews.c)
 *     PsQueryCpuQuotaInformation @ 0x1403B1468 (PsQueryCpuQuotaInformation.c)
 *     PopWatchdogWorker @ 0x1403D0490 (PopWatchdogWorker.c)
 *     PspChangeProcessExecutionState @ 0x1406F8AC0 (PspChangeProcessExecutionState.c)
 *     ObpProcessRemoveObjectQueue @ 0x1407DEA90 (ObpProcessRemoveObjectQueue.c)
 *     VfThunkApplyPristineToAllSession @ 0x140AD82CC (VfThunkApplyPristineToAllSession.c)
 *     VfThunkApplyWdmThunkToAllSession @ 0x140AD844C (VfThunkApplyWdmThunkToAllSession.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 */

__int64 __fastcall MmQuitNextSession(void *a1)
{
  ObfDereferenceObject(a1);
  return 0LL;
}
