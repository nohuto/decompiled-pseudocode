/*
 * XREFs of Feature_41457977__private_IsEnabledFallback @ 0x1C0024DF8
 * Callers:
 *     Feature_41457977__private_IsEnabledDeviceUsage @ 0x1C0024DC0 (Feature_41457977__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C00249D8 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_41457977__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_41457977__private_descriptor);
}
