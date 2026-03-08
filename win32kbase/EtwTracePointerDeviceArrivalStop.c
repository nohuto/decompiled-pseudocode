/*
 * XREFs of EtwTracePointerDeviceArrivalStop @ 0x1C0163C60
 * Callers:
 *     ApiSetEtwTracePointerDeviceArrivalStop @ 0x1C0243DC8 (ApiSetEtwTracePointerDeviceArrivalStop.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00EDED8 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTracePointerDeviceArrivalStop(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &PointerDeviceArrivalStop, &W32kControlGuid);
  return result;
}
