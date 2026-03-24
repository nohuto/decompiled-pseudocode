/*
 * XREFs of MiConvertContiguousPages @ 0x140355124
 * Callers:
 *     MiFindContiguousPages @ 0x140281D60 (MiFindContiguousPages.c)
 * Callees:
 *     MiPfnZeroingNeeded @ 0x1402384D0 (MiPfnZeroingNeeded.c)
 *     MiUpdatePageFileHighInPte @ 0x14023D6F0 (MiUpdatePageFileHighInPte.c)
 *     MiIsFreeZeroPfnCold @ 0x1402837A0 (MiIsFreeZeroPfnCold.c)
 *     MiChangePageAttributeBatch @ 0x140283C20 (MiChangePageAttributeBatch.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402AA5C0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x140355540 (MiPageAttributeBatchChangeNeeded.c)
 */

__int64 __fastcall MiConvertContiguousPages(unsigned __int64 *a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // ebp
  unsigned __int64 *v6; // rdi
  __int64 v7; // r9
  unsigned __int64 *v8; // rsi
  int v9; // eax
  int v10; // r15d
  BOOL v11; // r14d
  unsigned int v12; // eax
  _DWORD *v13; // r9
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r8
  unsigned __int64 *v17; // r9
  unsigned __int64 v18; // rcx
  unsigned __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  v20 = 0LL;
  v5 = 1;
  MiSetOriginalPtePfnFromFreeList(&v20);
  v6 = 0LL;
  v8 = &a1[6 * v7];
  if ( a1 != v8 )
  {
    do
    {
      LOBYTE(v9) = MiIsFreeZeroPfnCold((__int64)a1);
      v10 = v9;
      v11 = MiPfnZeroingNeeded((__int64)a1, a3);
      v12 = 0;
      if ( !v11 )
        v12 = v5;
      v5 = v12;
      if ( (unsigned int)MiPageAttributeBatchChangeNeeded(a1) )
      {
        v14 = *a1 & 0xFFFFFFF000000000uLL;
        *a1 = v14;
        if ( v10 )
        {
          v14 |= 2uLL;
          *a1 = v14;
        }
        a1[2] = (unsigned __int64)v6;
        v6 = a1;
        if ( v11 )
          *a1 = v14 | 1;
      }
      else
      {
        v15 = v20 & -(__int64)v11;
        a1[2] = v15;
        if ( v10 )
          a1[2] = MiUpdatePageFileHighInPte(v15, 4294967293LL);
      }
      a1 += 6;
    }
    while ( a1 != v8 );
    if ( v6 )
    {
      MiChangePageAttributeBatch((__int64)v6, a3, -1LL, v13);
      do
      {
        v16 = *v6;
        v17 = (unsigned __int64 *)v6[2];
        v18 = v20 & -(__int64)((*v6 & 1) != 0);
        v6[2] = v18;
        if ( (v16 & 2) != 0 )
          v6[2] = MiUpdatePageFileHighInPte(v18, 4294967293LL);
        *v6 = v16 & 0xFFFFFFF000000000uLL;
        v6 = v17;
      }
      while ( v17 );
    }
  }
  return v5;
}
