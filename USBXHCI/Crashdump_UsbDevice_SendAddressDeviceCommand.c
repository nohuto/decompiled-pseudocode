/*
 * XREFs of Crashdump_UsbDevice_SendAddressDeviceCommand @ 0x1C0050C40
 * Callers:
 *     Crashdump_UsbDevice_Configure @ 0x1C004FC34 (Crashdump_UsbDevice_Configure.c)
 * Callees:
 *     memset @ 0x1C0020700 (memset.c)
 *     Crashdump_Command_SendCommand @ 0x1C004EB8C (Crashdump_Command_SendCommand.c)
 */

__int64 __fastcall Crashdump_UsbDevice_SendAddressDeviceCommand(__int64 *a1)
{
  __int64 v2; // rbx
  __int64 v3; // r9
  int v4; // r10d
  __int64 v5; // rdx
  int v6; // ecx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // esi
  __int64 v12; // r9
  int v13; // r8d
  __int64 v15; // [rsp+60h] [rbp-18h] BYREF
  int v16; // [rsp+68h] [rbp-10h]
  int v17; // [rsp+6Ch] [rbp-Ch]

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_SendAddressDeviceCommand: begin\n");
  v2 = *a1;
  memset(*(void **)(*a1 + 472), 0, *(unsigned int *)(*a1 + 480));
  v3 = *(_QWORD *)(v2 + 472);
  *(_DWORD *)(v3 + 4) |= 3u;
  v4 = *(_DWORD *)(*(_QWORD *)a1[1] + 104LL) & 4;
  v5 = v4 != 0 ? 0x20 : 0;
  *(_DWORD *)(v5 + v3 + 32) ^= (*(_DWORD *)(v5 + v3 + 32) ^ *((_DWORD *)a1 + 20)) & 0xFFFFF;
  v6 = *(_DWORD *)(v5 + v3 + 32) ^ (*((_DWORD *)a1 + 20) ^ *(_DWORD *)(v5 + v3 + 32)) & 0xF00000;
  *(_DWORD *)(v5 + v3 + 32) = v6;
  *(_BYTE *)(v5 + v3 + 38) = *((_BYTE *)a1 + 86);
  *(_DWORD *)(v5 + v3 + 32) = v6 & 0x7FFFFFF | 0x8000000;
  v7 = a1[15];
  v8 = v4 != 0 ? 0x40 : 0;
  *(_DWORD *)(v8 + v3 + 68) ^= (*(_DWORD *)(v7 + 52) ^ *(_DWORD *)(v8 + v3 + 68)) & 0x38;
  *(_WORD *)(v8 + v3 + 70) = *(_WORD *)(v7 + 54);
  *(_DWORD *)(v8 + v3 + 68) ^= (*(_DWORD *)(v7 + 52) ^ *(_DWORD *)(v8 + v3 + 68)) & 6;
  if ( *(_BYTE *)(v7 + 128) )
    v9 = *(_QWORD *)(v7 + 136);
  else
    v9 = *(_QWORD *)(v7 + 24LL * *(unsigned int *)(v7 + 160) + 80);
  v16 = 0;
  *(_QWORD *)((v4 != 0 ? 0x40 : 0) + v3 + 72) = v9 | 1;
  v10 = a1[2];
  v17 = (*((unsigned __int8 *)a1 + 56) << 24) | 0x2C00;
  v15 = *(_QWORD *)(v2 + 464);
  v11 = Crashdump_Command_SendCommand(v10, (__int64)&v15, 0LL);
  if ( v11 >= 0 )
  {
    v12 = a1[9];
    DbgPrintEx(
      0x93u,
      3u,
      "XHCIDUMP: Slot %u: RH %u, RS %u, Speed %u, IsHub %u, NumEntries %u, Addr %u, State %u\n",
      *((unsigned __int8 *)a1 + 56),
      *(unsigned __int8 *)(v12 + 6),
      *(_DWORD *)v12 & 0xFFFFF,
      (*(_DWORD *)v12 >> 20) & 0xF,
      (*(_DWORD *)v12 >> 26) & 1,
      *(_DWORD *)v12 >> 27,
      (unsigned __int8)*(_DWORD *)(v12 + 12),
      *(_DWORD *)(v12 + 12) >> 27);
    v13 = *(_DWORD *)(a1[9] + 12) >> 27;
    if ( v13 != 2 )
    {
      DbgPrintEx(
        0x93u,
        1u,
        "XHCIDUMP: SlotId %u: After address device command, slot state is not addressed, it is %u\n",
        *((unsigned __int8 *)a1 + 56),
        v13);
      v11 = -1073741630;
    }
  }
  else
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: SlotId %u: Address device command failed\n", *((unsigned __int8 *)a1 + 56));
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_SendAddressDeviceCommand: end 0x%X\n", v11);
  return (unsigned int)v11;
}
