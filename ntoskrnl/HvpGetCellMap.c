/*
 * XREFs of HvpGetCellMap @ 0x140AF2670
 * Callers:
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14072CD4C (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpTruncateBins @ 0x14072DABC (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x14072DB74 (HvFreeHivePartial.c)
 *     HvpAddBin @ 0x14072F9F0 (HvpAddBin.c)
 *     HvpPointMapEntriesToBuffer @ 0x140730010 (HvpPointMapEntriesToBuffer.c)
 *     HvpMapHiveImageFromViewMap @ 0x14073051C (HvpMapHiveImageFromViewMap.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1407A488C (HvpRemapAndEnlistHiveBins.c)
 *     HvpFindNextDirtyBlock @ 0x1407A4B70 (HvpFindNextDirtyBlock.c)
 *     HvHiveCleanup @ 0x1407A56B8 (HvHiveCleanup.c)
 *     HvpSetRangeProtection @ 0x1407A5934 (HvpSetRangeProtection.c)
 *     HvCheckHive @ 0x1407A6080 (HvCheckHive.c)
 *     HvpRemoveFreeCellHint @ 0x1407A6200 (HvpRemoveFreeCellHint.c)
 *     HvpFindFreeCell @ 0x1407A6710 (HvpFindFreeCell.c)
 *     HvFreeCell @ 0x1407A6A90 (HvFreeCell.c)
 *     HvpEnlistFreeCell @ 0x1407A6D78 (HvpEnlistFreeCell.c)
 *     HvpAddFreeCellHint @ 0x1407A6EA4 (HvpAddFreeCellHint.c)
 *     CmpCheckLeaf @ 0x1407B0800 (CmpCheckLeaf.c)
 *     HvIsCellAllocated @ 0x1407B0B10 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x1407B2930 (CmpCheckValueList.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpMarkCellDirty @ 0x1407D2460 (HvpMarkCellDirty.c)
 *     HvpCopyModifiedData @ 0x1407FA0A0 (HvpCopyModifiedData.c)
 *     HvpDropPagedBins @ 0x140820B14 (HvpDropPagedBins.c)
 *     HvTrimHive @ 0x14085BB7C (HvTrimHive.c)
 *     HvWriteExternal @ 0x140A1DE94 (HvWriteExternal.c)
 *     HvpShrinkMap @ 0x140A22E44 (HvpShrinkMap.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140AF2D84 (HvSnapshotHiveToOffsetArray.c)
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
