__int64 Feature_EnableIddCx110__private_IsEnabledDeviceUsage()
{
  if ( (Feature_EnableIddCx110__private_featureState & 0x10) != 0 )
    return Feature_EnableIddCx110__private_featureState & 1;
  else
    return Feature_EnableIddCx110__private_IsEnabledFallback(
             (unsigned int)Feature_EnableIddCx110__private_featureState,
             3LL);
}
