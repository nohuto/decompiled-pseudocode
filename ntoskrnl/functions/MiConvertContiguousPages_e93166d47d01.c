__int64 __fastcall MiConvertContiguousPages(unsigned __int64 *a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // ebp
  unsigned __int64 *v6; // rdi
  __int64 v7; // r9
  unsigned __int64 *v8; // rsi
  BOOL IsFreeZeroPfnCold; // r15d
  __int64 v10; // rdx
  BOOL v11; // r14d
  unsigned int v12; // eax
  unsigned __int64 v13; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r9
  unsigned __int64 *v17; // r10
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  v19 = 0LL;
  v5 = 1;
  MiSetOriginalPtePfnFromFreeList(&v19);
  v6 = 0LL;
  v8 = &a1[6 * v7];
  if ( a1 != v8 )
  {
    do
    {
      IsFreeZeroPfnCold = MiIsFreeZeroPfnCold((__int64)a1);
      v11 = MiPfnZeroingNeeded((__int64)a1);
      v12 = 0;
      if ( !v11 )
        v12 = v5;
      v5 = v12;
      if ( (unsigned int)MiPageAttributeBatchChangeNeeded((__int64)a1, v10) )
      {
        v15 = *a1 & 0xFFFFFF0000000000uLL;
        *a1 = v15;
        if ( IsFreeZeroPfnCold )
        {
          v15 |= 2uLL;
          *a1 = v15;
        }
        a1[2] = (unsigned __int64)v6;
        v6 = a1;
        if ( v11 )
          *a1 = v15 | 1;
      }
      else
      {
        v13 = v19 & -(__int64)v11;
        a1[2] = v13;
        if ( IsFreeZeroPfnCold )
          a1[2] = MiUpdatePageFileHighInPte(v13, 4294967293LL);
      }
      a1 += 6;
    }
    while ( a1 != v8 );
    if ( v6 )
    {
      MiChangePageAttributeBatch((__int64)v6, a3, -1LL);
      do
      {
        v16 = *v6;
        v17 = (unsigned __int64 *)v6[2];
        v18 = v19 & -(__int64)((*v6 & 1) != 0);
        v6[2] = v18;
        if ( (v16 & 2) != 0 )
          v6[2] = MiUpdatePageFileHighInPte(v18, 4294967293LL);
        *v6 = v16 & 0xFFFFFF0000000000uLL;
        v6 = v17;
      }
      while ( v17 );
    }
  }
  return v5;
}
