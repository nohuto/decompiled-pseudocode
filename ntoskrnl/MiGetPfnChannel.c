/*
 * XREFs of MiGetPfnChannel @ 0x140334470
 * Callers:
 *     MiGetPage @ 0x14026ED40 (MiGetPage.c)
 *     MiZeroPage @ 0x140275060 (MiZeroPage.c)
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiPrivateFixup @ 0x1402A180C (MiPrivateFixup.c)
 *     MiFinalizeImageHeaderPage @ 0x1402C6548 (MiFinalizeImageHeaderPage.c)
 *     MiLargePageFreeToZero @ 0x1403341E0 (MiLargePageFreeToZero.c)
 *     MiGetFreeLargePage @ 0x14034FBD0 (MiGetFreeLargePage.c)
 *     MiDeleteUltraMapContext @ 0x1403513B4 (MiDeleteUltraMapContext.c)
 *     MiSwapStackPage @ 0x14039604C (MiSwapStackPage.c)
 *     MiTryUnlinkNodeLargePages @ 0x14039BDDC (MiTryUnlinkNodeLargePages.c)
 *     MiTradePage @ 0x1403B5640 (MiTradePage.c)
 *     MiStealPage @ 0x1403B70BC (MiStealPage.c)
 *     MiTradeTransitionPage @ 0x1403B7C98 (MiTradeTransitionPage.c)
 *     MiReplaceNumaStandbyPage @ 0x1403BE8B8 (MiReplaceNumaStandbyPage.c)
 *     MiPruneStandbyPages @ 0x140464A50 (MiPruneStandbyPages.c)
 *     MiReuseUltraPageTable @ 0x140466B2C (MiReuseUltraPageTable.c)
 *     MiProtectDriverSectionPte @ 0x140618060 (MiProtectDriverSectionPte.c)
 *     MiReplaceLockedPage @ 0x14063487C (MiReplaceLockedPage.c)
 *     MiCompleteSecureProcessFault @ 0x1406435E4 (MiCompleteSecureProcessFault.c)
 *     MiFreeListPageContentsChanged @ 0x14064B138 (MiFreeListPageContentsChanged.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x14064C4F4 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiSwapNumaStandbyPage @ 0x14064F7E0 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiPageToChannel @ 0x140370C10 (MiPageToChannel.c)
 */

__int64 __fastcall MiGetPfnChannel(__int64 a1)
{
  if ( qword_140C65750 )
    return MiPageToChannel(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4));
  else
    return 0LL;
}
