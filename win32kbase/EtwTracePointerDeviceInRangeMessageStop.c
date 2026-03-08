/*
 * XREFs of EtwTracePointerDeviceInRangeMessageStop @ 0x1C0163D60
 * Callers:
 *     ApiSetPostPointerDeviceInRangeMessage @ 0x1C0245C80 (ApiSetPostPointerDeviceInRangeMessage.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00EDED8 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTracePointerDeviceInRangeMessageStop(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &PointerDeviceInRangeMessageStop, &W32kControlGuid);
  return result;
}
