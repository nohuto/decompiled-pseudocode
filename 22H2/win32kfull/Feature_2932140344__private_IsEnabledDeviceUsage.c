/*
 * XREFs of Feature_2932140344__private_IsEnabledDeviceUsage @ 0x1C016D020
 * Callers:
 *     NtGdiEngStretchBltROP @ 0x1C013AF80 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngTextOut @ 0x1C013BC80 (NtGdiEngTextOut.c)
 *     NtGdiEngStretchBlt @ 0x1C013CDD0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngGradientFill @ 0x1C02B27D0 (NtGdiEngGradientFill.c)
 * Callees:
 *     Feature_2932140344__private_IsEnabledFallback @ 0x1C016D058 (Feature_2932140344__private_IsEnabledFallback.c)
 */

__int64 Feature_2932140344__private_IsEnabledDeviceUsage()
{
  if ( (Feature_2932140344__private_featureState & 0x10) != 0 )
    return Feature_2932140344__private_featureState & 1;
  else
    return Feature_2932140344__private_IsEnabledFallback((unsigned int)Feature_2932140344__private_featureState, 3LL);
}
