/*
 * XREFs of Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceOpportunity @ 0x14040C764
 * Callers:
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting @ 0x14040C880 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting.c)
 * Callees:
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledFallback @ 0x14040C7D4 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceOpportunity()
{
  if ( (Feature_Servicing_AutoBoostEtwEventingFixes__private_featureState & 0x20) != 0 )
    return Feature_Servicing_AutoBoostEtwEventingFixes__private_featureState & 1;
  else
    return Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_AutoBoostEtwEventingFixes__private_featureState,
             4LL);
}
