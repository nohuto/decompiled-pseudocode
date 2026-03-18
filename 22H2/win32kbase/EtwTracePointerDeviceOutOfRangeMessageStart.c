/*
 * XREFs of EtwTracePointerDeviceOutOfRangeMessageStart @ 0x1C013AE30
 * Callers:
 *     ApiSetPostPointerDeviceOutOfRangeMessage @ 0x1C02080A4 (ApiSetPostPointerDeviceOutOfRangeMessage.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00DF278 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTracePointerDeviceOutOfRangeMessageStart(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &PointerDeviceOutOfRangeMessageStart, &W32kControlGuid);
  return result;
}
