__int64 Feature_1626422585__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1626422585__private_featureState & 0x10) != 0 )
    return Feature_1626422585__private_featureState & 1;
  else
    return Feature_1626422585__private_IsEnabledFallback((unsigned int)Feature_1626422585__private_featureState, 3LL);
}
