__int64 Feature_KIDV2__private_IsEnabledDeviceUsage()
{
  if ( (Feature_KIDV2__private_featureState & 0x10) != 0 )
    return Feature_KIDV2__private_featureState & 1;
  else
    return Feature_KIDV2__private_IsEnabledFallback((unsigned int)Feature_KIDV2__private_featureState, 3LL);
}
