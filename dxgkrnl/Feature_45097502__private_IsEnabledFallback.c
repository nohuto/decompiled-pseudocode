/*
 * XREFs of Feature_45097502__private_IsEnabledFallback @ 0x1C0026D58
 * Callers:
 *     Feature_45097502__private_IsEnabledDeviceUsage @ 0x1C0026D20 (Feature_45097502__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C0024F58 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_45097502__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_45097502__private_descriptor);
}
