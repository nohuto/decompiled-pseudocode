/*
 * XREFs of Feature_YieldToHAM__private_IsEnabledFallback @ 0x1C012D40C
 * Callers:
 *     Feature_YieldToHAM__private_IsEnabledDeviceUsage @ 0x1C012D3D4 (Feature_YieldToHAM__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C012CF68 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_YieldToHAM__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_YieldToHAM__private_descriptor);
}
