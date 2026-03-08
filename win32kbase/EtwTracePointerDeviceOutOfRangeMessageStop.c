/*
 * XREFs of EtwTracePointerDeviceOutOfRangeMessageStop @ 0x1C0163DC0
 * Callers:
 *     ApiSetPostPointerDeviceOutOfRangeMessage @ 0x1C0245DE4 (ApiSetPostPointerDeviceOutOfRangeMessage.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00EDED8 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTracePointerDeviceOutOfRangeMessageStop(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &PointerDeviceOutOfRangeMessageStop, &W32kControlGuid);
  return result;
}
