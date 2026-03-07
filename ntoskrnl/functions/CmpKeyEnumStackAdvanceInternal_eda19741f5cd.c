__int64 __fastcall CmpKeyEnumStackAdvanceInternal(__int64 a1)
{
  unsigned int v1; // ebx
  __int16 i; // bp
  __int64 EntryAtLayerHeight; // rsi
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int *v7; // rdx
  __int16 v8; // si
  __int64 v9; // r14
  __int16 v10; // bp
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rax
  ULONG_PTR v16; // rcx
  __int64 v17; // rsi
  ULONG_PTR v18; // rdx
  unsigned int *v19; // r8
  __int64 CellFlat; // rax

  v1 = 0;
  if ( *(_BYTE *)(a1 + 4) )
  {
    for ( i = 0; i <= *(__int16 *)a1; ++i )
    {
      EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(a1 + 8, i);
      if ( *(_QWORD *)(EntryAtLayerHeight + 16) )
      {
        v5 = CmpKeyEnumStackGetEntryAtLayerHeight(a1);
        CmpKeyEnumStackEntryAdvance(v5);
        if ( *(_QWORD *)(EntryAtLayerHeight + 16) )
        {
          v6 = *(_QWORD *)EntryAtLayerHeight;
          v7 = (unsigned int *)(EntryAtLayerHeight + 24);
          if ( (*(_BYTE *)(*(_QWORD *)EntryAtLayerHeight + 140LL) & 1) != 0 )
            HvpReleaseCellFlat(v6, v7);
          else
            HvpReleaseCellPaged(v6, v7);
        }
        *(_OWORD *)EntryAtLayerHeight = 0LL;
        *(_OWORD *)(EntryAtLayerHeight + 16) = 0LL;
        *(_DWORD *)(EntryAtLayerHeight + 8) = -1;
        HvpGetCellContextReinitialize((_QWORD *)(EntryAtLayerHeight + 24));
      }
    }
  }
  v8 = *(_WORD *)a1;
  *(_BYTE *)(a1 + 4) = 1;
  v9 = 0LL;
  v10 = -1;
  if ( v8 < 0 )
    return (unsigned int)-2147483622;
  do
  {
    v11 = CmpKeyEnumStackGetEntryAtLayerHeight(a1);
    v12 = *(_QWORD *)(v11 + 120);
    if ( v12 && (!v9 || (int)CmpCompareKeysByName(v12, v9) < 0) )
    {
      v9 = *(_QWORD *)(v11 + 120);
      v10 = v8;
    }
    --v8;
  }
  while ( v8 >= 0 );
  if ( v9 )
  {
    for ( ; v10 >= 0; --v10 )
    {
      v13 = CmpKeyEnumStackGetEntryAtLayerHeight(a1);
      v14 = *(_QWORD *)(v13 + 120);
      if ( v14 && (v14 == v9 || !(unsigned int)CmpCompareKeysByName(v14, v9)) )
      {
        v15 = CmpKeyNodeStackGetEntryAtLayerHeight(a1 + 8, v10);
        v16 = *(_QWORD *)v13;
        v17 = v15;
        v18 = *(unsigned int *)(v13 + 112);
        *(_QWORD *)v15 = *(_QWORD *)v13;
        v19 = (unsigned int *)(v15 + 24);
        *(_DWORD *)(v15 + 8) = v18;
        if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(v16, v18, v19);
        else
          CellFlat = HvpGetCellPaged(v16, v18, v19);
        *(_QWORD *)(v17 + 16) = CellFlat;
      }
    }
  }
  else
  {
    return (unsigned int)-2147483622;
  }
  return v1;
}
