__int64 Feature_FastResource2__private_IsEnabledDeviceUsage()
{
  if ( (Feature_FastResource2__private_featureState & 0x10) != 0 )
    return Feature_FastResource2__private_featureState & 1;
  else
    return Feature_FastResource2__private_IsEnabledFallback(
             (unsigned int)Feature_FastResource2__private_featureState,
             3LL);
}
