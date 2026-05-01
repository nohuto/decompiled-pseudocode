/*
 * XREFs of CrmStateMonitorStateSet @ 0x18002B824
 * Callers:
 *     CrmStateMonitorTimeSinceLogonCallback @ 0x18002AF00 (CrmStateMonitorTimeSinceLogonCallback.c)
 *     CrmStateMonitorSebCallback @ 0x18002AF70 (CrmStateMonitorSebCallback.c)
 *     CrmStateMonitorPostShellReadyUsageCallback @ 0x18002B5B0 (CrmStateMonitorPostShellReadyUsageCallback.c)
 *     CrmStateMonitorPostShellReadySetAndReset @ 0x180036900 (CrmStateMonitorPostShellReadySetAndReset.c)
 *     CrmStateMonitorTimeSinceBootCallback @ 0x180037670 (CrmStateMonitorTimeSinceBootCallback.c)
 *     CrmStateMonitorGPUUsageCSCallback @ 0x180038280 (CrmStateMonitorGPUUsageCSCallback.c)
 *     CrmStateMonitorPostResumeUsageCallback @ 0x18003B2E0 (CrmStateMonitorPostResumeUsageCallback.c)
 *     CrmSuspendNotification @ 0x18003BCF0 (CrmSuspendNotification.c)
 *     CrmStateMonitorPostResumeSetAndReset @ 0x18003BF84 (CrmStateMonitorPostResumeSetAndReset.c)
 *     CrmStateMonitorNetworkUpdateState @ 0x18003C8F0 (CrmStateMonitorNetworkUpdateState.c)
 *     CrmStateMonitorTimeSinceLogonReset @ 0x18003D720 (CrmStateMonitorTimeSinceLogonReset.c)
 *     CrmStateMonitorPowerSettingsCallback @ 0x18003DD80 (CrmStateMonitorPowerSettingsCallback.c)
 *     CrmStateMonitorDisconnectedStandbyCallback @ 0x1800428F0 (CrmStateMonitorDisconnectedStandbyCallback.c)
 *     CrmStateMonitorPowerConstrainedCallback @ 0x180043030 (CrmStateMonitorPowerConstrainedCallback.c)
 *     CrmStateMonitorCsAcDcCallback @ 0x1800432C0 (CrmStateMonitorCsAcDcCallback.c)
 *     CrmStateMonitorWNFCallback @ 0x180043570 (CrmStateMonitorWNFCallback.c)
 *     CrmStateMonitorCPUUsageCSCallback @ 0x180043830 (CrmStateMonitorCPUUsageCSCallback.c)
 *     CrmStateMonitorSystemDiskUsageCSCallback @ 0x1800439B0 (CrmStateMonitorSystemDiskUsageCSCallback.c)
 *     CrmStateMonitorDelayedCsCallback @ 0x180043C10 (CrmStateMonitorDelayedCsCallback.c)
 *     CrmStateMonitorDelayedAcCallback @ 0x180044070 (CrmStateMonitorDelayedAcCallback.c)
 *     CrmStateMonitorCompositeTestCallback @ 0x180085350 (CrmStateMonitorCompositeTestCallback.c)
 *     CrmStateMonitorDelayedAcTimerCallback @ 0x180085520 (CrmStateMonitorDelayedAcTimerCallback.c)
 *     CrmStateMonitorDelayedCsTimerCallback @ 0x1800855C0 (CrmStateMonitorDelayedCsTimerCallback.c)
 *     CrmStateMonitorWorkerThread @ 0x180085990 (CrmStateMonitorWorkerThread.c)
 * Callees:
 *     CrmLogStateMonitorStateSet @ 0x18002BBD4 (CrmLogStateMonitorStateSet.c)
 *     CrmStateMonitorLogDataGet @ 0x18002BDB0 (CrmStateMonitorLogDataGet.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180047B22 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180047B60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CrmStateMonitorStateSet(void **a1, const void *a2, size_t a3, int a4)
{
  unsigned int *i; // rbx
  _BYTE v10[56]; // [rsp+20h] [rbp-68h] BYREF

  if ( !a4 )
  {
    RtlAcquireSRWLockExclusive(a1 + 1);
    *((_DWORD *)a1 + 4) = GetCurrentThreadId();
  }
  CrmStateMonitorLogDataGet(a1, v10, a2);
  memcpy_0(a1[5], a2, a3);
  for ( i = (unsigned int *)a1[3]; i != (unsigned int *)(a1 + 3); i = *(unsigned int **)i )
    (*((void (__fastcall **)(unsigned int *, _QWORD, const void *))i - 1))(i - 2, *(unsigned int *)a1, a2);
  if ( !a4 )
  {
    *((_DWORD *)a1 + 4) = 0;
    RtlReleaseSRWLockExclusive(a1 + 1);
  }
  return CrmLogStateMonitorStateSet(a1, v10);
}
