/*
 * XREFs of HvpGetCellMap @ 0x140AF6280
 * Callers:
 *     CmpCheckLeaf @ 0x1406DCB70 (CmpCheckLeaf.c)
 *     HvIsCellAllocated @ 0x1406DD400 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x1406DE570 (CmpCheckValueList.c)
 *     HvpReleaseCellPaged @ 0x1406E0310 (HvpReleaseCellPaged.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1407034AC (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvFreeHivePartial @ 0x140707258 (HvFreeHivePartial.c)
 *     HvpTruncateBins @ 0x1407073EC (HvpTruncateBins.c)
 *     HvpFindNextDirtyBlock @ 0x14070924C (HvpFindNextDirtyBlock.c)
 *     HvHiveCleanup @ 0x140709780 (HvHiveCleanup.c)
 *     HvpSetRangeProtection @ 0x140709A04 (HvpSetRangeProtection.c)
 *     HvCheckHive @ 0x14070A150 (HvCheckHive.c)
 *     HvpRemoveFreeCellHint @ 0x14070A2D0 (HvpRemoveFreeCellHint.c)
 *     HvpFindFreeCell @ 0x14070A7E0 (HvpFindFreeCell.c)
 *     HvFreeCell @ 0x14070AC90 (HvFreeCell.c)
 *     HvpAddFreeCellHint @ 0x1407463C4 (HvpAddFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x140746480 (HvpEnlistFreeCell.c)
 *     HvpMarkCellDirty @ 0x1407474B0 (HvpMarkCellDirty.c)
 *     HvpAddBin @ 0x14074F684 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14074FCA4 (HvpRemapAndEnlistHiveBins.c)
 *     HvpPointMapEntriesToBuffer @ 0x1407502DC (HvpPointMapEntriesToBuffer.c)
 *     HvpMapHiveImageFromViewMap @ 0x1407507E8 (HvpMapHiveImageFromViewMap.c)
 *     HvpCopyModifiedData @ 0x1407FED30 (HvpCopyModifiedData.c)
 *     HvpDropPagedBins @ 0x140828B84 (HvpDropPagedBins.c)
 *     HvTrimHive @ 0x14085FA7C (HvTrimHive.c)
 *     HvWriteExternal @ 0x140A20BF4 (HvWriteExternal.c)
 *     HvpShrinkMap @ 0x140A25BA4 (HvpShrinkMap.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140AF6DB4 (HvSnapshotHiveToOffsetArray.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpGetCellMap(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax

  v2 = a1 + 632LL * (a2 >> 31);
  if ( a2 + (a2 >> 31 << 31) >= *(_DWORD *)(v2 + 280) )
    return 0LL;
  else
    return *(_QWORD *)(*(_QWORD *)(v2 + 288) + 8LL * ((a2 >> 21) & 0x3FF)) + 24LL * ((a2 >> 12) & 0x1FF);
}
