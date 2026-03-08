/*
 * XREFs of Feature_REFSDV__private_IsEnabledFallback @ 0x14040A11C
 * Callers:
 *     Feature_REFSDV__private_IsEnabledNoReporting @ 0x14040A138 (Feature_REFSDV__private_IsEnabledNoReporting.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140409AE0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_REFSDV__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_REFSDV__private_descriptor);
}
