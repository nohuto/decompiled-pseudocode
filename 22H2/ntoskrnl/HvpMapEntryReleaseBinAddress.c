/*
 * XREFs of HvpMapEntryReleaseBinAddress @ 0x140AF62DC
 * Callers:
 *     CmpCheckValueList @ 0x1406DE570 (CmpCheckValueList.c)
 *     HvpReleaseCellPaged @ 0x1406E0310 (HvpReleaseCellPaged.c)
 *     HvpFindNextDirtyBlock @ 0x14070924C (HvpFindNextDirtyBlock.c)
 *     HvpSetRangeProtection @ 0x140709A04 (HvpSetRangeProtection.c)
 *     HvCheckHive @ 0x14070A150 (HvCheckHive.c)
 *     HvpFindFreeCell @ 0x14070A7E0 (HvpFindFreeCell.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14074FCA4 (HvpRemapAndEnlistHiveBins.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x1407E8C90 (HvpMapEntryReleaseBlockAddress.c)
 *     HvpDropPagedBins @ 0x140828B84 (HvpDropPagedBins.c)
 *     HvWriteExternal @ 0x140A20BF4 (HvWriteExternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpMapEntryReleaseBinAddress(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 result; // rax

  result = 0LL;
  *a3 = 0;
  return result;
}
