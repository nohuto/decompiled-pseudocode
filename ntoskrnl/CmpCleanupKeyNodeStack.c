/*
 * XREFs of CmpCleanupKeyNodeStack @ 0x140783738
 * Callers:
 *     CmQueryLayeredKey @ 0x1402F262C (CmQueryLayeredKey.c)
 *     CmSaveKey @ 0x140A08D50 (CmSaveKey.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140A1D970 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x140A20860 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpKeyEnumStackCleanup @ 0x140A20CD0 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140A2163C (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x140A22BAC (CmpValueEnumStackStartFromKcbStack.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x140A23050 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140A23C40 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140A23DDC (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140783798 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 */

void __fastcall CmpCleanupKeyNodeStack(__int64 a1)
{
  unsigned __int16 i; // bx
  _QWORD *EntryAtLayerHeight; // rax
  struct _PRIVILEGE_SET *v4; // rcx
  __int64 v5; // rcx
  _QWORD *v6; // rdx

  for ( i = 0; i <= *(_WORD *)a1; ++i )
  {
    EntryAtLayerHeight = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(a1, i);
    if ( EntryAtLayerHeight[2] )
    {
      v5 = *EntryAtLayerHeight;
      v6 = EntryAtLayerHeight + 3;
      if ( (*(_BYTE *)(*EntryAtLayerHeight + 140LL) & 1) != 0 )
        HvpReleaseCellFlat(v5, v6);
      else
        HvpReleaseCellPaged(v5, v6);
    }
  }
  v4 = *(struct _PRIVILEGE_SET **)(a1 + 72);
  if ( v4 )
    CmSiFreeMemory(v4);
}
