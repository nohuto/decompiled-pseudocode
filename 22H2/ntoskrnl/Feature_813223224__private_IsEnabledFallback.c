/*
 * XREFs of Feature_813223224__private_IsEnabledFallback @ 0x140410978
 * Callers:
 *     Feature_813223224__private_IsEnabledDeviceUsage @ 0x140410940 (Feature_813223224__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14040F26C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_813223224__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_813223224__private_descriptor);
}
