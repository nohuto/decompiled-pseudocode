/*
 * XREFs of HvpMapEntryGetFreeBin @ 0x14065579C
 * Callers:
 *     HvCheckHive @ 0x140656ED8 (HvCheckHive.c)
 *     HvHiveCleanup @ 0x1406572B4 (HvHiveCleanup.c)
 *     HvpSetRangeProtection @ 0x140657508 (HvpSetRangeProtection.c)
 *     HvpFindNextDirtyBlock @ 0x1406BEED8 (HvpFindNextDirtyBlock.c)
 *     HvpTruncateBins @ 0x140720854 (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x14072090C (HvFreeHivePartial.c)
 *     HvpDropPagedBins @ 0x14079FB58 (HvpDropPagedBins.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpMapEntryGetFreeBin(_BYTE *a1)
{
  if ( (a1[8] & 2) != 0 )
    return *(_QWORD *)a1;
  else
    return 0LL;
}
