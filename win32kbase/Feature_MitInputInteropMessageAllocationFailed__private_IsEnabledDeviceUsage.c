__int64 Feature_MitInputInteropMessageAllocationFailed__private_IsEnabledDeviceUsage()
{
  if ( (Feature_MitInputInteropMessageAllocationFailed__private_featureState & 0x10) != 0 )
    return Feature_MitInputInteropMessageAllocationFailed__private_featureState & 1;
  else
    return Feature_MitInputInteropMessageAllocationFailed__private_IsEnabledFallback(
             (unsigned int)Feature_MitInputInteropMessageAllocationFailed__private_featureState,
             3LL);
}
