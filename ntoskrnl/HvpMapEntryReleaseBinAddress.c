/*
 * XREFs of HvpMapEntryReleaseBinAddress @ 0x140AF26CC
 * Callers:
 *     HvpMapEntryReleaseBlockAddress @ 0x140799A90 (HvpMapEntryReleaseBlockAddress.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1407A488C (HvpRemapAndEnlistHiveBins.c)
 *     HvpFindNextDirtyBlock @ 0x1407A4B70 (HvpFindNextDirtyBlock.c)
 *     HvpSetRangeProtection @ 0x1407A5934 (HvpSetRangeProtection.c)
 *     HvCheckHive @ 0x1407A6080 (HvCheckHive.c)
 *     HvpFindFreeCell @ 0x1407A6710 (HvpFindFreeCell.c)
 *     CmpCheckValueList @ 0x1407B2930 (CmpCheckValueList.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpDropPagedBins @ 0x140820B14 (HvpDropPagedBins.c)
 *     HvWriteExternal @ 0x140A1DE94 (HvWriteExternal.c)
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
