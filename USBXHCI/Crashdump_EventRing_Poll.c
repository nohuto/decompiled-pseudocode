/*
 * XREFs of Crashdump_EventRing_Poll @ 0x1C004E500
 * Callers:
 *     Crashdump_Command_SendCommand @ 0x1C004EB8C (Crashdump_Command_SendCommand.c)
 *     Crashdump_Command_Stop @ 0x1C004ED20 (Crashdump_Command_Stop.c)
 *     Crashdump_Endpoint_SendTransferAndPollForCompletion @ 0x1C004F708 (Crashdump_Endpoint_SendTransferAndPollForCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     Crashdump_EventRing_UpdateDequeuePointer @ 0x1C004E9FC (Crashdump_EventRing_UpdateDequeuePointer.c)
 */

__int64 __fastcall Crashdump_EventRing_Poll(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 (__fastcall *a5)(__int64, __int64, int *))
{
  int v7; // ebp
  int v9; // r14d
  unsigned int v10; // esi
  __int64 v11; // rdi
  int v12; // r8d
  int v13; // ecx
  int v14; // r10d
  int v15; // edx
  __int64 v16; // r9
  __int64 v17; // r9
  int v18; // eax
  unsigned int v19; // eax
  int v20; // eax
  BOOL v21; // eax
  __int64 v22; // rax
  unsigned int v24; // [rsp+20h] [rbp-58h]
  __int64 v25; // [rsp+20h] [rbp-58h]
  int v26; // [rsp+90h] [rbp+18h] BYREF

  v26 = a3;
  v7 = 0;
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_EventRing_Poll: begin\n");
  v9 = 0;
  LOBYTE(v26) = 1;
  while ( 1 )
  {
    v10 = 0;
    v11 = *(_QWORD *)(a1 + 72) + 16LL * *(unsigned int *)(a1 + 92);
    do
    {
      if ( (*(_DWORD *)(v11 + 12) & 1) == *(_DWORD *)(a1 + 88) )
        break;
      KeStallExecutionProcessor(0xC8u);
      ++v10;
    }
    while ( v10 < 0x4E20 );
    v24 = 200 * v10 / 0x3E8;
    if ( v10 == 20000 )
      break;
    DbgPrintEx(0x93u, 3u, "XHCIDUMP: Events available after %u retries, %u ms\n", v10, v24);
    if ( (_BYTE)v26 )
    {
      v12 = *(_DWORD *)(a1 + 92);
      do
      {
        v13 = *(_DWORD *)(v11 + 12);
        v14 = *(_DWORD *)(a1 + 88);
        if ( (v13 & 1) != v14 )
          break;
        v15 = (unsigned __int16)v13 >> 10;
        if ( v15 == 32 && (v13 & 4) != 0 )
          v16 = 0LL;
        else
          v16 = *(_QWORD *)v11;
        DbgPrintEx(
          0x93u,
          3u,
          "XHCIDUMP: EventRing: CS: %u, EI: %03u, ET: %u, CC: %u, Len: %u, Addr: 0x%I64X\n",
          v14,
          v12,
          v15,
          *(unsigned __int8 *)(v11 + 11),
          *(_DWORD *)(v11 + 8) & 0xFFFFFF,
          v16);
        v17 = (unsigned __int8)HIBYTE(*(_WORD *)(v11 + 12)) >> 2;
        if ( (_DWORD)v17 == a2 )
        {
          v18 = a5(a4, v11, &v26);
          v7 = v18;
          if ( v18 < 0 )
          {
            LODWORD(v25) = (unsigned __int8)v26;
            DbgPrintEx(
              0x93u,
              3u,
              "XHCIDUMP: Callback failed with ntStatus 0x%x, ContinueDraining %u\n",
              (unsigned int)v18,
              v25);
          }
        }
        else if ( (_DWORD)v17 == 34 )
        {
          DbgPrintEx(
            0x93u,
            3u,
            "XHCIDUMP: Ignoring port status change event for port %u, CCS: %u, CSC: %u\n",
            *(unsigned __int8 *)(v11 + 3),
            *(_DWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 8) + 32LL)
                      + 16 * ((unsigned int)*(unsigned __int8 *)(v11 + 3) - 1 + 64LL)) & 1,
            (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 8) + 32LL)
                       + 16 * ((unsigned int)*(unsigned __int8 *)(v11 + 3) - 1 + 64LL)) >> 17) & 1);
        }
        else
        {
          LODWORD(v25) = *(unsigned __int8 *)(v11 + 11);
          DbgPrintEx(0x93u, 2u, "XHCIDUMP: Unsolicited event encountered: ET: %u, CC: %u\n", v17, v25);
        }
        v19 = ++*(_DWORD *)(a1 + 92);
        if ( v19 == *(_DWORD *)(a1 + 84) )
        {
          *(_DWORD *)(a1 + 92) = 0;
          v20 = *(_DWORD *)(a1 + 96) + 1;
          *(_DWORD *)(a1 + 96) = v20;
          if ( v20 == *(_DWORD *)(a1 + 80) )
          {
            v21 = *(_DWORD *)(a1 + 88) == 0;
            *(_DWORD *)(a1 + 96) = 0;
            *(_DWORD *)(a1 + 88) = v21;
            v22 = *(_QWORD *)(a1 + 112);
          }
          else
          {
            v22 = **(_QWORD **)(a1 + 104);
          }
          *(_QWORD *)(a1 + 104) = v22;
          *(_QWORD *)(a1 + 72) = *(_QWORD *)(v22 + 16);
          v19 = 0;
        }
        ++v9;
        v11 = *(_QWORD *)(a1 + 72) + 16LL * v19;
        v12 = v19;
        if ( v7 < 0 )
          goto LABEL_29;
      }
      while ( (_BYTE)v26 );
    }
    Crashdump_EventRing_UpdateDequeuePointer(a1);
    if ( !(_BYTE)v26 )
    {
      v7 = 0;
      goto LABEL_29;
    }
  }
  DbgPrintEx(0x93u, 1u, "XHCIDUMP: No more events available after %u retries, %u ms\n", 20000, v24);
  v7 = -1073741643;
LABEL_29:
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_EventRing_Poll: end 0x%X, events drained %u\n", v7, v9);
  return (unsigned int)v7;
}
