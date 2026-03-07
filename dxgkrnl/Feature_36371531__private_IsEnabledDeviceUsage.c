__int64 Feature_36371531__private_IsEnabledDeviceUsage()
{
  if ( (Feature_36371531__private_featureState & 0x10) != 0 )
    return Feature_36371531__private_featureState & 1;
  else
    return Feature_36371531__private_IsEnabledFallback((unsigned int)Feature_36371531__private_featureState, 3LL);
}
