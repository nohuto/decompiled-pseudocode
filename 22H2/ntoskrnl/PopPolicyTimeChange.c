/*
 * XREFs of PopPolicyTimeChange @ 0x14077A1F0
 * Callers:
 *     PopPolicyWorkerThread @ 0x14031E2A0 (PopPolicyWorkerThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     PopEventCalloutDispatch @ 0x1403A707C (PopEventCalloutDispatch.c)
 *     ZwUpdateWnfStateData @ 0x1403FD420 (ZwUpdateWnfStateData.c)
 *     ExAcquireTimeRefreshLock @ 0x1407095E4 (ExAcquireTimeRefreshLock.c)
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
