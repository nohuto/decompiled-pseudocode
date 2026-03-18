/*
 * XREFs of EtwTracePointerDeviceArrivalStop @ 0x1C013AD00
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C017F574 (RIMAllocateHidDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0183828 (RIMVirtAllocateHidDesc.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00DF278 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTracePointerDeviceArrivalStop(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &PointerDeviceArrivalStop, &W32kControlGuid);
  return result;
}
