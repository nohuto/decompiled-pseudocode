/*
 * XREFs of Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceUsage @ 0x14040C79C
 * Callers:
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting @ 0x14040C880 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting.c)
 * Callees:
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledFallback @ 0x14040C7D4 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_AutoBoostEtwEventingFixes__private_featureState & 0x10) != 0 )
    return Feature_Servicing_AutoBoostEtwEventingFixes__private_featureState & 1;
  else
    return Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_AutoBoostEtwEventingFixes__private_featureState,
             3LL);
}
