/*
 * XREFs of EtwTracePointerDeviceArrivalStart @ 0x1C0163C30
 * Callers:
 *     ApiSetEtwTracePointerDeviceArrivalStart @ 0x1C0243CA0 (ApiSetEtwTracePointerDeviceArrivalStart.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00EDED8 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTracePointerDeviceArrivalStart(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &PointerDeviceArrivalStart, &W32kControlGuid);
  return result;
}
