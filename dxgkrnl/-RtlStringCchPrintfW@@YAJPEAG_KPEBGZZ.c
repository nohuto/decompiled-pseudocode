/*
 * XREFs of ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00154F0
 * Callers:
 *     ?DisplayID_GetManufacturerName@@YAJPEBUDisplayIDObj@@PEAG@Z @ 0x1C0071F08 (-DisplayID_GetManufacturerName@@YAJPEBUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_GetProductCode@@YAJPEBUDisplayIDObj@@PEAG@Z @ 0x1C0071FD8 (-DisplayID_GetProductCode@@YAJPEBUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_GetSerialNumber@@YAJPEBUDisplayIDObj@@PEAG@Z @ 0x1C0072050 (-DisplayID_GetSerialNumber@@YAJPEBUDisplayIDObj@@PEAG@Z.c)
 *     ?EnsureConnected@DispBrokerClient@@AEAAJXZ @ 0x1C01D5780 (-EnsureConnected@DispBrokerClient@@AEAAJXZ.c)
 *     ?SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C021AB8C (-SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C001552C (RtlStringVPrintfWorkerW.c)
 */

NTSTATUS RtlStringCchPrintfW(unsigned __int16 *a1, size_t a2, size_t *a3, ...)
{
  NTSTATUS result; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  if ( a2 - 1 <= 0x7FFFFFFE )
    return RtlStringVPrintfWorkerW(a1, a2, a3, (NTSTRSAFE_PCWSTR)a3, va);
  result = -1073741811;
  if ( a2 )
    *a1 = 0;
  return result;
}
