__int64 Feature_191799614__private_IsEnabledDeviceUsage()
{
  if ( (Feature_191799614__private_featureState & 0x10) != 0 )
    return Feature_191799614__private_featureState & 1;
  else
    return Feature_191799614__private_IsEnabledFallback((unsigned int)Feature_191799614__private_featureState, 3LL);
}
