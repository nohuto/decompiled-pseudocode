/*
 * XREFs of PopPolicyTimeChange @ 0x140991540
 * Callers:
 *     PopPolicyWorkerThread @ 0x1402F6DE0 (PopPolicyWorkerThread.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     PopEventCalloutDispatch @ 0x1403B127C (PopEventCalloutDispatch.c)
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 *     ExAcquireTimeRefreshLock @ 0x1407E2A54 (ExAcquireTimeRefreshLock.c)
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
