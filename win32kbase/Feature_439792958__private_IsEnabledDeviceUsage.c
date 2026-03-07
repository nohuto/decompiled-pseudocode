__int64 Feature_439792958__private_IsEnabledDeviceUsage()
{
  if ( (Feature_439792958__private_featureState & 0x10) != 0 )
    return Feature_439792958__private_featureState & 1;
  else
    return Feature_439792958__private_IsEnabledFallback((unsigned int)Feature_439792958__private_featureState, 3LL);
}
