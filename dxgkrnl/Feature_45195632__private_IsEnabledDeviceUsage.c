__int64 Feature_45195632__private_IsEnabledDeviceUsage()
{
  if ( (Feature_45195632__private_featureState & 0x10) != 0 )
    return Feature_45195632__private_featureState & 1;
  else
    return Feature_45195632__private_IsEnabledFallback((unsigned int)Feature_45195632__private_featureState, 3LL);
}
