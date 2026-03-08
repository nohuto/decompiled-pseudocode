/*
 * XREFs of Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledFallback @ 0x1C012C7CC
 * Callers:
 *     Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledDeviceUsage @ 0x1C012C794 (Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C012CF68 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &wil_details_featureDescriptors_a);
}
