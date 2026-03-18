/*
 * XREFs of HvpMapEntryGetBinAddress @ 0x140AF6210
 * Callers:
 *     CmpCheckLeaf @ 0x1406DCB70 (CmpCheckLeaf.c)
 *     HvIsCellAllocated @ 0x1406DD400 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x1406DE570 (CmpCheckValueList.c)
 *     HvpGetCellPaged @ 0x1406E0200 (HvpGetCellPaged.c)
 *     HvpMapEntryGetBlockAddress @ 0x1406E02E4 (HvpMapEntryGetBlockAddress.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1407034AC (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpFindNextDirtyBlock @ 0x14070924C (HvpFindNextDirtyBlock.c)
 *     HvpSetRangeProtection @ 0x140709A04 (HvpSetRangeProtection.c)
 *     HvCheckHive @ 0x14070A150 (HvCheckHive.c)
 *     HvpRemoveFreeCellHint @ 0x14070A2D0 (HvpRemoveFreeCellHint.c)
 *     HvpFindFreeCell @ 0x14070A7E0 (HvpFindFreeCell.c)
 *     HvFreeCell @ 0x14070AC90 (HvFreeCell.c)
 *     HvpAddFreeCellHint @ 0x1407463C4 (HvpAddFreeCellHint.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14074FCA4 (HvpRemapAndEnlistHiveBins.c)
 *     HvpDropPagedBins @ 0x140828B84 (HvpDropPagedBins.c)
 *     HvWriteExternal @ 0x140A20BF4 (HvWriteExternal.c)
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
