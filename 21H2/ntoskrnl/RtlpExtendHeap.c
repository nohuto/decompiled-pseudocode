/*
 * XREFs of RtlpExtendHeap @ 0x14058A8E4
 * Callers:
 *     RtlpAllocateHeap @ 0x140588D60 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlpHpHeapCheckCommitLimit @ 0x140315890 (RtlpHpHeapCheckCommitLimit.c)
 *     ZwAllocateVirtualMemory @ 0x1403FA880 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1403FA940 (ZwFreeVirtualMemory.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405896C0 (RtlpCoalesceFreeBlocks.c)
 *     RtlpFindAndCommitPages @ 0x14058AB68 (RtlpFindAndCommitPages.c)
 *     RtlpInitializeHeapSegment @ 0x14058B330 (RtlpInitializeHeapSegment.c)
 *     RtlpInsertFreeBlock @ 0x14058B5DC (RtlpInsertFreeBlock.c)
 *     RtlpAnalyzeHeapFailure @ 0x1405937F0 (RtlpAnalyzeHeapFailure.c)
 */

__int64 __fastcall RtlpExtendHeap(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  ULONG_PTR v7; // rdi
  unsigned __int64 v8; // rcx
  ULONG_PTR v9; // rcx
  NTSTATUS v10; // eax
  ULONG_PTR v11; // rcx
  ULONG_PTR v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  NTSTATUS v15; // edi
  __int64 v16; // rdx
  ULONG_PTR v18[2]; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp+38h] BYREF
  PVOID BaseAddress; // [rsp+90h] [rbp+40h] BYREF
  unsigned __int64 v21; // [rsp+98h] [rbp+48h] BYREF

  v21 = ((_DWORD)a2 + 4095) & 0xFFFFF000;
  v4 = RtlpFindAndCommitPages(a1, &v21);
  if ( v4 )
  {
    v21 >>= 4;
    v5 = RtlpCoalesceFreeBlocks(a1, v4, &v21);
    RtlpInsertFreeBlock(a1, v5, v21);
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v5 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v5 + 11) != (*(_BYTE *)(v5 + 8) ^ (unsigned __int8)(*(_BYTE *)(v5 + 9) ^ *(_BYTE *)(v5 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v5);
    }
    return v5;
  }
  if ( (*(_DWORD *)(a1 + 112) & 2) == 0 )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 160);
  v7 = a2 + 0x2000;
  BaseAddress = 0LL;
  v8 = a2 + 0x2000;
  if ( a2 + 0x2000 <= v6 )
    v8 = v6;
  v9 = (v8 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  if ( v9 >= 0xFD0000 )
    v9 = 16580608LL;
  RegionSize = v9;
  v10 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u);
  if ( v10 >= 0 )
  {
    v11 = RegionSize;
  }
  else
  {
    while ( 1 )
    {
      v11 = RegionSize;
      if ( RegionSize == v7 )
        break;
      v12 = RegionSize >> 1;
      if ( RegionSize >> 1 < v7 )
        v12 = a2 + 0x2000;
      RegionSize = v12;
      v10 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u);
      if ( v10 >= 0 )
      {
        v11 = RegionSize;
        break;
      }
    }
    if ( v10 < 0 )
    {
      ++*(_DWORD *)(a1 + 632);
      return 0LL;
    }
  }
  *(_QWORD *)(a1 + 160) += v11;
  v13 = a2 + 4096;
  if ( (unsigned __int64)(a2 + 4096) <= *(_QWORD *)(a1 + 168) )
    v13 = *(_QWORD *)(a1 + 168);
  v14 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
  v18[0] = (v13 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( !(unsigned int)RtlpHpHeapCheckCommitLimit(v18[0], v14, a1, (unsigned __int64 *)(a1 + 376)) )
    goto LABEL_30;
  v15 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, v18, 0x1000u, 4u);
  if ( v15 < 0 )
    goto LABEL_30;
  if ( !(unsigned __int8)RtlpInitializeHeapSegment(
                           a1,
                           (int)BaseAddress,
                           112,
                           (int)BaseAddress + (int)RegionSize - 4096,
                           2,
                           (__int64)BaseAddress,
                           (char *)BaseAddress + v18[0],
                           (__int64)BaseAddress + RegionSize - 4096) )
    v15 = -1073741801;
  if ( v15 < 0 )
  {
LABEL_30:
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    return 0LL;
  }
  v16 = *((_QWORD *)BaseAddress + 8);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v16 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( *(_BYTE *)(v16 + 11) != (*(_BYTE *)(v16 + 8) ^ (unsigned __int8)(*(_BYTE *)(v16 + 9) ^ *(_BYTE *)(v16 + 10))) )
      RtlpAnalyzeHeapFailure(a1, v16);
  }
  return *((_QWORD *)BaseAddress + 8);
}
