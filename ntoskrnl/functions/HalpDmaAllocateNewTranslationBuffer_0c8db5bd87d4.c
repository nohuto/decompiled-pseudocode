__int64 __fastcall HalpDmaAllocateNewTranslationBuffer(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // r9
  char v7; // r13
  unsigned int v8; // esi
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned int v12; // r15d
  _QWORD *v13; // r12
  __int64 *ScatterPagesFromScatterPool; // rbx
  __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // r14
  __int64 v20; // rcx
  __int64 v21; // rbx
  ULONG v23; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v24; // [rsp+80h] [rbp+18h]

  v23 = 0;
  v3 = a1;
  if ( !*(_BYTE *)(a1 + 152) )
    v3 = *(_QWORD *)(a1 + 160);
  v5 = HalpMmAllocCtxAlloc(a1, 24LL);
  if ( v5 )
  {
    v7 = 1;
    v8 = 72 * a2;
    if ( 72 * a2 >= 0x1000 )
      v9 = (v8 + 4095) & 0xFFFFF000;
    else
      v9 = 4096;
    v10 = HalpMmAllocCtxAlloc(v4, v9);
    if ( v10 || (v9 = 72 * a2, v8 < 0x1000) && (v10 = HalpMmAllocCtxAlloc(v4, v8)) != 0 )
    {
      *(_QWORD *)(v5 + 16) = v10;
      *(_QWORD *)v5 = 0LL;
      *(_DWORD *)(v5 + 8) = v9 / 0x48;
      return v5;
    }
  }
  else
  {
    v7 = 0;
  }
  v11 = 0LL;
  v24 = 0LL;
  v12 = 0;
  v13 = 0LL;
  while ( a2 )
  {
    LOBYTE(v6) = 1;
    ScatterPagesFromScatterPool = (__int64 *)HalpDmaAllocateScatterPagesFromScatterPool(
                                               v4,
                                               v3,
                                               1LL,
                                               v6,
                                               0,
                                               (__int64)&v23);
    if ( !ScatterPagesFromScatterPool )
    {
      LOBYTE(v6) = 1;
      ScatterPagesFromScatterPool = (__int64 *)HalpDmaAllocateScatterPagesFromContiguousPool(v4, v3, 1LL, v6, 0, &v23);
      if ( !ScatterPagesFromScatterPool )
      {
LABEL_31:
        if ( v12 )
        {
          v19 = v12;
          do
          {
            v20 = *(_QWORD *)(v11 + 48);
            if ( (v20 & 0x10) != 0 )
            {
              MmUnmapIoSpace((PVOID)(v20 & 0xFFFFFFFFFFFFF000uLL), 0x1000uLL);
              *(_QWORD *)(v11 + 48) = *(_DWORD *)(v11 + 48) & 0xFEF;
            }
            v21 = *(_QWORD *)(v11 + 8);
            HalpDmaReturnPageToOwner(0LL, v3, v11);
            v11 = v21;
            --v19;
          }
          while ( v19 );
        }
        if ( v7 )
          HalpMmAllocCtxFree(v4, v5);
        return 0LL;
      }
    }
    if ( v11 )
      v24[1] = (__int64)ScatterPagesFromScatterPool;
    else
      v11 = (__int64)ScatterPagesFromScatterPool;
    v15 = ScatterPagesFromScatterPool[6];
    ++v12;
    v24 = ScatterPagesFromScatterPool;
    v16 = v15 & 0xFFFFFFFFFFFFF000uLL;
    if ( !v16 )
    {
      v17 = MmMapIoSpaceEx(*ScatterPagesFromScatterPool, 4096LL, 4u);
      v16 = v17;
      if ( !v17 )
        goto LABEL_31;
      ScatterPagesFromScatterPool[6] |= 0x10uLL;
      v4 = v17 | ScatterPagesFromScatterPool[6] & 0xFFF;
      ScatterPagesFromScatterPool[6] = v4;
    }
    if ( v12 == 1 && v7 )
    {
      *(_QWORD *)v5 = 0LL;
      v13 = (_QWORD *)v5;
      *(_QWORD *)(v5 + 16) = v16;
      *(_DWORD *)(v5 + 8) = 56;
    }
    else
    {
      if ( v5 )
        *v13 = v16;
      else
        v5 = v16;
      *(_QWORD *)v16 = 0LL;
      *(_QWORD *)(v16 + 16) = v16 + 24;
      v13 = (_QWORD *)v16;
      *(_DWORD *)(v16 + 8) = 56;
    }
    v18 = a2;
    a2 -= 56;
    if ( v18 <= 0x38 )
      a2 = 0;
  }
  return v5;
}
