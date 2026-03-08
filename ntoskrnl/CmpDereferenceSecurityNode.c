/*
 * XREFs of CmpDereferenceSecurityNode @ 0x140243994
 * Callers:
 *     CmpUndoDeleteKeyForTransEx @ 0x14067D5F4 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406B617C (CmpTransMgrFreeVolatileData.c)
 *     CmpFreeSecurityDescriptor @ 0x1406BB6D4 (CmpFreeSecurityDescriptor.c)
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 *     CmpCopySaclToVirtualKey @ 0x140A186EC (CmpCopySaclToVirtualKey.c)
 *     CmpSyncKeyValues @ 0x140A20124 (CmpSyncKeyValues.c)
 *     CmpLightWeightCleanupSetSecDescUoW @ 0x140A252A8 (CmpLightWeightCleanupSetSecDescUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140A25A40 (CmpLightWeightCommitSetSecDescUoW.c)
 * Callees:
 *     CmpRemoveSecurityCellList @ 0x1402F6F3C (CmpRemoveSecurityCellList.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvFreeCell @ 0x1407A6A90 (HvFreeCell.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpDereferenceSecurityNode(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  unsigned int v3; // edi
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v3 = BugCheckParameter4;
  HvpGetCellContextReinitialize(&v6);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    result = HvpGetCellFlat(BugCheckParameter3, v3);
  else
    result = HvpGetCellPaged(BugCheckParameter3);
  if ( (*(_DWORD *)(result + 12))-- == 1 )
  {
    CmpRemoveSecurityCellList(BugCheckParameter3);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v6);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v6);
    return HvFreeCell(BugCheckParameter3, v3);
  }
  else if ( result )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      return HvpReleaseCellFlat(BugCheckParameter3, &v6);
    else
      return HvpReleaseCellPaged(BugCheckParameter3, &v6);
  }
  return result;
}
