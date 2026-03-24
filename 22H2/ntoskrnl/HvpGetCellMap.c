/*
 * XREFs of HvpGetCellMap @ 0x140655DC0
 * Callers:
 *     HvpFindFreeCell @ 0x1406555DC (HvpFindFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x1406557C0 (HvpRemoveFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x140655978 (HvpEnlistFreeCell.c)
 *     HvpMarkCellDirty @ 0x140655AB0 (HvpMarkCellDirty.c)
 *     HvpAddFreeCellHint @ 0x140656770 (HvpAddFreeCellHint.c)
 *     HvpMapHiveImageFromViewMap @ 0x140656AE0 (HvpMapHiveImageFromViewMap.c)
 *     HvFreeCell @ 0x140656BC4 (HvFreeCell.c)
 *     HvCheckHive @ 0x140656ED8 (HvCheckHive.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14065702C (HvpRemapAndEnlistHiveBins.c)
 *     HvHiveCleanup @ 0x1406572B4 (HvHiveCleanup.c)
 *     HvpSetRangeProtection @ 0x140657508 (HvpSetRangeProtection.c)
 *     HvTrimHive @ 0x14069FEEC (HvTrimHive.c)
 *     HvpFindNextDirtyBlock @ 0x1406BEED8 (HvpFindNextDirtyBlock.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1407203B0 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpTruncateBins @ 0x140720854 (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x14072090C (HvFreeHivePartial.c)
 *     HvpAddBin @ 0x140721E28 (HvpAddBin.c)
 *     HvpPointMapEntriesToBuffer @ 0x14072242C (HvpPointMapEntriesToBuffer.c)
 *     HvWriteExternal @ 0x140729E60 (HvWriteExternal.c)
 *     HvpDropPagedBins @ 0x14079FB58 (HvpDropPagedBins.c)
 *     HvpCopyModifiedData @ 0x140873E40 (HvpCopyModifiedData.c)
 *     HvSnapshotHiveToOffsetArray @ 0x1408808A4 (HvSnapshotHiveToOffsetArray.c)
 *     HvpShrinkMap @ 0x140880BB0 (HvpShrinkMap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpGetCellMap(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax

  v2 = a1 + 632LL * (a2 >> 31);
  if ( a2 + (a2 >> 31 << 31) >= *(_DWORD *)(v2 + 272) )
    return 0LL;
  else
    return *(_QWORD *)(*(_QWORD *)(v2 + 280) + 8LL * ((a2 >> 21) & 0x3FF)) + 24LL * ((a2 >> 12) & 0x1FF);
}
