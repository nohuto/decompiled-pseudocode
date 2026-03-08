/*
 * XREFs of Feature_REFSDV__private_IsEnabledNoReporting @ 0x14040A138
 * Callers:
 *     RtlIsFeatureEnabledForEnterprise @ 0x14040BC10 (RtlIsFeatureEnabledForEnterprise.c)
 *     IoInitSystem @ 0x140B5E3E0 (IoInitSystem.c)
 * Callees:
 *     Feature_REFSDV__private_IsEnabledFallback @ 0x14040A11C (Feature_REFSDV__private_IsEnabledFallback.c)
 */

__int64 Feature_REFSDV__private_IsEnabledNoReporting()
{
  if ( (Feature_REFSDV__private_featureState & 2) != 0 )
    return Feature_REFSDV__private_featureState & 1;
  else
    return Feature_REFSDV__private_IsEnabledFallback((unsigned int)Feature_REFSDV__private_featureState, 0);
}
