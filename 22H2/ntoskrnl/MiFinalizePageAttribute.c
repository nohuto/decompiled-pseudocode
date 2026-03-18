/*
 * XREFs of MiFinalizePageAttribute @ 0x1402E15E4
 * Callers:
 *     MiInitializeTransitionPfn @ 0x14021AF78 (MiInitializeTransitionPfn.c)
 *     MiMigratePfn @ 0x140262FC0 (MiMigratePfn.c)
 *     MmCheckCachedPageStates @ 0x140265200 (MmCheckCachedPageStates.c)
 *     MiAllocateKernelStackPages @ 0x1402731A0 (MiAllocateKernelStackPages.c)
 *     MiCopyDataPageToImagePage @ 0x14028B350 (MiCopyDataPageToImagePage.c)
 *     MiZeroLocalPages @ 0x1402CF540 (MiZeroLocalPages.c)
 *     MiTradeActivePage @ 0x1402EAE24 (MiTradeActivePage.c)
 *     MiCombineInitialInstance @ 0x1402EC690 (MiCombineInitialInstance.c)
 *     MiReplaceTransitionPage @ 0x1403304D0 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x1403BBD7C (MiStealPage.c)
 *     MiSplitDirectMapPage @ 0x14063F2D4 (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x140651E40 (MiSwapNumaStandbyPage.c)
 *     MiBuildForkPte @ 0x140662270 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1406649B8 (MiHandleForkTransitionPte.c)
 *     MxSwapPages @ 0x140B5BAA8 (MxSwapPages.c)
 *     MiInitializeCacheFlushing @ 0x140B6B46C (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiSetPfnTbFlushStamp @ 0x1402E1630 (MiSetPfnTbFlushStamp.c)
 *     MiChangePageAttribute @ 0x14036ED6C (MiChangePageAttribute.c)
 */

__int64 __fastcall MiFinalizePageAttribute(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( *(unsigned __int8 *)(a1 + 34) >> 6 != (_DWORD)a2 )
    MiChangePageAttribute(a1, a2, a3 != 0);
  return MiSetPfnTbFlushStamp(a1, 0LL, a3);
}
