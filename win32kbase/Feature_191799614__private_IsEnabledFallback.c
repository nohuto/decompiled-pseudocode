/*
 * XREFs of Feature_191799614__private_IsEnabledFallback @ 0x1C00E157C
 * Callers:
 *     Feature_191799614__private_IsEnabledDeviceUsage @ 0x1C00E1544 (Feature_191799614__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C00DC9A0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_191799614__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_191799614__private_descriptor);
}
