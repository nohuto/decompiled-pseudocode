__int64 Feature_503751999__private_IsEnabledDeviceUsage()
{
  if ( (Feature_503751999__private_featureState & 0x10) != 0 )
    return Feature_503751999__private_featureState & 1;
  else
    return Feature_503751999__private_IsEnabledFallback((unsigned int)Feature_503751999__private_featureState, 3LL);
}
