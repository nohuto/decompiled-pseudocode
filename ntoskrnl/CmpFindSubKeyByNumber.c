/*
 * XREFs of CmpFindSubKeyByNumber @ 0x1407AD320
 * Callers:
 *     CmDeleteLayeredKey @ 0x1406144A0 (CmDeleteLayeredKey.c)
 *     CmpFindSubKeyByNumberEx @ 0x1407ACFB0 (CmpFindSubKeyByNumberEx.c)
 *     CmpClearKeyAccessBits @ 0x1408810DC (CmpClearKeyAccessBits.c)
 *     CmpEnumerateLayeredKey @ 0x140A13774 (CmpEnumerateLayeredKey.c)
 *     CmpCopySyncTree2 @ 0x140A1E7F8 (CmpCopySyncTree2.c)
 *     CmpPreserveSystemHiveData @ 0x140A1F84C (CmpPreserveSystemHiveData.c)
 *     CmpSyncSubKeysAfterDelete @ 0x140A203EC (CmpSyncSubKeysAfterDelete.c)
 *     CmpMarkAllChildrenDirty @ 0x140A2179C (CmpMarkAllChildrenDirty.c)
 *     CmpUpdateParentForEachSon @ 0x140A22084 (CmpUpdateParentForEachSon.c)
 *     CmpDeleteTree @ 0x140A22F10 (CmpDeleteTree.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140AF2AFC (CmpDoAccessCheckOnSubtree.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140B333A8 (CmSelectQualifiedInstallLanguage.c)
 *     CmpFindDrivers @ 0x140B34758 (CmpFindDrivers.c)
 * Callees:
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpDoFindSubKeyByNumber @ 0x1407AD3EC (CmpDoFindSubKeyByNumber.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpFindSubKeyByNumber(ULONG_PTR BugCheckParameter3, _DWORD *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v5; // eax
  ULONG_PTR v7; // rdx
  __int64 CellFlat; // rax
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0xFFFFFFFFLL;
  v5 = a2[5];
  *a4 = -1;
  if ( a3 >= v5 )
  {
    if ( *(_DWORD *)(BugCheckParameter3 + 216) <= 1u || a3 - v5 >= a2[6] )
      return 0LL;
    v7 = (unsigned int)a2[8];
  }
  else
  {
    v7 = (unsigned int)a2[7];
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v7);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  if ( !CellFlat )
    return 3221225626LL;
  *a4 = CmpDoFindSubKeyByNumber(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0 )
  {
    HvpReleaseCellPaged(BugCheckParameter3, &v10);
    return 0LL;
  }
  HvpReleaseCellFlat(BugCheckParameter3, &v10);
  return 0LL;
}
