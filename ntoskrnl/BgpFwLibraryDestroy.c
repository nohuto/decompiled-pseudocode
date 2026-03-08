/*
 * XREFs of BgpFwLibraryDestroy @ 0x140AEBA88
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140AEAC78 (BgpFwLibraryInitialize.c)
 *     BgLibraryDestroy @ 0x140AEE2D8 (BgLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140382650 (BgpFwFreeMemory.c)
 *     BgpFwLibraryDisable @ 0x140AE91EC (BgpFwLibraryDisable.c)
 *     BgpFwInitializeReservePool @ 0x140AEB5A8 (BgpFwInitializeReservePool.c)
 *     ResFwBackgroundTransition @ 0x140AEBAF8 (ResFwBackgroundTransition.c)
 *     BgpFoDestroy @ 0x140AEBCA8 (BgpFoDestroy.c)
 */

__int64 BgpFwLibraryDestroy()
{
  BgpFoDestroy(0LL);
  if ( qword_140C0E458 )
  {
    BgpFoDestroy(qword_140C0E458);
    if ( *(_QWORD *)qword_140C0E458 && (*(_DWORD *)(qword_140C0E458 + 12) & 1) == 0 )
      BgpFwFreeMemory(*(_QWORD *)qword_140C0E458);
    BgpFwFreeMemory(qword_140C0E458);
    qword_140C0E458 = 0LL;
  }
  if ( qword_140C0E3E0 )
  {
    BgpFwFreeMemory(qword_140C0E3E0);
    qword_140C0E3E0 = 0LL;
    BgpFwInitializeReservePool(0LL, 0, 0LL);
    qword_140C0E460 = 0LL;
    qword_140C0E478 = 0LL;
    qword_140C0E470 = 0LL;
  }
  BgpFwLibraryDisable();
  ResFwBackgroundTransition(2LL);
  dword_140C0E3B0 = 0;
  return 0LL;
}
