/*
 * XREFs of Feature_AnimateWorkAreaChanges__private_IsEnabledFallback @ 0x1C012F2B8
 * Callers:
 *     Feature_AnimateWorkAreaChanges__private_IsEnabledDeviceUsage @ 0x1C012F280 (Feature_AnimateWorkAreaChanges__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C012CF68 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_AnimateWorkAreaChanges__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_AnimateWorkAreaChanges__private_descriptor);
}
