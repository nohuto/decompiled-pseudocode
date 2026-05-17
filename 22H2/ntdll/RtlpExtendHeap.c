/*
 * XREFs of RtlpExtendHeap @ 0x18000E348
 * Callers:
 *     RtlpAllocateHeap @ 0x18002D160 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlpHpHeapCheckCommitLimit @ 0x180003748 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180009AF4 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpInitializeHeapSegment @ 0x18000BB54 (RtlpInitializeHeapSegment.c)
 *     RtlpFindAndCommitPages @ 0x18000E618 (RtlpFindAndCommitPages.c)
 *     RtlpGetHeapProtection @ 0x18000EE34 (RtlpGetHeapProtection.c)
 *     RtlpInsertFreeBlock @ 0x18001E940 (RtlpInsertFreeBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x18001EEB4 (RtlpCoalesceFreeBlocks.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     ZwAllocateVirtualMemory @ 0x18009D7E0 (ZwAllocateVirtualMemory.c)
 *     RtlpCoalesceHeap @ 0x1800F352C (RtlpCoalesceHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180107D24 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeReserve @ 0x1801082DC (RtlpHeapLogRangeReserve.c)
 *     RtlpLogHeapCommit @ 0x180109E08 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x18010A09C (RtlpLogHeapExtendEvent.c)
 */

__int64 __fastcall RtlpExtendHeap(__int64 a1, unsigned __int64 a2)
{
  _BYTE *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  int HeapProtection; // r15d
  int v13; // ecx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // edi
  __int64 v19; // r9
  char v20; // al
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  unsigned __int64 v34; // [rsp+40h] [rbp-10h] BYREF
  __int64 v35; // [rsp+98h] [rbp+48h] BYREF
  unsigned __int64 v36; // [rsp+A0h] [rbp+50h] BYREF
  unsigned __int64 v37; // [rsp+A8h] [rbp+58h] BYREF

  v37 = ((_DWORD)a2 + 4095) & 0xFFFFF000;
  v4 = 0LL;
  v5 = RtlpFindAndCommitPages(a1, &v37);
  if ( v5 )
  {
    v37 >>= 4;
    v6 = RtlpCoalesceFreeBlocks(a1, v5, &v37, 0LL);
    RtlpInsertFreeBlock(a1, v6);
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v6 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v6 + 11) != (*(_BYTE *)(v6 + 8) ^ (unsigned __int8)(*(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v6);
    }
    return v6;
  }
  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
    goto LABEL_37;
  v35 = 0LL;
  v8 = a2 + 0x2000;
  v9 = a2 + 0x2000;
  if ( a2 + 0x2000 <= *(_QWORD *)(a1 + 160) )
    v9 = *(_QWORD *)(a1 + 160);
  if ( *(_BYTE *)(a1 + 418) == 2 )
    v10 = *(_QWORD *)(a1 + 408);
  else
    v10 = 0LL;
  if ( !v10 && v9 >= 0x3F4000 )
    *(_DWORD *)(a1 + 120) |= 0x20000000u;
  v11 = (v9 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  if ( v11 >= 0xFD0000 )
    v11 = 16580608LL;
  v36 = v11;
  HeapProtection = RtlpGetHeapProtection(a1, 1LL);
  v13 = ZwAllocateVirtualMemory(-1LL, &v35, 0LL, &v36, 0x2000, HeapProtection);
  if ( v13 < 0 )
  {
    while ( 1 )
    {
      v14 = v36;
      if ( v36 == v8 )
        break;
      v30 = v36 >> 1;
      if ( v36 >> 1 < v8 )
        v30 = a2 + 0x2000;
      v36 = v30;
      v13 = ZwAllocateVirtualMemory(-1LL, &v35, 0LL, &v36, 0x2000, HeapProtection);
      if ( v13 >= 0 )
      {
        v14 = v36;
        break;
      }
    }
    if ( v13 < 0 )
    {
      ++*(_DWORD *)(a1 + 632);
      goto LABEL_37;
    }
  }
  else
  {
    v14 = v36;
  }
  *(_QWORD *)(a1 + 160) += v14;
  v15 = a2 + 4096;
  if ( a2 + 4096 <= *(_QWORD *)(a1 + 168) )
    v15 = *(_QWORD *)(a1 + 168);
  v16 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
  v34 = (v15 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( (unsigned int)RtlpHpHeapCheckCommitLimit(v34, v16, a1, (unsigned __int64 *)(a1 + 376)) )
  {
    v18 = ZwAllocateVirtualMemory(-1LL, &v35, 0LL, &v34, 4096, HeapProtection);
    if ( v18 >= 0 )
    {
      v20 = RtlpInitializeHeapSegment(a1, v35, 112LL, v19, 2, v35, v35 + v34, v35 + v36 - 4096);
      v17 = 3221225495LL;
      if ( !v20 )
        v18 = -1073741801;
      if ( v18 >= 0 )
      {
        v23 = 2147353472LL;
        if ( (unsigned int)RtlGetCurrentServiceSessionId(3221225495LL, v21) )
          v24 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v24 = 2147353472LL;
        if ( *(_BYTE *)v24 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          RtlpLogHeapCommit(a1, v35, v34, 4LL);
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v32, v31) )
            v23 = (__int64)NtCurrentPeb()->SharedData + 550;
          RtlpLogHeapExtendEvent(a1, *(_QWORD *)(v35 + 64), v34, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v23);
        }
        v26 = 2147353482LL;
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v24, v22) )
          v27 = (__int64)NtCurrentPeb()->SharedData + 560;
        else
          v27 = 2147353482LL;
        if ( *(_BYTE *)v27 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v27, v25) )
            v26 = (__int64)NtCurrentPeb()->SharedData + 560;
          RtlpLogHeapExtendEvent(a1, *(_QWORD *)(v35 + 64), v34, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v26);
        }
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v27, v25) )
          v28 = (__int64)NtCurrentPeb()->SharedData + 558;
        else
          v28 = 2147353480LL;
        if ( *(_BYTE *)v28 )
          RtlpHeapLogRangeReserve(a1, v35, v36);
        v29 = *(_QWORD *)(v35 + 64);
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_DWORD *)(v29 + 8) ^= *(_DWORD *)(a1 + 136);
          if ( *(_BYTE *)(v29 + 11) != (*(_BYTE *)(v29 + 8) ^ (unsigned __int8)(*(_BYTE *)(v29 + 9) ^ *(_BYTE *)(v29 + 10))) )
            RtlpAnalyzeHeapFailure(a1, v29);
        }
        return *(_QWORD *)(v35 + 64);
      }
    }
  }
  RtlpSecMemFreeVirtualMemory(v17, &v35, &v36, 0x8000LL);
LABEL_37:
  if ( *(char *)(a1 + 112) < 0 )
  {
    v33 = RtlpCoalesceHeap(a1);
    v4 = (_BYTE *)v33;
    if ( v33 )
    {
      if ( *(unsigned __int16 *)(v33 + 8) >= a2 )
        return v33;
    }
  }
  v6 = 0LL;
  if ( v4 && *(_DWORD *)(a1 + 124) )
  {
    v4[11] = v4[8] ^ v4[9] ^ v4[10];
    *((_DWORD *)v4 + 2) ^= *(_DWORD *)(a1 + 136);
  }
  return v6;
}
