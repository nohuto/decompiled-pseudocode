/*
 * XREFs of Feature_2596596024__private_IsEnabledFallback @ 0x1C016A5F0
 * Callers:
 *     Feature_2596596024__private_IsEnabledDeviceUsage @ 0x1C016A5B8 (Feature_2596596024__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C01667C0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_2596596024__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_2596596024__private_descriptor);
}
