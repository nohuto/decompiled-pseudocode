__int64 Feature_BackportGetActiveWindowInUserMode__private_IsEnabledDeviceUsage()
{
  if ( (Feature_BackportGetActiveWindowInUserMode__private_featureState & 0x10) != 0 )
    return Feature_BackportGetActiveWindowInUserMode__private_featureState & 1;
  else
    return Feature_BackportGetActiveWindowInUserMode__private_IsEnabledFallback(
             (unsigned int)Feature_BackportGetActiveWindowInUserMode__private_featureState,
             3LL);
}
