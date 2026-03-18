/*
 * XREFs of PopPolicyTimeChange @ 0x1408088B0
 * Callers:
 *     PopPolicyWorkerThread @ 0x140250220 (PopPolicyWorkerThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PopEventCalloutDispatch @ 0x1403B69DC (PopEventCalloutDispatch.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     ExAcquireTimeRefreshLock @ 0x1407D6F54 (ExAcquireTimeRefreshLock.c)
 */

__int64 PopPolicyTimeChange()
{
  ExAcquireTimeRefreshLock(1u);
  ZwUpdateWnfStateData((__int64)&WNF_PO_SYSTEM_TIME_CHANGED, (__int64)&PopTimeChangeInfo);
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
  PopEventCalloutDispatch(3, 0LL);
  return 0LL;
}
