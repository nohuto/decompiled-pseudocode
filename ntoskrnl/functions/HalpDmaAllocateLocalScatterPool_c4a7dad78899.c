__int64 __fastcall HalpDmaAllocateLocalScatterPool(__int64 a1, __int64 a2)
{
  int v2; // r15d
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rcx
  struct _MDL *v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  PVOID v11; // r14
  __int64 v12; // r12
  void *v13; // rax
  __int64 v14; // rcx
  __int64 ScatterPagesFromScatterPool; // rax
  __int64 v16; // rcx
  int v17; // r9d
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // r9d
  __int64 ScatterPagesFromContiguousPool; // rax
  int v23; // r9d
  __int64 v24; // rdx
  __int64 v25; // r8
  int v26; // r9d
  __int64 result; // rax
  PVOID BaseAddress; // [rsp+70h] [rbp+8h] BYREF
  int v29; // [rsp+78h] [rbp+10h] BYREF

  BaseAddress = 0LL;
  v29 = 0;
  v2 = a2;
  v4 = 0LL;
  v5 = HalpDmaAllocateScatterMemory(a1, a2, &BaseAddress);
  v7 = (struct _MDL *)v5;
  if ( !v5 )
  {
LABEL_10:
    LODWORD(v8) = 0;
    goto LABEL_11;
  }
  v8 = *(_DWORD *)(v5 + 40) >> 12;
  v9 = HalpMmAllocCtxAlloc(v6, 24LL);
  v11 = BaseAddress;
  v12 = v9;
  if ( !v9 )
  {
LABEL_7:
    if ( v11 )
      MmUnmapLockedPages(v11, v7);
    MmFreePagesFromMdl(v7);
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(a1 + 56) = 0LL;
    goto LABEL_10;
  }
  v13 = (void *)HalpMmAllocCtxAlloc(v10, 72LL * (unsigned int)v8);
  v4 = (__int64)v13;
  if ( !v13 )
  {
LABEL_6:
    HalpMmAllocCtxFree(v14, v12);
    goto LABEL_7;
  }
  *(_QWORD *)v12 = 0LL;
  *(_DWORD *)(v12 + 12) = 0;
  memset(v13, 0, 72 * v8);
  *(_DWORD *)(v12 + 8) = v8;
  *(_QWORD *)(v12 + 16) = v4;
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 56) = v12;
  *(_QWORD *)(a1 + 80) = v12;
  v4 = HalpDmaCommitScatterMapBuffers(a1, (__int64)v11, 0LL, 0, v7);
  if ( !v4 )
  {
    HalpMmAllocCtxFree(v6, *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL));
    goto LABEL_6;
  }
  *(_QWORD *)(a1 + 328) = v7;
  *(_QWORD *)(a1 + 336) = v11;
LABEL_11:
  if ( (_DWORD)v8 != v2 )
  {
    ScatterPagesFromScatterPool = HalpDmaAllocateScatterPagesFromScatterPool(
                                    v6,
                                    *(_QWORD *)(a1 + 160),
                                    (unsigned int)(v2 - v8),
                                    0LL,
                                    1,
                                    (__int64)&v29);
    if ( !ScatterPagesFromScatterPool )
      goto LABEL_17;
    v17 = v29;
    v18 = ScatterPagesFromScatterPool;
    if ( v29 )
    {
      v19 = (unsigned int)v29;
      do
      {
        *(_QWORD *)(v18 + 48) = *(_QWORD *)(v18 + 48) & 0xFFFFFFFFFFFFFFF3uLL | 8;
        v18 = *(_QWORD *)(v18 + 8);
        --v19;
      }
      while ( v19 );
    }
    v20 = HalpDmaPrependTranslations(ScatterPagesFromScatterPool, v17, v4);
    LODWORD(v8) = v21 + v8;
    v4 = v20;
    if ( (_DWORD)v8 != v2 )
    {
LABEL_17:
      ScatterPagesFromContiguousPool = HalpDmaAllocateScatterPagesFromContiguousPool(
                                         v16,
                                         *(_QWORD *)(a1 + 160),
                                         (unsigned int)(v2 - v8),
                                         0LL,
                                         1,
                                         (ULONG *)&v29);
      if ( ScatterPagesFromContiguousPool )
      {
        v23 = v29;
        v24 = ScatterPagesFromContiguousPool;
        if ( v29 )
        {
          v25 = (unsigned int)v29;
          do
          {
            *(_QWORD *)(v24 + 48) = *(_QWORD *)(v24 + 48) & 0xFFFFFFFFFFFFFFF3uLL | 8;
            v24 = *(_QWORD *)(v24 + 8);
            --v25;
          }
          while ( v25 );
        }
        v4 = HalpDmaPrependTranslations(ScatterPagesFromContiguousPool, v23, v4);
        LODWORD(v8) = v26 + v8;
      }
      if ( !(_DWORD)v8 )
        return 3221225626LL;
    }
  }
  *(_DWORD *)(a1 + 232) = v2;
  result = 0LL;
  *(_QWORD *)(a1 + 32) = v4;
  *(_DWORD *)(a1 + 40) = v8;
  return result;
}
