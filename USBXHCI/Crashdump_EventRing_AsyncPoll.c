__int64 __fastcall Crashdump_EventRing_AsyncPoll(__int64 a1, __int64 *a2)
{
  unsigned int v4; // ebx
  int v5; // r10d
  __int64 v6; // rsi
  int v7; // ecx
  int v8; // edx
  __int64 v9; // r8
  int v10; // r9d
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // r9d
  int v15; // ecx
  int v16; // ecx
  int v17; // eax
  __int64 v18; // r8
  BOOL v19; // eax

  v4 = 259;
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_EventRing_Poll: begin\n");
  v5 = *(_DWORD *)(a1 + 88);
  v6 = *(_QWORD *)(a1 + 72) + 16LL * *(unsigned int *)(a1 + 92);
  v7 = *(_DWORD *)(v6 + 12);
  if ( (v7 & 1) != v5 )
    goto LABEL_37;
  v8 = (unsigned __int16)v7 >> 10;
  if ( v8 == 32 && (v7 & 4) != 0 )
    v9 = 0LL;
  else
    v9 = *(_QWORD *)v6;
  DbgPrintEx(
    0x93u,
    3u,
    "XHCIDUMP: EventRing: CS: %u, EI: %03u, ET: %u, CC: %u, Len: %u, Addr: 0x%I64X\n",
    v5,
    *(_DWORD *)(a1 + 92),
    v8,
    *(unsigned __int8 *)(v6 + 11),
    *(_DWORD *)(v6 + 8) & 0xFFFFFF,
    v9);
  v10 = (unsigned __int8)HIBYTE(*(_WORD *)(v6 + 12)) >> 2;
  if ( v10 != 32 )
  {
    if ( (*(_DWORD *)(v6 + 12) & 0xFC00) == 0x8800 )
      DbgPrintEx(
        0x93u,
        3u,
        "XHCIDUMP: Ignoring port status change event for port %u, CCS: %u, CSC: %u\n",
        *(unsigned __int8 *)(v6 + 3),
        *(_DWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 8) + 32LL)
                  + 16 * ((unsigned int)*(unsigned __int8 *)(v6 + 3) - 1 + 64LL)) & 1,
        (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 8) + 32LL)
                   + 16 * ((unsigned int)*(unsigned __int8 *)(v6 + 3) - 1 + 64LL)) >> 17) & 1);
    else
      DbgPrintEx(
        0x93u,
        2u,
        "XHCIDUMP: Unsolicited event encountered: ET: %u, CC: %u\n",
        v10,
        *(unsigned __int8 *)(v6 + 11));
    goto LABEL_31;
  }
  v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 576LL)
                  + 8 * (((unsigned __int64)*(unsigned int *)(v6 + 12) >> 16) & 0x1F)
                  + 112);
  *a2 = *(_QWORD *)(v11 + 176);
  if ( *(_DWORD *)(v11 + 160) )
    v12 = *(_QWORD *)(v11 + 88);
  else
    v12 = *(_QWORD *)(v11 + 112);
  *(_DWORD *)(v12 + 12) &= ~1u;
  ++*(_QWORD *)(v11 + 168);
  v13 = *a2;
  *(_DWORD *)(*a2 + 36) = 0;
  switch ( *(_BYTE *)(v6 + 11) )
  {
    case 1:
      if ( (*(_DWORD *)(v6 + 12) & 4) == 0 )
        goto LABEL_25;
      break;
    case 2:
      v14 = -1073741805;
      goto LABEL_26;
    case 3:
      v14 = -1073741806;
      goto LABEL_26;
    case 4:
      goto LABEL_25;
    case 6:
      v14 = -1073741820;
      goto LABEL_26;
    case 0xD:
      break;
    case 0x17:
      v14 = -1073545216;
      goto LABEL_26;
    case 0x24:
LABEL_25:
      v14 = -1073741807;
      goto LABEL_26;
    default:
      v14 = -2147481600;
LABEL_26:
      *(_DWORD *)(v13 + 4) = v14;
      v4 = -1073741823;
      v16 = 0;
      goto LABEL_27;
  }
  v15 = *(_DWORD *)(v6 + 8);
  v4 = 0;
  *(_DWORD *)(v13 + 4) = 0;
  v16 = v15 & 0xFFFFFF;
  *(_DWORD *)(v13 + 36) = v16;
  v14 = 0;
LABEL_27:
  DbgPrintEx(
    0x93u,
    3u,
    "XHCIDUMP: URB Status %u: URB Transfer Length %u, TRB Completion Code: %u, status =0x%X\n",
    v14,
    v16,
    *(unsigned __int8 *)(v6 + 11),
    v4);
LABEL_31:
  if ( ++*(_DWORD *)(a1 + 92) == *(_DWORD *)(a1 + 84) )
  {
    *(_DWORD *)(a1 + 92) = 0;
    v17 = *(_DWORD *)(a1 + 96) + 1;
    *(_DWORD *)(a1 + 96) = v17;
    if ( v17 == *(_DWORD *)(a1 + 80) )
    {
      v18 = *(_QWORD *)(a1 + 112);
      v19 = *(_DWORD *)(a1 + 88) == 0;
      *(_DWORD *)(a1 + 96) = 0;
      *(_DWORD *)(a1 + 88) = v19;
    }
    else
    {
      v18 = **(_QWORD **)(a1 + 104);
    }
    *(_QWORD *)(a1 + 104) = v18;
    *(_QWORD *)(a1 + 72) = *(_QWORD *)(v18 + 16);
  }
  Crashdump_EventRing_UpdateDequeuePointer(a1);
LABEL_37:
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_EventRing_Poll: end 0x%X\n", v4);
  return v4;
}
