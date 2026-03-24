/*
 * XREFs of Feature_895686970__private_IsEnabledFallback @ 0x1C016B288
 * Callers:
 *     Feature_895686970__private_IsEnabledDeviceUsage @ 0x1C016B250 (Feature_895686970__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C01667C0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_895686970__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_895686970__private_descriptor);
}
