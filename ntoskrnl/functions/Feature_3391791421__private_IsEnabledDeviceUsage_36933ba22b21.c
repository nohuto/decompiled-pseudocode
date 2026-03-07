__int64 Feature_3391791421__private_IsEnabledDeviceUsage()
{
  if ( (Feature_3391791421__private_featureState & 0x10) != 0 )
    return Feature_3391791421__private_featureState & 1;
  else
    return Feature_3391791421__private_IsEnabledFallback((unsigned int)Feature_3391791421__private_featureState, 3LL);
}
