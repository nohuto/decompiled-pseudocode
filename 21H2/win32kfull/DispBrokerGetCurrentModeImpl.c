/*
 * XREFs of DispBrokerGetCurrentModeImpl @ 0x1C01349E0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_BrokeredDisplays_ConsoleSessions__private_ReportDeviceUsage @ 0x1C01691BC (Feature_BrokeredDisplays_ConsoleSessions__private_ReportDeviceUsage.c)
 *     Feature_DesktopDisplayBroker__private_ReportDeviceUsage @ 0x1C0169220 (Feature_DesktopDisplayBroker__private_ReportDeviceUsage.c)
 */

__int64 DispBrokerGetCurrentModeImpl()
{
  Feature_DesktopDisplayBroker__private_ReportDeviceUsage();
  if ( (unsigned int)UserIsConsoleConnection() )
  {
    Feature_BrokeredDisplays_ConsoleSessions__private_ReportDeviceUsage();
    return 0LL;
  }
  if ( !(unsigned int)UserRemoteConnectedSessionUsingWddm() )
    return 0LL;
  return 3LL;
}
