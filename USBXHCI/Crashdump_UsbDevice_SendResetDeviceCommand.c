__int64 __fastcall Crashdump_UsbDevice_SendResetDeviceCommand(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // edi
  int v5; // r8d
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_SendResetDeviceCommand: begin\n");
  v2 = *(_QWORD *)(a1 + 16);
  v3 = (*(unsigned __int8 *)(a1 + 56) << 24) | 0x4400;
  v7 = 0LL;
  HIDWORD(v7) = v3;
  v4 = Crashdump_Command_SendCommand(v2, (__int64)&v7, 0LL);
  if ( v4 >= 0 )
  {
    v5 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 12LL) >> 27;
    if ( v5 != 1 )
    {
      DbgPrintEx(
        0x93u,
        1u,
        "XHCIDUMP: SlotId %u: After reset device command, slot state is not default, it is %u\n",
        *(unsigned __int8 *)(a1 + 56),
        v5);
      v4 = -1073741630;
    }
  }
  else
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: SlotId %u: Reset device command failed\n", *(unsigned __int8 *)(a1 + 56));
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_SendResetDeviceCommand: end 0x%X\n", v4);
  return (unsigned int)v4;
}
