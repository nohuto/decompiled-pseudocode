/*
 * XREFs of BgpFwLibraryDestroy @ 0x140AEFA48
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140AEEC38 (BgpFwLibraryInitialize.c)
 *     BgLibraryDestroy @ 0x140AF22D8 (BgLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1403852A0 (BgpFwFreeMemory.c)
 *     BgpFwLibraryDisable @ 0x140AED1B0 (BgpFwLibraryDisable.c)
 *     BgpFwInitializeReservePool @ 0x140AEF568 (BgpFwInitializeReservePool.c)
 *     BgpFoDestroy @ 0x140AF0360 (BgpFoDestroy.c)
 *     ResFwBackgroundTransition @ 0x140AF0428 (ResFwBackgroundTransition.c)
 */

__int64 BgpFwLibraryDestroy()
{
  BgpFoDestroy(0LL);
  if ( qword_140C0E558 )
  {
    BgpFoDestroy(qword_140C0E558);
    if ( *(_QWORD *)qword_140C0E558 && (*(_DWORD *)(qword_140C0E558 + 12) & 1) == 0 )
      BgpFwFreeMemory(*(_QWORD *)qword_140C0E558);
    BgpFwFreeMemory(qword_140C0E558);
    qword_140C0E558 = 0LL;
  }
  if ( qword_140C0E4E0 )
  {
    BgpFwFreeMemory(qword_140C0E4E0);
    qword_140C0E4E0 = 0LL;
    BgpFwInitializeReservePool(0LL, 0, 0LL);
    qword_140C0E560 = 0LL;
    qword_140C0E578 = 0LL;
    qword_140C0E570 = 0LL;
  }
  BgpFwLibraryDisable();
  ResFwBackgroundTransition(2LL);
  dword_140C0E4B0 = 0;
  return 0LL;
}
