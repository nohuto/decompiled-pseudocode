/*
 * XREFs of EtwTracePointerDeviceOutOfRangeMessageStart @ 0x1C0163D90
 * Callers:
 *     ApiSetPostPointerDeviceOutOfRangeMessage @ 0x1C0245DE4 (ApiSetPostPointerDeviceOutOfRangeMessage.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00EDED8 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTracePointerDeviceOutOfRangeMessageStart(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &PointerDeviceOutOfRangeMessageStart, &W32kControlGuid);
  return result;
}
