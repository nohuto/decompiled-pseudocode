/*
 * XREFs of MiGetPfnChannel @ 0x1402870B0
 * Callers:
 *     MiGetPage @ 0x14026D240 (MiGetPage.c)
 *     MiLargePageFreeToZero @ 0x140286E20 (MiLargePageFreeToZero.c)
 *     MiZeroPage @ 0x1402D09F0 (MiZeroPage.c)
 *     MiGetFreeLargePage @ 0x1402D8720 (MiGetFreeLargePage.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiDeleteUltraMapContext @ 0x1402E92DC (MiDeleteUltraMapContext.c)
 *     MiPrivateFixup @ 0x1402ED678 (MiPrivateFixup.c)
 *     MiFinalizeImageHeaderPage @ 0x140330294 (MiFinalizeImageHeaderPage.c)
 *     MiSwapStackPage @ 0x140399C4C (MiSwapStackPage.c)
 *     MiTryUnlinkNodeLargePages @ 0x1403A088C (MiTryUnlinkNodeLargePages.c)
 *     MiTradePage @ 0x1403BA300 (MiTradePage.c)
 *     MiStealPage @ 0x1403BBD7C (MiStealPage.c)
 *     MiTradeTransitionPage @ 0x1403BD5C0 (MiTradeTransitionPage.c)
 *     MiReplaceNumaStandbyPage @ 0x1403C4178 (MiReplaceNumaStandbyPage.c)
 *     MiPruneStandbyPages @ 0x14046C950 (MiPruneStandbyPages.c)
 *     MiReuseUltraPageTable @ 0x14046EA2C (MiReuseUltraPageTable.c)
 *     MiProtectDriverSectionPte @ 0x14061A510 (MiProtectDriverSectionPte.c)
 *     MiReplaceLockedPage @ 0x140636D04 (MiReplaceLockedPage.c)
 *     MiCompleteSecureProcessFault @ 0x140645C08 (MiCompleteSecureProcessFault.c)
 *     MiFreeListPageContentsChanged @ 0x14064D754 (MiFreeListPageContentsChanged.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x14064EB14 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiSwapNumaStandbyPage @ 0x140651E40 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiPageToChannel @ 0x140375EC0 (MiPageToChannel.c)
 */

__int64 __fastcall MiGetPfnChannel(__int64 a1)
{
  if ( qword_140C65BD0 )
    return MiPageToChannel(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4));
  else
    return 0LL;
}
