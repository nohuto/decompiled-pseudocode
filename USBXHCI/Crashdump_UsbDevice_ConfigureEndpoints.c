__int64 __fastcall Crashdump_UsbDevice_ConfigureEndpoints(__int64 *a1)
{
  __int64 v2; // rbp
  __int64 v3; // r11
  __int64 *v4; // rsi
  unsigned int v5; // r8d
  unsigned int i; // r10d
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rdx
  unsigned int *v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r8d
  unsigned __int64 v13; // rcx
  unsigned int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rdx
  int v17; // ecx
  __int64 v18; // rcx
  int v19; // edi
  int v20; // r8d
  __int64 v22; // [rsp+30h] [rbp-18h] BYREF
  int v23; // [rsp+38h] [rbp-10h]
  int v24; // [rsp+3Ch] [rbp-Ch]

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_ConfigureEndpoints: begin\n");
  v2 = *a1;
  memset(*(void **)(*a1 + 472), 0, *(unsigned int *)(*a1 + 480));
  v3 = *(_QWORD *)(v2 + 472);
  v4 = a1 + 16;
  *(_DWORD *)(v3 + 4) |= 1u;
  v5 = 0;
  for ( i = 2; i < 0x20; ++i )
  {
    if ( ((1 << i) & 0xFFFFFFFC) != 0 )
    {
      v7 = *v4;
      if ( *v4 )
      {
        v8 = i - 1 + 2LL;
        if ( (*(_DWORD *)(*(_QWORD *)a1[1] + 104LL) & 4) != 0 )
          v9 = v8 << 6;
        else
          v9 = 32 * v8;
        v10 = (unsigned int *)(v3 + v9);
        v10[1] ^= (*(_DWORD *)(v7 + 52) ^ v10[1]) & 0x38;
        *((_WORD *)v10 + 3) = *(_WORD *)(v7 + 54);
        v10[1] ^= (*(_DWORD *)(v7 + 52) ^ v10[1]) & 6;
        *((_BYTE *)v10 + 5) = BYTE1(*(_DWORD *)(v7 + 52));
        *((_WORD *)v10 + 8) = *(_WORD *)(v7 + 64);
        if ( *(_BYTE *)(v7 + 128) )
          v11 = *(_QWORD *)(v7 + 136);
        else
          v11 = *(_QWORD *)(v7 + 24LL * *(unsigned int *)(v7 + 160) + 80);
        v12 = *v10;
        *((_QWORD *)v10 + 1) = v11;
        if ( (*(_DWORD *)(v7 + 48) & 0x7C00) != 0 )
        {
          v13 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
          v14 = v12 & 0xFFFF03FF | 0x8400;
        }
        else
        {
          v13 = v11 | 1;
          v14 = v12 & 0xFFFF03FF;
        }
        *v10 = v14;
        v5 = i;
        *((_QWORD *)v10 + 1) = v13;
        *(_DWORD *)(v3 + 4) |= 1 << i;
      }
    }
    ++v4;
  }
  v15 = -(__int64)((*(_DWORD *)(*(_QWORD *)a1[1] + 104LL) & 4) != 0);
  v23 = 0;
  v16 = v3 + 32 + (v15 & 0x20);
  v17 = (v5 << 27) | *(_DWORD *)v16 & 0x7FFFFFF;
  *(_DWORD *)v16 = v17;
  *(_DWORD *)v16 = v17 ^ (*((_DWORD *)a1 + 20) ^ v17) & 0x4000000;
  *(_BYTE *)(v16 + 7) = *((_BYTE *)a1 + 87);
  v18 = a1[2];
  v24 = (*((unsigned __int8 *)a1 + 56) << 24) | 0x3000;
  v22 = *(_QWORD *)(v2 + 464);
  v19 = Crashdump_Command_SendCommand(v18, (__int64)&v22, 0LL);
  if ( v19 >= 0 )
  {
    v20 = *(_DWORD *)(a1[9] + 12) >> 27;
    if ( v20 != 3 )
    {
      DbgPrintEx(
        0x93u,
        1u,
        "XHCIDUMP: SlotId %u: After reset device command, slot state is not configured, it is %u\n",
        *((unsigned __int8 *)a1 + 56),
        v20);
      v19 = -1073741630;
    }
  }
  else
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: SlotId %u: Configure Endpoint command failed\n", *((unsigned __int8 *)a1 + 56));
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_ConfigureEndpoints: end 0x%X\n", v19);
  return (unsigned int)v19;
}
