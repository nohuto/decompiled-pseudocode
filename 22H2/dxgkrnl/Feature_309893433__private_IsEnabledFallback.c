/*
 * XREFs of Feature_309893433__private_IsEnabledFallback @ 0x1C00259D8
 * Callers:
 *     Feature_309893433__private_IsEnabledDeviceUsage @ 0x1C00259A0 (Feature_309893433__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C00259F4 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_309893433__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_309893433__private_descriptor);
}
