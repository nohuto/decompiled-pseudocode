__int64 Feature_P010DisplayableSupport__private_IsEnabledDeviceUsage()
{
  if ( (Feature_P010DisplayableSupport__private_featureState & 0x10) != 0 )
    return Feature_P010DisplayableSupport__private_featureState & 1;
  else
    return Feature_P010DisplayableSupport__private_IsEnabledFallback(
             (unsigned int)Feature_P010DisplayableSupport__private_featureState,
             3LL);
}
