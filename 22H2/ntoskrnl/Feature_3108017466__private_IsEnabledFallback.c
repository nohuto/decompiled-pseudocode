/*
 * XREFs of Feature_3108017466__private_IsEnabledFallback @ 0x14040F654
 * Callers:
 *     Feature_3108017466__private_IsEnabledDeviceUsage @ 0x14040F61C (Feature_3108017466__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14040F26C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_3108017466__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_3108017466__private_descriptor);
}
