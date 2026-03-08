/*
 * XREFs of Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledFallback @ 0x1C00DDE88
 * Callers:
 *     Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledDeviceUsage @ 0x1C00DDE50 (Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C00DC9A0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &wil_details_featureDescriptors_a);
}
