/*
 * XREFs of MiGetPfnChannel @ 0x140284844
 * Callers:
 *     MiGetPage @ 0x1402135D0 (MiGetPage.c)
 *     MiZeroPage @ 0x140232C80 (MiZeroPage.c)
 *     MiTradePage @ 0x140281260 (MiTradePage.c)
 *     MiLargePageFreeToZero @ 0x1402843C0 (MiLargePageFreeToZero.c)
 *     MiPrivateFixup @ 0x1402E29C8 (MiPrivateFixup.c)
 *     MiTryUnlinkNodeLargePage @ 0x1402EF1FC (MiTryUnlinkNodeLargePage.c)
 *     MiSwapStackPage @ 0x14031F4BC (MiSwapStackPage.c)
 *     MiReplaceNumaStandbyPage @ 0x1403344FC (MiReplaceNumaStandbyPage.c)
 *     MiTradeTransitionPage @ 0x1403346F8 (MiTradeTransitionPage.c)
 *     MiStealPage @ 0x140334CB4 (MiStealPage.c)
 *     MiAllocateMdlPagesByLists @ 0x140374EF4 (MiAllocateMdlPagesByLists.c)
 *     MiUnlinkNumaStandbyPage @ 0x14039C344 (MiUnlinkNumaStandbyPage.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403F50CC (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiLargePagePromote @ 0x1403F6418 (MiLargePagePromote.c)
 *     MiReplaceLockedPage @ 0x14053D6AC (MiReplaceLockedPage.c)
 *     MiFreeListPageContentsChanged @ 0x14054ED8C (MiFreeListPageContentsChanged.c)
 *     MiPruneStandbyPages @ 0x140550D14 (MiPruneStandbyPages.c)
 *     MiSwapNumaStandbyPage @ 0x140551310 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiPageToChannel @ 0x14027F788 (MiPageToChannel.c)
 */

__int64 __fastcall MiGetPfnChannel(__int64 a1)
{
  if ( qword_140C4DED0 )
    return MiPageToChannel((a1 + 0x58000000000LL) / 48);
  else
    return 0LL;
}
