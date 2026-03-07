__int64 Feature_YieldToHAM__private_IsEnabledDeviceUsage()
{
  if ( (Feature_YieldToHAM__private_featureState & 0x10) != 0 )
    return Feature_YieldToHAM__private_featureState & 1;
  else
    return Feature_YieldToHAM__private_IsEnabledFallback((unsigned int)Feature_YieldToHAM__private_featureState, 3LL);
}
