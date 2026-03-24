/*
 * XREFs of Feature_2932140344__private_IsEnabledFallback @ 0x1C016D058
 * Callers:
 *     Feature_2932140344__private_IsEnabledDeviceUsage @ 0x1C016D020 (Feature_2932140344__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C0165FF0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_2932140344__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_2932140344__private_descriptor);
}
