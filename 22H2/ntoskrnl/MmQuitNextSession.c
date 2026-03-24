/*
 * XREFs of MmQuitNextSession @ 0x1406A6080
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1402702C4 (MiTrimSharedPageFromViews.c)
 *     PsQueryCpuQuotaInformation @ 0x1403CF8B4 (PsQueryCpuQuotaInformation.c)
 *     PopWatchdogWorker @ 0x140578DB0 (PopWatchdogWorker.c)
 *     ObpProcessRemoveObjectQueue @ 0x140663DF0 (ObpProcessRemoveObjectQueue.c)
 *     EtwpEnableGuid @ 0x140715CA4 (EtwpEnableGuid.c)
 *     CmFcpChangeSubscriptionWrapper @ 0x14087E410 (CmFcpChangeSubscriptionWrapper.c)
 *     VfThunkApplyMandatoryThunks @ 0x1409D8B7C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x1409D8C64 (VfThunkApplyThunks.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 */

__int64 __fastcall MmQuitNextSession(struct _DMA_ADAPTER *a1)
{
  HalPutDmaAdapter(a1);
  return 0LL;
}
