__int64 Feature_1697191224__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1697191224__private_featureState & 0x10) != 0 )
    return Feature_1697191224__private_featureState & 1;
  else
    return Feature_1697191224__private_IsEnabledFallback((unsigned int)Feature_1697191224__private_featureState, 3LL);
}
