__int64 DispBrokerGetCurrentModeImpl()
{
  Feature_DesktopDisplayBroker__private_ReportDeviceUsage();
  if ( (unsigned int)UserIsConsoleConnection() )
    return 0LL;
  else
    return (unsigned int)UserRemoteConnectedSessionUsingWddm() != 0 ? 3 : 0;
}
