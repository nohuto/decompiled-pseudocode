/*
 * XREFs of DispBrokerGetCurrentModeImpl @ 0x1C00F4600
 * Callers:
 *     <none>
 * Callees:
 *     Feature_DesktopDisplayBroker__private_ReportDeviceUsage @ 0x1C012E22C (Feature_DesktopDisplayBroker__private_ReportDeviceUsage.c)
 */

__int64 DispBrokerGetCurrentModeImpl()
{
  Feature_DesktopDisplayBroker__private_ReportDeviceUsage();
  if ( (unsigned int)UserIsConsoleConnection() )
    return 0LL;
  else
    return (unsigned int)UserRemoteConnectedSessionUsingWddm() != 0 ? 3 : 0;
}
