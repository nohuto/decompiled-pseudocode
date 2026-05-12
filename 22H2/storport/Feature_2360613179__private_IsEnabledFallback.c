/*
 * XREFs of Feature_2360613179__private_IsEnabledFallback @ 0x1C001D650
 * Callers:
 *     Feature_2360613179__private_IsEnabledDeviceUsage @ 0x1C001D618 (Feature_2360613179__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C001DEAC (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_2360613179__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_2360613179__private_descriptor);
}
