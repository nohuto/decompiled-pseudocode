__int64 Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_featureState & 0x10) != 0 )
    return Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_featureState & 1;
  else
    return Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_featureState,
             3LL);
}
