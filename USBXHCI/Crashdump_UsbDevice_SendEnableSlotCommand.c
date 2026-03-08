/*
 * XREFs of Crashdump_UsbDevice_SendEnableSlotCommand @ 0x1C0050EBC
 * Callers:
 *     Crashdump_UsbDevice_ReConfigureOnControllerReset @ 0x1C00507EC (Crashdump_UsbDevice_ReConfigureOnControllerReset.c)
 * Callees:
 *     Crashdump_Command_SendCommand @ 0x1C004EB8C (Crashdump_Command_SendCommand.c)
 */

__int64 __fastcall Crashdump_UsbDevice_SendEnableSlotCommand(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  int v4; // r9d
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF

  v7 = 0LL;
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_SendEnableSlotCommand: begin\n");
  v2 = *(_QWORD *)(a1 + 16);
  v6 = 0LL;
  HIDWORD(v6) = 9216;
  v3 = Crashdump_Command_SendCommand(v2, (__int64)&v6, &v7);
  if ( v3 >= 0 )
  {
    v4 = HIBYTE(HIDWORD(v7));
    *(_BYTE *)(a1 + 56) = HIBYTE(v7);
    DbgPrintEx(0x93u, 3u, "XHCIDUMP: SlotId is %u\n", v4);
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_SendEnableSlotCommand: end 0x%X\n", v3);
  return (unsigned int)v3;
}
