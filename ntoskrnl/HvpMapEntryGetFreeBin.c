/*
 * XREFs of HvpMapEntryGetFreeBin @ 0x1407A6910
 * Callers:
 *     HvpTruncateBins @ 0x14072DABC (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x14072DB74 (HvFreeHivePartial.c)
 *     HvpFindNextDirtyBlock @ 0x1407A4B70 (HvpFindNextDirtyBlock.c)
 *     HvHiveCleanup @ 0x1407A56B8 (HvHiveCleanup.c)
 *     HvpSetRangeProtection @ 0x1407A5934 (HvpSetRangeProtection.c)
 *     HvCheckHive @ 0x1407A6080 (HvCheckHive.c)
 *     HvpDropPagedBins @ 0x140820B14 (HvpDropPagedBins.c)
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
