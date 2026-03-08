/*
 * XREFs of MiPageListCollision @ 0x1402FD02C
 * Callers:
 *     MiUnlinkFreeOrZeroedPage @ 0x140276500 (MiUnlinkFreeOrZeroedPage.c)
 *     MiReplenishPageSlist @ 0x14034E120 (MiReplenishPageSlist.c)
 *     MiUnlinkNodeLargePageHelper @ 0x14034FE70 (MiUnlinkNodeLargePageHelper.c)
 *     MiUnlinkHugeRange @ 0x140620680 (MiUnlinkHugeRange.c)
 *     MiScrubLargePage @ 0x14065C38C (MiScrubLargePage.c)
 * Callees:
 *     MiStopPageAccessor @ 0x1402FD06C (MiStopPageAccessor.c)
 *     MiZeroPageWorkMapping @ 0x1402FD0C4 (MiZeroPageWorkMapping.c)
 */

__int64 __fastcall MiPageListCollision(__int64 a1, int a2, unsigned int a3)
{
  __int64 result; // rax
  _BYTE *v5; // rdx

  result = MiStopPageAccessor(a1, a3);
  v5 = *(_BYTE **)(result + 32);
  if ( v5 )
  {
    if ( (*v5 & 1) != 0 )
      return MiZeroPageWorkMapping(*(unsigned int *)(result + 64), v5, a2 == 0 ? 2 : 0);
  }
  return result;
}
