/*
 * XREFs of Crashdump_UsbDevice_ReConfigureOnPortReset @ 0x1C0050940
 * Callers:
 *     Crashdump_ResetDevice @ 0x1C004CD40 (Crashdump_ResetDevice.c)
 * Callees:
 *     Crashdump_UsbDevice_Configure @ 0x1C004FC34 (Crashdump_UsbDevice_Configure.c)
 *     Crashdump_UsbDevice_SendResetDeviceCommand @ 0x1C0050F78 (Crashdump_UsbDevice_SendResetDeviceCommand.c)
 */

__int64 __fastcall Crashdump_UsbDevice_ReConfigureOnPortReset(__int64 a1, int a2)
{
  __int64 v4; // r9
  int v5; // ebx

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_ReConfigureOnPortReset: begin\n");
  v4 = *(_QWORD *)(a1 + 72);
  DbgPrintEx(
    0x93u,
    3u,
    "XHCIDUMP: Slot %u: RH %u, RS %u, Speed %u, IsHub %u, NumEntries %u, Addr %u, State %u\n",
    *(unsigned __int8 *)(a1 + 56),
    *(unsigned __int8 *)(v4 + 6),
    *(_DWORD *)v4 & 0xFFFFF,
    (*(_DWORD *)v4 >> 20) & 0xF,
    (*(_DWORD *)v4 >> 26) & 1,
    *(_DWORD *)v4 >> 27,
    (unsigned __int8)*(_DWORD *)(v4 + 12),
    *(_DWORD *)(v4 + 12) >> 27);
  v5 = Crashdump_UsbDevice_SendResetDeviceCommand(a1);
  if ( v5 >= 0 )
    v5 = Crashdump_UsbDevice_Configure(a1, a2);
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_ReConfigureOnPortReset: end 0x%X\n", v5);
  return (unsigned int)v5;
}
