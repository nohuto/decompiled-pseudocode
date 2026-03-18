/*
 * XREFs of Feature_VHDAutoAttachOnBoot__private_IsEnabledFallback @ 0x14040F7EC
 * Callers:
 *     Feature_VHDAutoAttachOnBoot__private_IsEnabledDeviceUsage @ 0x14040F7B4 (Feature_VHDAutoAttachOnBoot__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14040F26C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_VHDAutoAttachOnBoot__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_VHDAutoAttachOnBoot__private_descriptor);
}
