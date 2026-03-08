/*
 * XREFs of MiColdPageSizeSupported @ 0x1402DD100
 * Callers:
 *     MiDetermineCoalescedLargePageHeatState @ 0x1402DD078 (MiDetermineCoalescedLargePageHeatState.c)
 *     MiDetermineNewPfnHeatState @ 0x1402DD0B8 (MiDetermineNewPfnHeatState.c)
 *     MiFreeLargePageMemory @ 0x1403505C0 (MiFreeLargePageMemory.c)
 *     MmSetPfnListInfo @ 0x140387180 (MmSetPfnListInfo.c)
 *     MiSplitDirectMapPage @ 0x14063CE6C (MiSplitDirectMapPage.c)
 *     MiChangePageHeatImmediate @ 0x1406517FC (MiChangePageHeatImmediate.c)
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
