/*
 * XREFs of Feature_Servicing_Win32kbaseWatchdogTimeoutIssue__private_IsEnabledDeviceUsage @ 0x1C00DCD04
 * Callers:
 *     ??0PoWin32CalloutDeadlockTracker@@QEAA@W4_POPWIN32CALLOUT_WATCHDOG_STATE_INDEX@@@Z @ 0x1C00DCD58 (--0PoWin32CalloutDeadlockTracker@@QEAA@W4_POPWIN32CALLOUT_WATCHDOG_STATE_INDEX@@@Z.c)
 *     ??1PoWin32CalloutDeadlockTracker@@QEAA@XZ @ 0x1C00DCDE8 (--1PoWin32CalloutDeadlockTracker@@QEAA@XZ.c)
 *     W32CalloutDispatch @ 0x1C00ED390 (W32CalloutDispatch.c)
 * Callees:
 *     Feature_Servicing_Win32kbaseWatchdogTimeoutIssue__private_IsEnabledFallback @ 0x1C00DCD3C (Feature_Servicing_Win32kbaseWatchdogTimeoutIssue__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_Win32kbaseWatchdogTimeoutIssue__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_Win32kbaseWatchdogTimeoutIssue__private_featureState & 0x10) != 0 )
    return Feature_Servicing_Win32kbaseWatchdogTimeoutIssue__private_featureState & 1;
  else
    return Feature_Servicing_Win32kbaseWatchdogTimeoutIssue__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_Win32kbaseWatchdogTimeoutIssue__private_featureState,
             3LL);
}
