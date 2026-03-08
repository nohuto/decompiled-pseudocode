/*
 * XREFs of Feature_3974530366__private_IsEnabledFallback @ 0x14040D3F8
 * Callers:
 *     Feature_3974530366__private_IsEnabledDeviceUsage @ 0x14040D3C0 (Feature_3974530366__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140409AE0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_3974530366__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_3974530366__private_descriptor);
}
