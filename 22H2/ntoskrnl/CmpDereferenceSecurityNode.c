/*
 * XREFs of CmpDereferenceSecurityNode @ 0x140297330
 * Callers:
 *     CmpUndoDeleteKeyForTransEx @ 0x140680518 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpFreeSecurityDescriptor @ 0x14070C080 (CmpFreeSecurityDescriptor.c)
 *     CmpTransMgrFreeVolatileData @ 0x140769424 (CmpTransMgrFreeVolatileData.c)
 *     CmRenameKey @ 0x140A1445C (CmRenameKey.c)
 *     CmpCopySaclToVirtualKey @ 0x140A1B43C (CmpCopySaclToVirtualKey.c)
 *     CmpSyncKeyValues @ 0x140A22E84 (CmpSyncKeyValues.c)
 *     CmpLightWeightCleanupSetSecDescUoW @ 0x140A28008 (CmpLightWeightCleanupSetSecDescUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140A287A0 (CmpLightWeightCommitSetSecDescUoW.c)
 * Callees:
 *     CmpRemoveSecurityCellList @ 0x14036189C (CmpRemoveSecurityCellList.c)
 *     CmpKeySecurityDecrementReferenceCount @ 0x1404192B0 (CmpKeySecurityDecrementReferenceCount.c)
 *     HvpGetCellPaged @ 0x1406E0200 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0310 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1406E034C (HvpGetCellContextReinitialize.c)
 *     HvFreeCell @ 0x14070AC90 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x1407D99F0 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FE0A0 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpDereferenceSecurityNode(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  unsigned int v3; // edi
  __int64 CellFlat; // rax
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v3 = BugCheckParameter4;
  HvpGetCellContextReinitialize(&v7);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v3);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v5 = CellFlat;
  result = CmpKeySecurityDecrementReferenceCount(CellFlat, BugCheckParameter3, v3);
  if ( (_BYTE)result )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v7);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v7);
    CmpRemoveSecurityCellList(BugCheckParameter3);
    return HvFreeCell(BugCheckParameter3, v3);
  }
  else if ( v5 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      return HvpReleaseCellFlat(BugCheckParameter3, &v7);
    else
      return HvpReleaseCellPaged(BugCheckParameter3, &v7);
  }
  return result;
}
