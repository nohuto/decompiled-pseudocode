/*
 * XREFs of Feature_AlwaysWakeTargetThread__private_IsEnabledFallback @ 0x1C012D5F8
 * Callers:
 *     Feature_AlwaysWakeTargetThread__private_IsEnabledDeviceUsage @ 0x1C012D5C0 (Feature_AlwaysWakeTargetThread__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C012CF68 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_AlwaysWakeTargetThread__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_AlwaysWakeTargetThread__private_descriptor);
}
