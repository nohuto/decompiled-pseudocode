__int64 __fastcall SmmCreateLogicalAllocator(unsigned __int64 a1, struct SYSMM_LOGICAL_ALLOCATOR **a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  __int64 LowerOrderFromPageCount; // rsi
  __int64 Block; // rax
  _QWORD *v11; // r10
  _QWORD *v12; // rax
  _DWORD *LogicalPool; // rax
  __int64 v14; // r10
  int LogicalAddressAt; // edi

  if ( a1 < 0x2000 )
  {
    WdLogSingleEntry1(3LL, 0x2000LL);
    return 3221225485LL;
  }
  v4 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v5 = operator new[](0x530uLL, 0x35737844u, 64LL);
  v6 = v5;
  if ( !v5 )
  {
    _InterlockedIncrement(&dword_1C013BD48);
    WdLogSingleEntry1(6LL, 1651LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate logical allocator",
      1651LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  SmmInitializeLogicalAllocator(v5, v4);
  v7 = v4 >> 12;
  v8 = v7;
  if ( v7 )
  {
    while ( 1 )
    {
      LowerOrderFromPageCount = (unsigned __int8)SmmGetLowerOrderFromPageCount(v8);
      Block = SmmAllocateBlock();
      if ( !Block )
        break;
      SmmInitializeLogicalBlock(Block, v7 - v8, LowerOrderFromPageCount);
      v12 = *(_QWORD **)(v6 + 1264);
      if ( *v12 != v6 + 1256 )
        __fastfail(3u);
      *v11 = v6 + 1256;
      v11[1] = v12;
      *v12 = v11;
      *(_QWORD *)(v6 + 1264) = v11;
      LogicalPool = (_DWORD *)SmmGetLogicalPool(v6, LowerOrderFromPageCount);
      SmmAddBlockToPool(LogicalPool, v14);
      v8 -= SmmGetOrderBlockSizeInPages(LowerOrderFromPageCount);
      if ( !v8 )
        goto LABEL_9;
    }
    WdLogSingleEntry1(3LL, LowerOrderFromPageCount);
    LogicalAddressAt = -1073741801;
    goto LABEL_11;
  }
LABEL_9:
  LogicalAddressAt = SmmAllocateLogicalAddressAt(
                       (struct SYSMM_LOGICAL_ALLOCATOR *)v6,
                       0LL,
                       4096LL,
                       (const void *)0xFFFFFFFFFFFFFFFFLL,
                       (struct SYSMM_LOGICAL_BLOCK **)(v6 + 1272));
  if ( LogicalAddressAt < 0 )
  {
    WdLogSingleEntry1(3LL, 1726LL);
LABEL_11:
    SmmDestroyLogicalAllocator((struct SYSMM_LOGICAL_ALLOCATOR *)v6);
    return (unsigned int)LogicalAddressAt;
  }
  *(_QWORD *)(*(_QWORD *)(v6 + 1272) + 32LL) |= 0x800000000000000uLL;
  *(_DWORD *)(v6 + 1320) ^= (*(_DWORD *)(v6 + 1320) ^ ((unsigned int)dword_1C013BCE0 >> 6)) & 1;
  result = 0LL;
  *a2 = (struct SYSMM_LOGICAL_ALLOCATOR *)v6;
  return result;
}
