/*
 * XREFs of HvpMapEntryGetBinAddress @ 0x140AF2654
 * Callers:
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14072CD4C (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1407A488C (HvpRemapAndEnlistHiveBins.c)
 *     HvpFindNextDirtyBlock @ 0x1407A4B70 (HvpFindNextDirtyBlock.c)
 *     HvpSetRangeProtection @ 0x1407A5934 (HvpSetRangeProtection.c)
 *     HvCheckHive @ 0x1407A6080 (HvCheckHive.c)
 *     HvpRemoveFreeCellHint @ 0x1407A6200 (HvpRemoveFreeCellHint.c)
 *     HvpFindFreeCell @ 0x1407A6710 (HvpFindFreeCell.c)
 *     HvFreeCell @ 0x1407A6A90 (HvFreeCell.c)
 *     HvpAddFreeCellHint @ 0x1407A6EA4 (HvpAddFreeCellHint.c)
 *     CmpCheckLeaf @ 0x1407B0800 (CmpCheckLeaf.c)
 *     HvIsCellAllocated @ 0x1407B0B10 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x1407B2930 (CmpCheckValueList.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpMapEntryGetBlockAddress @ 0x1407B46A4 (HvpMapEntryGetBlockAddress.c)
 *     HvpDropPagedBins @ 0x140820B14 (HvpDropPagedBins.c)
 *     HvWriteExternal @ 0x140A1DE94 (HvWriteExternal.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HvpMapEntryGetBinAddress(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 v3; // rax

  v3 = *(_QWORD *)(a2 + 8);
  *a3 |= 1u;
  return v3 & 0xFFFFFFFFFFFFFFF0uLL;
}
