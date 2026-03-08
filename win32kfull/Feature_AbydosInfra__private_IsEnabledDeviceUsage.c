/*
 * XREFs of Feature_AbydosInfra__private_IsEnabledDeviceUsage @ 0x1C012E8FC
 * Callers:
 *     NtUserShellHandwritingDelegateInput @ 0x1C01DEA30 (NtUserShellHandwritingDelegateInput.c)
 * Callees:
 *     Feature_AbydosInfra__private_IsEnabledFallback @ 0x1C012E934 (Feature_AbydosInfra__private_IsEnabledFallback.c)
 */

__int64 Feature_AbydosInfra__private_IsEnabledDeviceUsage()
{
  if ( (Feature_AbydosInfra__private_featureState & 0x10) != 0 )
    return Feature_AbydosInfra__private_featureState & 1;
  else
    return Feature_AbydosInfra__private_IsEnabledFallback((unsigned int)Feature_AbydosInfra__private_featureState, 3LL);
}
