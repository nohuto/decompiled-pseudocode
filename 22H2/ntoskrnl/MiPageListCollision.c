/*
 * XREFs of MiPageListCollision @ 0x14036825C
 * Callers:
 *     MiUnlinkFreeOrZeroedPage @ 0x1402D1E90 (MiUnlinkFreeOrZeroedPage.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1402D89C0 (MiUnlinkNodeLargePageHelper.c)
 *     MiReplenishPageSlist @ 0x1402E7AD0 (MiReplenishPageSlist.c)
 *     MiUnlinkHugeRange @ 0x140622B2C (MiUnlinkHugeRange.c)
 *     MiScrubLargePage @ 0x14065E9DC (MiScrubLargePage.c)
 * Callees:
 *     MiStopPageAccessor @ 0x14036829C (MiStopPageAccessor.c)
 *     MiZeroPageWorkMapping @ 0x1403682F4 (MiZeroPageWorkMapping.c)
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
