/*
 * XREFs of Feature_DxgkGpuVaIoMmu__private_IsEnabledFallback @ 0x1C0019B7C
 * Callers:
 *     Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage @ 0x1C0019B44 (Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C001A424 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_DxgkGpuVaIoMmu__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_DxgkGpuVaIoMmu__private_descriptor);
}
