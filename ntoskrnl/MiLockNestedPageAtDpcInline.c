/*
 * XREFs of MiLockNestedPageAtDpcInline @ 0x1402DDE90
 * Callers:
 *     MiTradeActivePage @ 0x140211BC0 (MiTradeActivePage.c)
 *     MiInitializeTransitionPfn @ 0x140214B28 (MiInitializeTransitionPfn.c)
 *     MmCheckCachedPageStates @ 0x1402200B0 (MmCheckCachedPageStates.c)
 *     MiMigratePfn @ 0x140272370 (MiMigratePfn.c)
 *     MiDeleteBatch @ 0x14027A5E0 (MiDeleteBatch.c)
 *     MiInitializePfn @ 0x140289DB0 (MiInitializePfn.c)
 *     MiCombineInitialInstance @ 0x14029CD58 (MiCombineInitialInstance.c)
 *     MiUnlockNestedProtoPoolPage @ 0x14029ECE8 (MiUnlockNestedProtoPoolPage.c)
 *     MiHandleCollidedFault @ 0x1402A2AC4 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402A2D3C (MiWaitForCollidedFaultComplete.c)
 *     MiObtainProtoReference @ 0x1402A304C (MiObtainProtoReference.c)
 *     MiReplaceTransitionPage @ 0x1402C6784 (MiReplaceTransitionPage.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x1402DC734 (MiRewriteTrimPteAsDemandZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402DD950 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiLockLeafPage @ 0x14034AF20 (MiLockLeafPage.c)
 *     MiDeleteClusterSection @ 0x14034B3A4 (MiDeleteClusterSection.c)
 *     MiGetBaseResidentPage @ 0x140350A30 (MiGetBaseResidentPage.c)
 *     MiRestoreTransitionPte @ 0x14036A9C4 (MiRestoreTransitionPte.c)
 *     MiReplacePageTablePage @ 0x14039164C (MiReplacePageTablePage.c)
 *     MiSwapStackPage @ 0x14039604C (MiSwapStackPage.c)
 *     MiSwapStackPageNoDpc @ 0x1403963DC (MiSwapStackPageNoDpc.c)
 *     MiStealPage @ 0x1403B70BC (MiStealPage.c)
 *     MiDemoteSlabEntry @ 0x1403C826C (MiDemoteSlabEntry.c)
 *     MiReplacePageOfProtoPool @ 0x14061B5A0 (MiReplacePageOfProtoPool.c)
 *     MiStackTheftFreezeProcessors @ 0x14062AF0C (MiStackTheftFreezeProcessors.c)
 *     MiBuildReservationCluster @ 0x140635ED4 (MiBuildReservationCluster.c)
 *     MiSplitDirectMapPage @ 0x14063CE6C (MiSplitDirectMapPage.c)
 *     MiClearDriverHotPatchPtes @ 0x14063F9FC (MiClearDriverHotPatchPtes.c)
 *     MmMapHotPatchTablePage @ 0x140640C8C (MmMapHotPatchTablePage.c)
 *     MiRepointPteAtExtendedStandby @ 0x14064F5DC (MiRepointPteAtExtendedStandby.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x14065DE28 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiDuplicateCloneLeaf @ 0x140661AA8 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x140662368 (MiHandleForkTransitionPte.c)
 *     MiSwapHardFaultPage @ 0x14066A398 (MiSwapHardFaultPage.c)
 *     MiTradeBootImagePage @ 0x140B3BE4C (MiTradeBootImagePage.c)
 *     MxSwapPages @ 0x140B50198 (MxSwapPages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiLockNestedPageAtDpcInline(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      KeYieldProcessorEx(&v3);
      result = *(_QWORD *)(a1 + 24);
    }
    while ( result < 0 );
  }
  return result;
}
