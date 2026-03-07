__int64 Feature_FixExtendedFrameBoundsApi__private_IsEnabledDeviceUsage()
{
  if ( (Feature_FixExtendedFrameBoundsApi__private_featureState & 0x10) != 0 )
    return Feature_FixExtendedFrameBoundsApi__private_featureState & 1;
  else
    return Feature_FixExtendedFrameBoundsApi__private_IsEnabledFallback(
             (unsigned int)Feature_FixExtendedFrameBoundsApi__private_featureState,
             3LL);
}
