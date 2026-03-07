__int64 Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledDeviceUsage()
{
  if ( (Feature_ThrottleBackgroundRawMouseInput__private_featureState & 0x10) != 0 )
    return Feature_ThrottleBackgroundRawMouseInput__private_featureState & 1;
  else
    return Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledFallback(
             (unsigned int)Feature_ThrottleBackgroundRawMouseInput__private_featureState,
             3LL);
}
