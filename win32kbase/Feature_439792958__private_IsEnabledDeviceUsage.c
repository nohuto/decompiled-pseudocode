/*
 * XREFs of Feature_439792958__private_IsEnabledDeviceUsage @ 0x1C00DC850
 * Callers:
 *     DestroyProcessInfo @ 0x1C00D51B0 (DestroyProcessInfo.c)
 *     HmgCheckDCForPrivateReferences @ 0x1C0185D28 (HmgCheckDCForPrivateReferences.c)
 * Callees:
 *     Feature_439792958__private_IsEnabledFallback @ 0x1C00DC888 (Feature_439792958__private_IsEnabledFallback.c)
 */

__int64 Feature_439792958__private_IsEnabledDeviceUsage()
{
  if ( (Feature_439792958__private_featureState & 0x10) != 0 )
    return Feature_439792958__private_featureState & 1;
  else
    return Feature_439792958__private_IsEnabledFallback((unsigned int)Feature_439792958__private_featureState, 3LL);
}
