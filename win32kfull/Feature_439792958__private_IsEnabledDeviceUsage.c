/*
 * XREFs of Feature_439792958__private_IsEnabledDeviceUsage @ 0x1C012EE90
 * Callers:
 *     MNSetupAnimationDC @ 0x1C00C1D98 (MNSetupAnimationDC.c)
 *     MNAllocMenuState @ 0x1C0201C50 (MNAllocMenuState.c)
 *     xxxMNEndMenuStateInternal @ 0x1C02026A0 (xxxMNEndMenuStateInternal.c)
 * Callees:
 *     Feature_439792958__private_IsEnabledFallback @ 0x1C012EEC8 (Feature_439792958__private_IsEnabledFallback.c)
 */

__int64 Feature_439792958__private_IsEnabledDeviceUsage()
{
  if ( (Feature_439792958__private_featureState & 0x10) != 0 )
    return Feature_439792958__private_featureState & 1;
  else
    return Feature_439792958__private_IsEnabledFallback((unsigned int)Feature_439792958__private_featureState, 3LL);
}
