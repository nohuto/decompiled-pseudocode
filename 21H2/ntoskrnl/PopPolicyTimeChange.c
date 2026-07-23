/*
 * XREFs of PopPolicyTimeChange @ 0x14077A4B0
 * Callers:
 *     PopPolicyWorkerThread @ 0x1402434B0 (PopPolicyWorkerThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     PopEventCalloutDispatch @ 0x1403A78CC (PopEventCalloutDispatch.c)
 *     ZwUpdateWnfStateData @ 0x1403FDF80 (ZwUpdateWnfStateData.c)
 *     ExAcquireTimeRefreshLock @ 0x1406B2FF4 (ExAcquireTimeRefreshLock.c)
 */

__int64 PopPolicyTimeChange()
{
  ExAcquireTimeRefreshLock(1u);
  ZwUpdateWnfStateData(&WNF_PO_SYSTEM_TIME_CHANGED, &PopTimeChangeInfo, 0x10u, 0LL, 0LL, 0, 0);
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
  PopEventCalloutDispatch(3, 0LL);
  return 0LL;
}
