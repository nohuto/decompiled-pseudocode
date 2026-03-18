/*
 * XREFs of MiColdPageSizeSupported @ 0x140347440
 * Callers:
 *     MiFreeLargePageMemory @ 0x1402E7498 (MiFreeLargePageMemory.c)
 *     MiDetermineCoalescedLargePageHeatState @ 0x1403473B8 (MiDetermineCoalescedLargePageHeatState.c)
 *     MiDetermineNewPfnHeatState @ 0x1403473F8 (MiDetermineNewPfnHeatState.c)
 *     MmSetPfnListInfo @ 0x140389DC0 (MmSetPfnListInfo.c)
 *     MiSplitDirectMapPage @ 0x14063F2D4 (MiSplitDirectMapPage.c)
 *     MiChangePageHeatImmediate @ 0x140653E5C (MiChangePageHeatImmediate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiColdPageSizeSupported(unsigned int a1)
{
  __int64 result; // rax

  if ( (HvlEnlightenments & 0x8400000) == 0 )
    return 0LL;
  result = 1LL;
  if ( a1 > 1 && (HvlEnlightenments & 0x8000000) != 0 )
    return 0LL;
  return result;
}
