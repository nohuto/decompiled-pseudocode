__int64 Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceOpportunity()
{
  if ( (Feature_Servicing_AutoBoostEtwEventingFixes__private_featureState & 0x20) != 0 )
    return Feature_Servicing_AutoBoostEtwEventingFixes__private_featureState & 1;
  else
    return Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_AutoBoostEtwEventingFixes__private_featureState,
             4LL);
}
