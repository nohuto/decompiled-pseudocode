__int64 Feature_Servicing_SoftParkFixes__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_SoftParkFixes__private_featureState & 0x10) != 0 )
    return Feature_Servicing_SoftParkFixes__private_featureState & 1;
  else
    return Feature_Servicing_SoftParkFixes__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_SoftParkFixes__private_featureState,
             3LL);
}
