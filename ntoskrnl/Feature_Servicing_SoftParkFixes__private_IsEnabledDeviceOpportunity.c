/*
 * XREFs of Feature_Servicing_SoftParkFixes__private_IsEnabledDeviceOpportunity @ 0x14040AE78
 * Callers:
 *     Feature_Servicing_SoftParkFixes__private_IsEnabledWithReporting @ 0x14040AF98 (Feature_Servicing_SoftParkFixes__private_IsEnabledWithReporting.c)
 * Callees:
 *     Feature_Servicing_SoftParkFixes__private_IsEnabledFallback @ 0x14040AEE8 (Feature_Servicing_SoftParkFixes__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_SoftParkFixes__private_IsEnabledDeviceOpportunity()
{
  if ( (Feature_Servicing_SoftParkFixes__private_featureState & 0x20) != 0 )
    return Feature_Servicing_SoftParkFixes__private_featureState & 1;
  else
    return Feature_Servicing_SoftParkFixes__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_SoftParkFixes__private_featureState,
             4LL);
}
