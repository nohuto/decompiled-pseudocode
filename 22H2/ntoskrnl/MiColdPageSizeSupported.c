/*
 * XREFs of MiColdPageSizeSupported @ 0x1403F73D8
 * Callers:
 *     MiZeroPage @ 0x140232C80 (MiZeroPage.c)
 *     MiCoalesceFreePages @ 0x140235610 (MiCoalesceFreePages.c)
 *     MiFreeLargePageMemory @ 0x14027ECD4 (MiFreeLargePageMemory.c)
 *     MmSetPfnListInfo @ 0x1403733C4 (MmSetPfnListInfo.c)
 *     MiLargePagePromote @ 0x1403F6418 (MiLargePagePromote.c)
 *     MiChangePageHeatImmediate @ 0x1403F7330 (MiChangePageHeatImmediate.c)
 *     MiDetermineNewPfnHeatState @ 0x1403F7400 (MiDetermineNewPfnHeatState.c)
 *     MiRelocateImage @ 0x140702D80 (MiRelocateImage.c)
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
