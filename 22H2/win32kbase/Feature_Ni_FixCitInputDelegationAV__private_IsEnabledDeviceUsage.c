/*
 * XREFs of Feature_Ni_FixCitInputDelegationAV__private_IsEnabledDeviceUsage @ 0x1C00D6660
 * Callers:
 *     ?CitpClearDelegation@@YAXPEAU_CIT_PROCESS@@@Z @ 0x1C00CA074 (-CitpClearDelegation@@YAXPEAU_CIT_PROCESS@@@Z.c)
 *     CitEnableKeyboardDelegation @ 0x1C0234ABC (CitEnableKeyboardDelegation.c)
 * Callees:
 *     Feature_Ni_FixCitInputDelegationAV__private_IsEnabledFallback @ 0x1C00D6698 (Feature_Ni_FixCitInputDelegationAV__private_IsEnabledFallback.c)
 */

__int64 Feature_Ni_FixCitInputDelegationAV__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Ni_FixCitInputDelegationAV__private_featureState & 0x10) != 0 )
    return Feature_Ni_FixCitInputDelegationAV__private_featureState & 1;
  else
    return Feature_Ni_FixCitInputDelegationAV__private_IsEnabledFallback(
             (unsigned int)Feature_Ni_FixCitInputDelegationAV__private_featureState,
             3LL);
}
