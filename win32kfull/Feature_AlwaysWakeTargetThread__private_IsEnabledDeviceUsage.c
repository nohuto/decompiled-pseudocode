__int64 Feature_AlwaysWakeTargetThread__private_IsEnabledDeviceUsage()
{
  if ( (Feature_AlwaysWakeTargetThread__private_featureState & 0x10) != 0 )
    return Feature_AlwaysWakeTargetThread__private_featureState & 1;
  else
    return Feature_AlwaysWakeTargetThread__private_IsEnabledFallback(
             (unsigned int)Feature_AlwaysWakeTargetThread__private_featureState,
             3LL);
}
