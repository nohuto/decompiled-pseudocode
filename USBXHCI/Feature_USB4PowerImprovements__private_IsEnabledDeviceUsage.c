__int64 Feature_USB4PowerImprovements__private_IsEnabledDeviceUsage()
{
  if ( (Feature_USB4PowerImprovements__private_featureState & 0x10) != 0 )
    return Feature_USB4PowerImprovements__private_featureState & 1;
  else
    return Feature_USB4PowerImprovements__private_IsEnabledFallback(
             (unsigned int)Feature_USB4PowerImprovements__private_featureState,
             3LL);
}
