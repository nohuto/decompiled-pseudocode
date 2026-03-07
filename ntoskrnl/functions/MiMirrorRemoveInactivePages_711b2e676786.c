__int64 __fastcall MiMirrorRemoveInactivePages(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r9d
  unsigned __int64 v5; // rbx
  __int64 v6; // rbp
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  __int64 v10; // rcx
  unsigned __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // r12
  int PfnPageSizeIndex; // eax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  char v19; // [rsp+60h] [rbp+8h]
  int v20; // [rsp+68h] [rbp+10h]
  __int64 v21; // [rsp+70h] [rbp+18h]

  v3 = *(_DWORD *)(a1 + 8);
  v19 = v3;
  v5 = 48 * a2 - 0x220000000000LL;
  v6 = 0LL;
  v7 = v5 + 48 * a3;
  v8 = 0LL;
  v9 = -1LL;
  if ( v5 >= v7 )
    return v6;
  do
  {
    v10 = *(_QWORD *)(v5 + 40);
    v11 = 1LL;
    if ( (v10 & 0x10000000000LL) != 0 )
    {
      v12 = MiGetBaseResidentPageForBugCheck(v5, 0xFFFFDE0000000000uLL, 0xFFFFF68000000000uLL);
      v20 = *(_BYTE *)(v12 + 34) & 7;
      v13 = *(_QWORD *)(v12 + 8);
      v14 = v13 | 0x8000000000000000uLL;
      if ( !v13 )
        v14 = 0LL;
      v21 = (*(_QWORD *)(v12 + 40) >> 60) & 7LL;
      PfnPageSizeIndex = MiGetPfnPageSizeIndex(v12);
      v11 = MiLargePageSizes[PfnPageSizeIndex]
          + ((0xAAAAAAAAAAAAAAABuLL * ((__int64)(v5 + 0x220000000000LL) >> 4)) & ~(MiLargePageSizes[PfnPageSizeIndex] - 1))
          - 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v5 + 0x220000000000LL) >> 4);
      if ( v11 > 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v7 - v5) >> 4) )
        v11 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v7 - v5) >> 4);
      if ( (v20 & 0xFFFFFFFA) == 0 && v20 != 4
        || v21 == 1
        || (v19 & 0x40) != 0 && v14 && MiGetLeafVa(v14) <= 0x7FFFFFFEFFFFLL )
      {
        goto LABEL_13;
      }
    }
    else
    {
      if ( (*(_BYTE *)(v5 + 34) & 7) != 6
        || v10 < 0
        || (((unsigned __int64)v10 >> 60) & 7) == 1
        || (*(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 && (v10 & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
      {
        goto LABEL_13;
      }
      if ( (v3 & 0x40) != 0 )
      {
        v17 = *(_QWORD *)(v5 + 8) | 0x8000000000000000uLL;
        if ( !*(_QWORD *)(v5 + 8) )
          v17 = 0LL;
        if ( v17 >= 0xFFFFF68000000000uLL && v17 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
          v18 = (__int64)(v17 << 25) >> 16;
          if ( (v18 < 0xFFFFF68000000000uLL || v18 > 0xFFFFF6FFFFFFFFFFuLL) && v18 <= 0x7FFFFFFEFFFFLL )
          {
LABEL_13:
            if ( !v8 )
              v9 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v5 + 0x220000000000LL) >> 4);
            v8 += v11;
            goto LABEL_16;
          }
        }
      }
    }
    if ( v8 )
    {
      v6 += v8;
      MiMirrorOmitPagesFromCopy(*(_QWORD *)a1, v9, v8);
      v8 = 0LL;
    }
LABEL_16:
    LOBYTE(v3) = v19;
    v5 += 48 * v11;
  }
  while ( v5 < v7 );
  if ( v8 )
  {
    v6 += v8;
    MiMirrorOmitPagesFromCopy(*(_QWORD *)a1, v9, v8);
  }
  return v6;
}
