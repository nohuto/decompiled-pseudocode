/*
 * XREFs of Feature_LivedumpProcessFiltering__private_IsEnabledFallback @ 0x140409F58
 * Callers:
 *     Feature_LivedumpProcessFiltering__private_IsEnabledDeviceUsage @ 0x140409F20 (Feature_LivedumpProcessFiltering__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140409AE0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_LivedumpProcessFiltering__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_LivedumpProcessFiltering__private_descriptor);
}
