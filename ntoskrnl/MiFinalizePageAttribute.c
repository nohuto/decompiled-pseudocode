/*
 * XREFs of MiFinalizePageAttribute @ 0x14028A354
 * Callers:
 *     MiTradeActivePage @ 0x140211BC0 (MiTradeActivePage.c)
 *     MiInitializeTransitionPfn @ 0x140214B28 (MiInitializeTransitionPfn.c)
 *     MmCheckCachedPageStates @ 0x1402200B0 (MmCheckCachedPageStates.c)
 *     MiMigratePfn @ 0x140272370 (MiMigratePfn.c)
 *     MiZeroLocalPages @ 0x140273BB0 (MiZeroLocalPages.c)
 *     MiCombineInitialInstance @ 0x14029CD58 (MiCombineInitialInstance.c)
 *     MiReplaceTransitionPage @ 0x1402C6784 (MiReplaceTransitionPage.c)
 *     MiAllocateKernelStackPages @ 0x14031D830 (MiAllocateKernelStackPages.c)
 *     MiCopyDataPageToImagePage @ 0x140334490 (MiCopyDataPageToImagePage.c)
 *     MiStealPage @ 0x1403B70BC (MiStealPage.c)
 *     MiSplitDirectMapPage @ 0x14063CE6C (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x14064F7E0 (MiSwapNumaStandbyPage.c)
 *     MiBuildForkPte @ 0x14065FC20 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x140662368 (MiHandleForkTransitionPte.c)
 *     MxSwapPages @ 0x140B50198 (MxSwapPages.c)
 *     MiInitializeCacheFlushing @ 0x140B675DC (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiSetPfnTbFlushStamp @ 0x14028A3A0 (MiSetPfnTbFlushStamp.c)
 *     MiChangePageAttribute @ 0x14036CE40 (MiChangePageAttribute.c)
 */

__int64 __fastcall MiFinalizePageAttribute(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  if ( *(unsigned __int8 *)(a1 + 34) >> 6 != (_DWORD)a2 )
    MiChangePageAttribute(a1, a2, a3 != 0, a4);
  return MiSetPfnTbFlushStamp(a1, 0LL, a3);
}
