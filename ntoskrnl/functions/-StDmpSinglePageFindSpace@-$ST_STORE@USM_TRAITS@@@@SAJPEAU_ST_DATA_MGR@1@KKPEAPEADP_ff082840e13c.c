__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageFindSpace(
        __int64 a1,
        unsigned int a2,
        int a3,
        _QWORD *a4,
        int *a5)
{
  __int64 v7; // rsi
  int v9; // edx
  unsigned __int16 *Compact; // rax
  __int64 v11; // rax
  __int64 result; // rax
  int v13; // r8d
  int v14; // edx

  v7 = a1 + 16 * (a2 + 78LL);
  v9 = *(_DWORD *)v7;
  if ( *(_DWORD *)v7 != -1 && (unsigned int)(a3 + *(_DWORD *)(v7 + 4)) <= *(_DWORD *)(a1 + 816) )
    goto LABEL_14;
  if ( *(_BYTE *)(a1 + 776) )
    goto LABEL_9;
  if ( v9 == -1
    || (int)ST_STORE<SM_TRAITS>::StDmCombineRegion(a1, v9) < 0
    || (int)ST_STORE<SM_TRAITS>::StDmReuseCurrentRegion(a1, (unsigned int *)v7) < 0 )
  {
    if ( (int)ST_STORE<SM_TRAITS>::StDmCurrentRegionSet(a1, a2, 0xFFFFFFFF) < 0 )
      NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
LABEL_9:
    while ( 1 )
    {
      Compact = ST_STORE<SM_TRAITS>::StRegionFindCompact(a1, a2);
      if ( !Compact )
        return 3221225599LL;
      v11 = ((__int64)Compact - *(_QWORD *)(a1 + 1032)) >> 1;
      if ( (_DWORD)v11 == -1 )
        return 3221225599LL;
      result = ST_STORE<SM_TRAITS>::StDmCurrentRegionSet(a1, a2, v11);
      if ( (int)result >= 0 )
        goto LABEL_14;
      if ( (_DWORD)result != -1073741267 )
        return result;
    }
  }
  else
  {
LABEL_14:
    v13 = *(_DWORD *)(v7 + 4);
    v14 = *(_DWORD *)v7;
    *a4 = *(_QWORD *)(v7 + 8) + (unsigned int)(16 * v13);
    *a5 = v13 | (v14 << *(_DWORD *)(a1 + 812));
    return 0LL;
  }
}
