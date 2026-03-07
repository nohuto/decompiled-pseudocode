__int64 Feature_ReportShellHotKey__private_IsEnabledDeviceUsage()
{
  if ( (Feature_ReportShellHotKey__private_featureState & 0x10) != 0 )
    return Feature_ReportShellHotKey__private_featureState & 1;
  else
    return Feature_ReportShellHotKey__private_IsEnabledFallback(
             (unsigned int)Feature_ReportShellHotKey__private_featureState,
             3LL);
}
