/*
 * XREFs of Feature_BackportGetActiveWindowInUserMode__private_IsEnabledFallback @ 0x1C00DC8DC
 * Callers:
 *     Feature_BackportGetActiveWindowInUserMode__private_IsEnabledDeviceUsage @ 0x1C00DC8A4 (Feature_BackportGetActiveWindowInUserMode__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C00DC9A0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_BackportGetActiveWindowInUserMode__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_BackportGetActiveWindowInUserMode__private_descriptor);
}
