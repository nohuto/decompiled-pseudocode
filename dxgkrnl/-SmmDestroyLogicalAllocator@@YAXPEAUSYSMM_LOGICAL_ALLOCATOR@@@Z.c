void __fastcall SmmDestroyLogicalAllocator(struct SYSMM_LOGICAL_ALLOCATOR *a1)
{
  struct SYSMM_LOGICAL_BLOCK *v1; // rdx
  struct SYSMM_LOGICAL_ALLOCATOR *v3; // rsi
  struct SYSMM_LOGICAL_ALLOCATOR *v4; // rdi
  __int64 LogicalPool; // rax
  __int64 v6; // rcx
  __int64 v7; // rbp
  struct SYSMM_LOGICAL_ALLOCATOR **v8; // rax
  __int64 v9; // rcx

  v1 = (struct SYSMM_LOGICAL_BLOCK *)*((_QWORD *)a1 + 159);
  if ( v1 )
    SmmFreeLogicalAddress(a1, v1);
  v3 = (struct SYSMM_LOGICAL_ALLOCATOR *)*((_QWORD *)a1 + 157);
  while ( v3 != (struct SYSMM_LOGICAL_ALLOCATOR *)((char *)a1 + 1256) )
  {
    v4 = v3;
    v3 = *(struct SYSMM_LOGICAL_ALLOCATOR **)v3;
    if ( (*((_QWORD *)v4 + 4) & 0x10000000000000LL) != 0 )
      WdLogSingleEntry5(0LL, 484LL, 9LL, a1, v4, 0LL);
    LogicalPool = SmmGetLogicalPool((__int64)a1, (*((_QWORD *)v4 + 4) >> 53) & 0x3F);
    v6 = *(_QWORD *)v4;
    v7 = LogicalPool;
    if ( *(struct SYSMM_LOGICAL_ALLOCATOR **)(*(_QWORD *)v4 + 8LL) != v4
      || (v8 = (struct SYSMM_LOGICAL_ALLOCATOR **)*((_QWORD *)v4 + 1), *v8 != v4) )
    {
      __fastfail(3u);
    }
    *v8 = (struct SYSMM_LOGICAL_ALLOCATOR *)v6;
    *(_QWORD *)(v6 + 8) = v8;
    SmmRemoveBlockFromPool(v7, (__int64)v4);
    SmmFreeBlock(v9, v4);
    if ( *(_DWORD *)(v7 + 16) || *(_QWORD *)v7 != v7 )
      WdLogSingleEntry5(0LL, 484LL, 8LL, a1, v7, 0LL);
  }
  if ( *((_QWORD *)a1 + 160) )
  {
    WdLogSingleEntry1(1LL, 1592LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pAllocator->Statistics.BytesAllocated == 0",
      1592LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)a1 + 161) != *((_QWORD *)a1 + 156) )
  {
    WdLogSingleEntry1(1LL, 1593LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pAllocator->Statistics.BytesFree == pAllocator->Size",
      1593LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)a1 + 163) )
  {
    WdLogSingleEntry1(1LL, 1594LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pAllocator->Statistics.BytesWasted == 0",
      1594LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)a1 + 162) )
  {
    WdLogSingleEntry1(1LL, 1595LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pAllocator->Statistics.RealBytesAllocated == 0",
      1595LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  operator delete(a1);
}
