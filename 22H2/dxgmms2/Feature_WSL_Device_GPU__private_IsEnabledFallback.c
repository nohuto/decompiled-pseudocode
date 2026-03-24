/*
 * XREFs of Feature_WSL_Device_GPU__private_IsEnabledFallback @ 0x1C0017A30
 * Callers:
 *     Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage @ 0x1C00179F8 (Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C00181F8 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_WSL_Device_GPU__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_WSL_Device_GPU__private_descriptor);
}
