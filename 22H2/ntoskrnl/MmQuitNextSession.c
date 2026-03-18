/*
 * XREFs of MmQuitNextSession @ 0x140884DE0
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     PsQueryCpuQuotaInformation @ 0x1403B60F8 (PsQueryCpuQuotaInformation.c)
 *     PopWatchdogWorker @ 0x1403D5C40 (PopWatchdogWorker.c)
 *     ObpProcessRemoveObjectQueue @ 0x140749A50 (ObpProcessRemoveObjectQueue.c)
 *     VfThunkApplyPristineToAllSession @ 0x140ADC2CC (VfThunkApplyPristineToAllSession.c)
 *     VfThunkApplyWdmThunkToAllSession @ 0x140ADC44C (VfThunkApplyWdmThunkToAllSession.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 */

__int64 __fastcall MmQuitNextSession(void *a1)
{
  ObfDereferenceObject(a1);
  return 0LL;
}
