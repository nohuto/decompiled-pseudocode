/*
 * XREFs of Feature_Servicing_Win32kbaseWatchdogTimeoutIssue__private_IsEnabledDeviceUsage @ 0x14040B94C
 * Callers:
 *     PopWin32CalloutWatchdogCallback @ 0x140998C70 (PopWin32CalloutWatchdogCallback.c)
 * Callees:
 *     Feature_Servicing_Win32kbaseWatchdogTimeoutIssue__private_IsEnabledFallback @ 0x14040B984 (Feature_Servicing_Win32kbaseWatchdogTimeoutIssue__private_IsEnabledFallback.c)
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
