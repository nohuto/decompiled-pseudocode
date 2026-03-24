/*
 * XREFs of Feature_3088355641__private_IsEnabledFallback @ 0x1C0027C3C
 * Callers:
 *     Feature_3088355641__private_IsEnabledDeviceUsage @ 0x1C0027C04 (Feature_3088355641__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C00259F4 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_3088355641__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_3088355641__private_descriptor);
}
