__int64 Feature_AbydosInfra__private_IsEnabledDeviceUsage()
{
  if ( (Feature_AbydosInfra__private_featureState & 0x10) != 0 )
    return Feature_AbydosInfra__private_featureState & 1;
  else
    return Feature_AbydosInfra__private_IsEnabledFallback((unsigned int)Feature_AbydosInfra__private_featureState, 3LL);
}
