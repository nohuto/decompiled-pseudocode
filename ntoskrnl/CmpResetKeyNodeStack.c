/*
 * XREFs of CmpResetKeyNodeStack @ 0x140A1D48C
 * Callers:
 *     CmpSubtreeEnumeratorReset @ 0x140A1DA20 (CmpSubtreeEnumeratorReset.c)
 *     CmpKeyEnumStackReset @ 0x140A2152C (CmpKeyEnumStackReset.c)
 * Callees:
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140783798 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 */

void __fastcall CmpResetKeyNodeStack(__int16 *a1)
{
  __int16 i; // di
  __int64 *EntryAtLayerHeight; // rax
  __int64 *v4; // rbx
  __int64 v5; // rcx
  unsigned int *v6; // rdx

  for ( i = 0; i <= *a1; ++i )
  {
    EntryAtLayerHeight = (__int64 *)CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a1, i);
    v4 = EntryAtLayerHeight;
    if ( EntryAtLayerHeight[2] )
    {
      v5 = *EntryAtLayerHeight;
      v6 = (unsigned int *)(EntryAtLayerHeight + 3);
      if ( (*(_BYTE *)(*EntryAtLayerHeight + 140) & 1) != 0 )
        HvpReleaseCellFlat(v5, v6);
      else
        HvpReleaseCellPaged(v5, v6);
    }
    *(_OWORD *)v4 = 0LL;
    *((_OWORD *)v4 + 1) = 0LL;
    *((_DWORD *)v4 + 2) = -1;
    HvpGetCellContextReinitialize(v4 + 3);
  }
}
