/*
 * XREFs of CmpFreeValue @ 0x1406BAA4C
 * Callers:
 *     CmpTransMgrFreeVolatileData @ 0x1406B617C (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteValueKey @ 0x1406B9764 (CmDeleteValueKey.c)
 *     CmpFreeKeyByCell @ 0x1406BA854 (CmpFreeKeyByCell.c)
 *     CmpSetValueKeyNew @ 0x1407A5CB0 (CmpSetValueKeyNew.c)
 *     CmSetValueKey @ 0x1407A9870 (CmSetValueKey.c)
 *     CmpSetValueKeyTombstone @ 0x140A14050 (CmpSetValueKeyTombstone.c)
 *     CmpCleanupLightWeightUoWData @ 0x140A196A4 (CmpCleanupLightWeightUoWData.c)
 *     CmpFreeKeyValueList @ 0x140A1F10C (CmpFreeKeyValueList.c)
 *     CmpFreeKeyValues @ 0x140A1F1C0 (CmpFreeKeyValues.c)
 *     CmpSyncKeyValues @ 0x140A20124 (CmpSyncKeyValues.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x140A256EC (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x140A25BE0 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x140A26E00 (CmpLightWeightPrepareSetValueKeyUoW.c)
 * Callees:
 *     CmpFreeValueData @ 0x1406BAAE0 (CmpFreeValueData.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvFreeCell @ 0x1407A6A90 (HvFreeCell.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

char __fastcall CmpFreeValue(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // edi
  bool v3; // zf
  __int64 CellPaged; // rax
  char v6; // al
  char v7; // cl
  int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+34h] [rbp+Ch]

  v9 = -1;
  v2 = BugCheckParameter3;
  v3 = (*(_BYTE *)(BugCheckParameter2 + 140) & 1) == 0;
  v10 = 0;
  if ( v3 )
    CellPaged = HvpGetCellPaged(BugCheckParameter2);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter2, BugCheckParameter3);
  if ( !CellPaged )
    return 0;
  v6 = CmpFreeValueData(BugCheckParameter2);
  v7 = *(_BYTE *)(BugCheckParameter2 + 140) & 1;
  if ( !v6 )
  {
    if ( v7 )
      HvpReleaseCellFlat(BugCheckParameter2, &v9);
    else
      HvpReleaseCellPaged(BugCheckParameter2, &v9);
    return 0;
  }
  if ( v7 )
    HvpReleaseCellFlat(BugCheckParameter2, &v9);
  else
    HvpReleaseCellPaged(BugCheckParameter2, &v9);
  HvFreeCell(BugCheckParameter2, v2);
  return 1;
}
