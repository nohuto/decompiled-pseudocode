/*
 * XREFs of MiRemoveLockedPageChargeAndDecRef @ 0x1402DAF84
 * Callers:
 *     MiReturnPfnReferenceCount @ 0x14020DC60 (MiReturnPfnReferenceCount.c)
 *     MiInitializeImageProtos @ 0x14021A220 (MiInitializeImageProtos.c)
 *     MiProbeLockFrame @ 0x1402364E0 (MiProbeLockFrame.c)
 *     MiMigratePfn @ 0x140262FC0 (MiMigratePfn.c)
 *     MiResolveProtoPteFault @ 0x140267DB0 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140269C20 (MiResolveDemandZeroFault.c)
 *     MiMakeDriverPagesPrivate @ 0x140291930 (MiMakeDriverPagesPrivate.c)
 *     MmCopyToCachedPage @ 0x1402CD7D0 (MmCopyToCachedPage.c)
 *     MiFinishHardFault @ 0x1402D9300 (MiFinishHardFault.c)
 *     MiFinishMdlForMappedFileFault @ 0x1402E1B40 (MiFinishMdlForMappedFileFault.c)
 *     MiPrivateFixup @ 0x1402ED678 (MiPrivateFixup.c)
 *     MiHandleCollidedFault @ 0x1402EED90 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402EF008 (MiWaitForCollidedFaultComplete.c)
 *     MiLockProtoPage @ 0x1402F22BC (MiLockProtoPage.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140324C6C (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiFinalizeImageHeaderPage @ 0x140330294 (MiFinalizeImageHeaderPage.c)
 *     MiHardFaultPageRelease @ 0x140334C08 (MiHardFaultPageRelease.c)
 *     MiMakeFaultPfnActive @ 0x140334D40 (MiMakeFaultPfnActive.c)
 *     MiDeletePerSessionProtos @ 0x14033E9C4 (MiDeletePerSessionProtos.c)
 *     MiUnlockNestedProtoPoolPage @ 0x14035A01C (MiUnlockNestedProtoPoolPage.c)
 *     MiUnlockPagedAddress @ 0x14035AC54 (MiUnlockPagedAddress.c)
 *     MiUnlockCodePage @ 0x140367338 (MiUnlockCodePage.c)
 *     MiDoubleUnlockMdlPage @ 0x14036AF30 (MiDoubleUnlockMdlPage.c)
 *     MiSwapStackPage @ 0x140399C4C (MiSwapStackPage.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1403A9644 (MmDbgMarkPfnModifiedWorker.c)
 *     MiMirrorPerformBrownWrites @ 0x140627698 (MiMirrorPerformBrownWrites.c)
 *     MiJumpStackTarget @ 0x14062CFF0 (MiJumpStackTarget.c)
 *     MiBuildReservationCluster @ 0x140638354 (MiBuildReservationCluster.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14063C334 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiFinishLastForkPageTable @ 0x14066456C (MiFinishLastForkPageTable.c)
 *     MiLockDownWorkingSet @ 0x140665200 (MiLockDownWorkingSet.c)
 *     MiIdealClusterPage @ 0x14066A500 (MiIdealClusterPage.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1402D8FE0 (MiPfnReferenceCountIsZero.c)
 *     MiRemoveLockedPageCharge @ 0x1402DBB20 (MiRemoveLockedPageCharge.c)
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
