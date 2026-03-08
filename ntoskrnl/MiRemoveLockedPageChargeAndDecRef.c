/*
 * XREFs of MiRemoveLockedPageChargeAndDecRef @ 0x140286264
 * Callers:
 *     MiInitializeImageProtos @ 0x140213DD0 (MiInitializeImageProtos.c)
 *     MmCopyToCachedPage @ 0x14021DBE0 (MmCopyToCachedPage.c)
 *     MiProbeLockFrame @ 0x140268ED0 (MiProbeLockFrame.c)
 *     MiResolveDemandZeroFault @ 0x14026B720 (MiResolveDemandZeroFault.c)
 *     MiResolveProtoPteFault @ 0x140270A50 (MiResolveProtoPteFault.c)
 *     MiMigratePfn @ 0x140272370 (MiMigratePfn.c)
 *     MiFinishHardFault @ 0x140284200 (MiFinishHardFault.c)
 *     MiHardFaultPageRelease @ 0x140287C78 (MiHardFaultPageRelease.c)
 *     MiFinishMdlForMappedFileFault @ 0x14028BD60 (MiFinishMdlForMappedFileFault.c)
 *     MiUnlockNestedProtoPoolPage @ 0x14029ECE8 (MiUnlockNestedProtoPoolPage.c)
 *     MiPrivateFixup @ 0x1402A180C (MiPrivateFixup.c)
 *     MiHandleCollidedFault @ 0x1402A2AC4 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402A2D3C (MiWaitForCollidedFaultComplete.c)
 *     MiLockProtoPage @ 0x1402A4008 (MiLockProtoPage.c)
 *     MiUnlockCodePage @ 0x1402A441C (MiUnlockCodePage.c)
 *     MiMakeDriverPagesPrivate @ 0x1402A6440 (MiMakeDriverPagesPrivate.c)
 *     MiFinalizeImageHeaderPage @ 0x1402C6548 (MiFinalizeImageHeaderPage.c)
 *     MiMakeFaultPfnActive @ 0x1402CD4A0 (MiMakeFaultPfnActive.c)
 *     MiDeletePerSessionProtos @ 0x1402CF6DC (MiDeletePerSessionProtos.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1402E1B88 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiReturnPfnReferenceCount @ 0x1402EDD4C (MiReturnPfnReferenceCount.c)
 *     MiUnlockPagedAddress @ 0x1402EE5C4 (MiUnlockPagedAddress.c)
 *     MiDoubleUnlockMdlPage @ 0x1402FFE30 (MiDoubleUnlockMdlPage.c)
 *     MiSwapStackPage @ 0x14039604C (MiSwapStackPage.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1403A4834 (MmDbgMarkPfnModifiedWorker.c)
 *     MiMirrorPerformBrownWrites @ 0x1406251F8 (MiMirrorPerformBrownWrites.c)
 *     MiJumpStackTarget @ 0x14062AB70 (MiJumpStackTarget.c)
 *     MiBuildReservationCluster @ 0x140635ED4 (MiBuildReservationCluster.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x140639EB8 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiFinishLastForkPageTable @ 0x140661F1C (MiFinishLastForkPageTable.c)
 *     MiLockDownWorkingSet @ 0x140662BB0 (MiLockDownWorkingSet.c)
 *     MiIdealClusterPage @ 0x140667EB0 (MiIdealClusterPage.c)
 * Callees:
 *     MiRemoveLockedPageCharge @ 0x140286E00 (MiRemoveLockedPageCharge.c)
 *     MiPfnReferenceCountIsZero @ 0x1402879C0 (MiPfnReferenceCountIsZero.c)
 */

__int64 __fastcall MiRemoveLockedPageChargeAndDecRef(__int64 a1)
{
  __int64 result; // rax

  result = MiRemoveLockedPageCharge(a1);
  if ( (_DWORD)result )
  {
    MiPfnReferenceCountIsZero(a1, 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4));
    return 1LL;
  }
  return result;
}
