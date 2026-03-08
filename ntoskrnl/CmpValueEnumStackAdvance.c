/*
 * XREFs of CmpValueEnumStackAdvance @ 0x140A228A4
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x140614148 (CmpGetValueCountForKeyNodeStack.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140A10EC4 (CmEnumerateValueFromLayeredKey.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140A23124 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     CmpIsValueTombstone @ 0x1406BB868 (CmpIsValueTombstone.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x140A22670 (CmpValueEnumStackGetEntryAtLayerHeight.c)
 *     CmpValueEnumStackMatchingValueInUpperLayer @ 0x140A22AD4 (CmpValueEnumStackMatchingValueInUpperLayer.c)
 */

__int64 __fastcall CmpValueEnumStackAdvance(__int64 a1)
{
  char v2; // al
  __int16 v3; // cx
  ULONG_PTR *EntryAtLayerHeight; // rsi
  unsigned int v5; // r9d
  ULONG_PTR v6; // rdx
  ULONG_PTR v7; // rcx
  __int64 CellFlat; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // edi
  int v14; // eax
  __int16 v15; // ax
  char v17; // [rsp+40h] [rbp+8h] BYREF
  __int64 v18; // [rsp+48h] [rbp+10h] BYREF

  v18 = 0LL;
  v17 = 0;
  HvpGetCellContextReinitialize(&v18);
  v2 = *(_BYTE *)(a1 + 4);
  if ( !v2 || *(_DWORD *)a1 != -1 )
  {
    if ( v2 )
    {
      ++*(_DWORD *)(a1 + 8);
    }
    else
    {
      *(_WORD *)(a1 + 6) = *(_WORD *)(a1 + 12);
      *(_BYTE *)(a1 + 4) = 1;
      *(_DWORD *)(a1 + 8) = 0;
    }
    *(_DWORD *)a1 = -1;
    v3 = *(_WORD *)(a1 + 6);
    if ( v3 >= 0 )
    {
      do
      {
        EntryAtLayerHeight = (ULONG_PTR *)CmpValueEnumStackGetEntryAtLayerHeight(a1, v3);
        while ( v5 < *((_DWORD *)EntryAtLayerHeight + 6) )
        {
          v6 = *(unsigned int *)(EntryAtLayerHeight[1] + 4LL * v5);
          v7 = *EntryAtLayerHeight;
          if ( (*(_BYTE *)(*EntryAtLayerHeight + 140) & 1) != 0 )
            CellFlat = HvpGetCellFlat(v7, v6, &v18);
          else
            CellFlat = HvpGetCellPaged(v7, v6, (unsigned int *)&v18);
          if ( CmpIsValueTombstone(*EntryAtLayerHeight, CellFlat) )
          {
            if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v10, &v18);
            else
              HvpReleaseCellPaged(v10, (unsigned int *)&v18);
            v5 = ++*(_DWORD *)(a1 + 8);
          }
          else
          {
            v11 = CmpValueEnumStackMatchingValueInUpperLayer(a1, *(unsigned __int16 *)(a1 + 6), v9, &v17);
            v12 = *EntryAtLayerHeight;
            v13 = v11;
            if ( (*(_BYTE *)(*EntryAtLayerHeight + 140) & 1) != 0 )
              HvpReleaseCellFlat(v12, &v18);
            else
              HvpReleaseCellPaged(v12, (unsigned int *)&v18);
            if ( v13 < 0 )
              return (unsigned int)v13;
            v14 = *(_DWORD *)(a1 + 8);
            if ( !v17 )
            {
              v13 = 0;
              *(_DWORD *)a1 = *(_DWORD *)(EntryAtLayerHeight[1] + 4LL * *(unsigned int *)(a1 + 8));
              return (unsigned int)v13;
            }
            v5 = v14 + 1;
            *(_DWORD *)(a1 + 8) = v14 + 1;
          }
        }
        v15 = *(_WORD *)(a1 + 6) - 1;
        *(_DWORD *)(a1 + 8) = 0;
        v3 = v15;
        *(_WORD *)(a1 + 6) = v15;
      }
      while ( v15 >= 0 );
    }
  }
  return (unsigned int)-2147483622;
}
