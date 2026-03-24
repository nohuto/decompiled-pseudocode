/*
 * XREFs of MiLockNestedPageAtDpcInline @ 0x140333FA0
 * Callers:
 *     MiMigratePfn @ 0x1402185B0 (MiMigratePfn.c)
 *     MiDeleteBatch @ 0x140237DC0 (MiDeleteBatch.c)
 *     MiAllocateKernelStackPages @ 0x14023E170 (MiAllocateKernelStackPages.c)
 *     MiDeleteClusterSection @ 0x140280A60 (MiDeleteClusterSection.c)
 *     MiObtainProtoReference @ 0x14029A69C (MiObtainProtoReference.c)
 *     MiHandleCollidedFault @ 0x1402E1E9C (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402E2190 (MiWaitForCollidedFaultComplete.c)
 *     MiRestoreTransitionPte @ 0x1402FB620 (MiRestoreTransitionPte.c)
 *     MiTradeActivePage @ 0x14030DD40 (MiTradeActivePage.c)
 *     MiSwapStackPage @ 0x14031F4BC (MiSwapStackPage.c)
 *     MiSwapStackPageNoDpc @ 0x14031FC90 (MiSwapStackPageNoDpc.c)
 *     MiUnlockNestedProtoPoolPage @ 0x14032161C (MiUnlockNestedProtoPoolPage.c)
 *     MiReplacePageOfProtoPool @ 0x140331F6C (MiReplacePageOfProtoPool.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403326D0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiLockLeafPage @ 0x140332CE0 (MiLockLeafPage.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140332EB8 (MiRewriteTrimPteAsDemandZero.c)
 *     MiStealPage @ 0x140334CB4 (MiStealPage.c)
 *     MiReplaceTransitionPage @ 0x140336380 (MiReplaceTransitionPage.c)
 *     MiInitializeTransitionPfn @ 0x14033723C (MiInitializeTransitionPfn.c)
 *     MiReplacePageTablePage @ 0x1403634C0 (MiReplacePageTablePage.c)
 *     MiConvertStandbyToProto @ 0x1403668C8 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x1403699A0 (MiConvertPrivateToProto.c)
 *     MiBuildReservationCluster @ 0x1403866F0 (MiBuildReservationCluster.c)
 *     MiGetBaseResidentPage @ 0x1403F5DB4 (MiGetBaseResidentPage.c)
 *     MiStackTheftFreezeProcessors @ 0x14053626C (MiStackTheftFreezeProcessors.c)
 *     MiClearDriverHotPatchPtes @ 0x14053E368 (MiClearDriverHotPatchPtes.c)
 *     MmMapHotPatchTablePage @ 0x14053F3F0 (MmMapHotPatchTablePage.c)
 *     MiSplitDirectMapPage @ 0x14054207C (MiSplitDirectMapPage.c)
 *     MiDuplicateCloneLeaf @ 0x14055A174 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x14055A9A4 (MiHandleForkTransitionPte.c)
 *     MiSwapHardFaultPage @ 0x1405636B0 (MiSwapHardFaultPage.c)
 *     MiTradeBootImagePage @ 0x140A4FE60 (MiTradeBootImagePage.c)
 *     MxSwapPages @ 0x140A57120 (MxSwapPages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiLockNestedPageAtDpcInline(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      KeYieldProcessorEx(&v6, a2, a3, a4);
      result = *(_QWORD *)(a1 + 24);
    }
    while ( result < 0 );
  }
  return result;
}
