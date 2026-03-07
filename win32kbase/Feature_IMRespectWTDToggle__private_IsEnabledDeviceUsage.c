__int64 Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage()
{
  if ( (Feature_IMRespectWTDToggle__private_featureState & 0x10) != 0 )
    return Feature_IMRespectWTDToggle__private_featureState & 1;
  else
    return Feature_IMRespectWTDToggle__private_IsEnabledFallback(
             (unsigned int)Feature_IMRespectWTDToggle__private_featureState,
             3LL);
}
