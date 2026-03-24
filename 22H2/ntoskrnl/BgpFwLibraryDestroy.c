/*
 * XREFs of BgpFwLibraryDestroy @ 0x1409F3F0C
 * Callers:
 *     BgpFwLibraryInitialize @ 0x1409F29E8 (BgpFwLibraryInitialize.c)
 *     BgLibraryDestroy @ 0x1409F65E0 (BgLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039B660 (BgpFwFreeMemory.c)
 *     ResFwBackgroundTransition @ 0x1409F3408 (ResFwBackgroundTransition.c)
 *     BgpFwInitializeReservePool @ 0x1409F35B8 (BgpFwInitializeReservePool.c)
 *     BgpFwLibraryDisable @ 0x1409F3FE8 (BgpFwLibraryDisable.c)
 *     BgpFoDestroy @ 0x1409F41CC (BgpFoDestroy.c)
 */

__int64 BgpFwLibraryDestroy()
{
  BgpFoDestroy(0LL);
  if ( qword_140C13598 )
  {
    BgpFoDestroy(qword_140C13598);
    if ( *(_QWORD *)qword_140C13598 && (*(_DWORD *)(qword_140C13598 + 12) & 1) == 0 )
      BgpFwFreeMemory(*(_QWORD *)qword_140C13598);
    BgpFwFreeMemory(qword_140C13598);
    qword_140C13598 = 0LL;
  }
  if ( qword_140C13520 )
  {
    BgpFwFreeMemory(qword_140C13520);
    qword_140C13520 = 0LL;
    BgpFwInitializeReservePool(0LL, 0, 0LL);
    qword_140C135A0 = 0LL;
    qword_140C135B8 = 0LL;
    qword_140C135B0 = 0LL;
  }
  BgpFwLibraryDisable();
  ResFwBackgroundTransition(2);
  dword_140C134F0 = 0;
  return 0LL;
}
