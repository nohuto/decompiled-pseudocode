__int64 __fastcall CmpKeyEnumStackNotifyPromotion(__int16 *a1)
{
  unsigned __int64 EntryAtLayerHeight; // rsi
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  unsigned int *v6; // rdx
  ULONG_PTR v7; // rcx
  unsigned int *v8; // r8
  ULONG_PTR v9; // rdx

  EntryAtLayerHeight = CmpKeyEnumStackGetEntryAtLayerHeight((__int64)a1, *a1);
  CmpKeyEnumStackEntryNotifyPromotion(EntryAtLayerHeight);
  result = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)(a1 + 4), *a1);
  v4 = result;
  if ( *(_DWORD *)(result + 8) == -1 )
  {
    if ( *(_QWORD *)(result + 16) )
    {
      v5 = *(_QWORD *)result;
      v6 = (unsigned int *)(result + 24);
      if ( (*(_BYTE *)(*(_QWORD *)result + 140LL) & 1) != 0 )
        HvpReleaseCellFlat(v5, v6);
      else
        HvpReleaseCellPaged(v5, v6);
    }
    *(_OWORD *)v4 = 0LL;
    *(_OWORD *)(v4 + 16) = 0LL;
    *(_DWORD *)(v4 + 8) = -1;
    HvpGetCellContextReinitialize((_QWORD *)(v4 + 24));
    v7 = *(_QWORD *)EntryAtLayerHeight;
    v8 = (unsigned int *)(v4 + 24);
    v9 = *(unsigned int *)(EntryAtLayerHeight + 112);
    *(_QWORD *)v4 = *(_QWORD *)EntryAtLayerHeight;
    *(_DWORD *)(v4 + 8) = v9;
    if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
      result = HvpGetCellFlat(v7, v9, v8);
    else
      result = HvpGetCellPaged(v7, v9, v8);
    *(_QWORD *)(v4 + 16) = result;
  }
  return result;
}
