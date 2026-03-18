/*
 * XREFs of Feature_1109720378__private_IsEnabledFallback @ 0x1404118FC
 * Callers:
 *     Feature_1109720378__private_IsEnabledDeviceUsage @ 0x1404118C4 (Feature_1109720378__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14040F26C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_1109720378__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_1109720378__private_descriptor);
}
