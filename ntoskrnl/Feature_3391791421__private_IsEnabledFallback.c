/*
 * XREFs of Feature_3391791421__private_IsEnabledFallback @ 0x1404118F4
 * Callers:
 *     Feature_3391791421__private_IsEnabledDeviceUsage @ 0x1404118BC (Feature_3391791421__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140409AE0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_3391791421__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_3391791421__private_descriptor);
}
