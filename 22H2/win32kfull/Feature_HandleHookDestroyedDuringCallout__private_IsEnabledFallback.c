/*
 * XREFs of Feature_HandleHookDestroyedDuringCallout__private_IsEnabledFallback @ 0x1C013A624
 * Callers:
 *     Feature_HandleHookDestroyedDuringCallout__private_IsEnabledDeviceUsage @ 0x1C013A5EC (Feature_HandleHookDestroyedDuringCallout__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C01394F4 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_HandleHookDestroyedDuringCallout__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_HandleHookDestroyedDuringCallout__private_descriptor);
}
