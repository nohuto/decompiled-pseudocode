/*
 * XREFs of Feature_2932140344__private_IsEnabledDeviceUsage @ 0x1C016D960
 * Callers:
 *     NtGdiEngStretchBltROP @ 0x1C013B380 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngTextOut @ 0x1C013C110 (NtGdiEngTextOut.c)
 *     NtGdiEngStretchBlt @ 0x1C013D2A0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngGradientFill @ 0x1C02B3070 (NtGdiEngGradientFill.c)
 * Callees:
 *     Feature_2932140344__private_IsEnabledFallback @ 0x1C016D998 (Feature_2932140344__private_IsEnabledFallback.c)
 */

__int64 Feature_2932140344__private_IsEnabledDeviceUsage()
{
  if ( (Feature_2932140344__private_featureState & 0x10) != 0 )
    return Feature_2932140344__private_featureState & 1;
  else
    return Feature_2932140344__private_IsEnabledFallback((unsigned int)Feature_2932140344__private_featureState, 3LL);
}
