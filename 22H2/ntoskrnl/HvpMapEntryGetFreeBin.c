/*
 * XREFs of HvpMapEntryGetFreeBin @ 0x14070A9E0
 * Callers:
 *     HvFreeHivePartial @ 0x140707258 (HvFreeHivePartial.c)
 *     HvpTruncateBins @ 0x1407073EC (HvpTruncateBins.c)
 *     HvpFindNextDirtyBlock @ 0x14070924C (HvpFindNextDirtyBlock.c)
 *     HvHiveCleanup @ 0x140709780 (HvHiveCleanup.c)
 *     HvpSetRangeProtection @ 0x140709A04 (HvpSetRangeProtection.c)
 *     HvCheckHive @ 0x14070A150 (HvCheckHive.c)
 *     HvpDropPagedBins @ 0x140828B84 (HvpDropPagedBins.c)
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
