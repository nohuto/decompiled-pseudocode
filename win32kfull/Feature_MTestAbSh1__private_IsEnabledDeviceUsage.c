__int64 Feature_MTestAbSh1__private_IsEnabledDeviceUsage()
{
  if ( (Feature_MTestAbSh1__private_featureState & 0x10) != 0 )
    return Feature_MTestAbSh1__private_featureState & 1;
  else
    return Feature_MTestAbSh1__private_IsEnabledFallback((unsigned int)Feature_MTestAbSh1__private_featureState, 3LL);
}
