/*
 * XREFs of Feature_4184807738__private_IsEnabledFallback @ 0x1C016DC60
 * Callers:
 *     Feature_4184807738__private_IsEnabledDeviceUsage @ 0x1C016DC28 (Feature_4184807738__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C01667C0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_4184807738__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_4184807738__private_descriptor);
}
