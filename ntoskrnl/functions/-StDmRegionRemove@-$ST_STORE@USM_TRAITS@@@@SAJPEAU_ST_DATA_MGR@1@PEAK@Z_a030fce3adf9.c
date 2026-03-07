__int64 __fastcall ST_STORE<SM_TRAITS>::StDmRegionRemove(__int64 a1, _DWORD *a2)
{
  _WORD *Repurpose; // rax
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // rdi
  unsigned int IsCurrentRegion; // eax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // r8

  Repurpose = (_WORD *)ST_STORE<SM_TRAITS>::StRegionFindRepurpose(a1, (unsigned int)*a2);
  if ( !Repurpose )
    return 3221226021LL;
  v7 = ((__int64)Repurpose - *(_QWORD *)(a1 + 1032)) >> 1;
  if ( (*Repurpose & 0x1FFF) == 0 )
    goto LABEL_6;
  if ( (*(_DWORD *)(a1 + 832) & 2) != 0 )
    return 3221226021LL;
  result = ST_STORE<SM_TRAITS>::StDmRegionEvict(a1, a1 + 936, v7, v5, *(_DWORD *)(a1 + 808) + 1);
  if ( (int)result >= 0 )
  {
LABEL_6:
    IsCurrentRegion = ST_STORE<SM_TRAITS>::StDmIsCurrentRegion(a1, v7);
    if ( IsCurrentRegion != 8 )
      ST_STORE<SM_TRAITS>::StDmCurrentRegionSet(a1, IsCurrentRegion, 0xFFFFFFFF);
    v9 = ST_STORE<SM_TRAITS>::StStagingRegionFind(a1, (unsigned int)v7);
    v10 = v9;
    if ( v9 )
    {
      if ( *(_DWORD *)v9 != -1 )
      {
        ExFreePoolWithTag(*(PVOID *)(v9 + 8), 0);
        ExFreePoolWithTag(*(PVOID *)(v10 + 16), 0);
      }
      *(_OWORD *)v10 = 0LL;
      *(_QWORD *)(v10 + 16) = 0LL;
      *(_DWORD *)v10 = -1;
    }
    v11 = *(_QWORD *)(a1 + 848);
    *a2 = v7;
    *(_BYTE *)(((unsigned __int64)(unsigned int)v7 >> 3) + v11) &= ~(1 << (v7 & 7));
    --*(_DWORD *)(a1 + 856);
    return 0LL;
  }
  return result;
}
