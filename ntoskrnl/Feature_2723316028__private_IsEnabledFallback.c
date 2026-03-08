/*
 * XREFs of Feature_2723316028__private_IsEnabledFallback @ 0x14040A228
 * Callers:
 *     Feature_2723316028__private_IsEnabledDeviceUsage @ 0x14040A1F0 (Feature_2723316028__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140409AE0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_2723316028__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_2723316028__private_descriptor);
}
