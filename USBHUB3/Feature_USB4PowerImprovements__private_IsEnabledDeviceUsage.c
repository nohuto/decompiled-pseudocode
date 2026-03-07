__int64 Feature_USB4PowerImprovements__private_IsEnabledDeviceUsage()
{
  if ( (WPP_MAIN_CB.DeviceLock.Header.Type & 0x10) != 0 )
    return WPP_MAIN_CB.DeviceLock.Header.Type & 1;
  else
    return Feature_USB4PowerImprovements__private_IsEnabledFallback(
             (unsigned int)WPP_MAIN_CB.DeviceLock.Header.Lock,
             3u);
}
