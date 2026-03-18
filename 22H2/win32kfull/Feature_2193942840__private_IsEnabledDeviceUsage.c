/*
 * XREFs of Feature_2193942840__private_IsEnabledDeviceUsage @ 0x1C01405A0
 * Callers:
 *     NtGdiEngGradientFill @ 0x1C02C9C50 (NtGdiEngGradientFill.c)
 *     NtGdiEngStretchBlt @ 0x1C02CAB20 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C02CB070 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngTextOut @ 0x1C02CBFB0 (NtGdiEngTextOut.c)
 * Callees:
 *     Feature_2193942840__private_IsEnabledFallback @ 0x1C01405D8 (Feature_2193942840__private_IsEnabledFallback.c)
 */

__int64 Feature_2193942840__private_IsEnabledDeviceUsage()
{
  if ( (Feature_2193942840__private_featureState & 0x10) != 0 )
    return Feature_2193942840__private_featureState & 1;
  else
    return Feature_2193942840__private_IsEnabledFallback((unsigned int)Feature_2193942840__private_featureState, 3LL);
}
