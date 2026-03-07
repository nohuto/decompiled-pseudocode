__int64 __fastcall RtlpExtendHeap(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  int v6; // edx
  ULONG_PTR v7; // rdi
  __int64 v8; // rcx
  ULONG_PTR v9; // rcx
  ULONG_PTR v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // r9d
  __int64 v14; // rdx
  ULONG_PTR v16[2]; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp+38h] BYREF
  PVOID BaseAddress; // [rsp+90h] [rbp+40h] BYREF
  unsigned __int64 v19; // [rsp+98h] [rbp+48h] BYREF

  v16[0] = 0LL;
  v19 = ((_DWORD)a2 + 4095) & 0xFFFFF000;
  v4 = RtlpFindAndCommitPages(a1, &v19);
  if ( v4 )
  {
    v19 >>= 4;
    v5 = RtlpCoalesceFreeBlocks(a1, v4, &v19);
    RtlpInsertFreeBlock(a1, v5, v19);
    if ( *(_DWORD *)(a1 + 124) )
    {
      v6 = *(_DWORD *)(v5 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v5 + 8) = v6;
      if ( *(_BYTE *)(v5 + 11) != ((unsigned __int8)v6 ^ (unsigned __int8)(*(_BYTE *)(v5 + 9) ^ *(_BYTE *)(v5 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v5);
    }
    return v5;
  }
  if ( (*(_DWORD *)(a1 + 112) & 2) == 0 )
    return 0LL;
  BaseAddress = 0LL;
  v7 = a2 + 0x2000;
  v8 = a2 + 0x2000;
  if ( (unsigned __int64)(a2 + 0x2000) <= *(_QWORD *)(a1 + 160) )
    v8 = *(_QWORD *)(a1 + 160);
  v9 = (v8 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  if ( v9 >= 0xFD0000 )
    v9 = 16580608LL;
  for ( RegionSize = v9;
        ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u) < 0;
        RegionSize = v10 )
  {
    if ( RegionSize == v7 )
    {
      ++*(_DWORD *)(a1 + 632);
      return 0LL;
    }
    v10 = RegionSize >> 1;
    if ( RegionSize >> 1 < v7 )
      v10 = a2 + 0x2000;
  }
  v11 = a2 + 4096;
  *(_QWORD *)(a1 + 160) += RegionSize;
  if ( (unsigned __int64)(a2 + 4096) <= *(_QWORD *)(a1 + 168) )
    v11 = *(_QWORD *)(a1 + 168);
  v12 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
  v16[0] = (v11 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( !(unsigned int)RtlpHpHeapCheckCommitLimit(v16[0], v12, a1, (unsigned __int64 *)(a1 + 376))
    || ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, v16, 0x1000u, 4u) < 0
    || !(unsigned __int8)RtlpInitializeHeapSegment(
                           a1,
                           (int)BaseAddress,
                           112,
                           v13,
                           2,
                           (__int64)BaseAddress,
                           (char *)BaseAddress + v16[0],
                           (__int64)BaseAddress + RegionSize - 4096) )
  {
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    return 0LL;
  }
  v14 = *((_QWORD *)BaseAddress + 8);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( *(_BYTE *)(v14 + 11) != (*(_BYTE *)(v14 + 8) ^ (unsigned __int8)(*(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10))) )
      RtlpAnalyzeHeapFailure(a1, v14);
  }
  return *((_QWORD *)BaseAddress + 8);
}
