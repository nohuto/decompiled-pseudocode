/*
 * XREFs of ViDeadlockDetectionUnlock @ 0x140A994FC
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x1406015D4 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x140601734 (ViDeadlockRemoveMemoryRangeThreads.c)
 *     VfDeadlockAcquireResource @ 0x140A97900 (VfDeadlockAcquireResource.c)
 *     VfDeadlockAfterCallDriver @ 0x140A97FF4 (VfDeadlockAfterCallDriver.c)
 *     VfDeadlockBeforeCallDriver @ 0x140A98064 (VfDeadlockBeforeCallDriver.c)
 *     VfDeadlockInitializeResource @ 0x140A98420 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x140A985B4 (VfDeadlockReleaseResource.c)
 *     ViDeadlockDetectionApplySettings @ 0x140A99478 (ViDeadlockDetectionApplySettings.c)
 *     ViDeadlockEmptyDatabase @ 0x140A9952C (ViDeadlockEmptyDatabase.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x140A9A170 (ViIsThreadInsidePagingCodePaths.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

void __fastcall ViDeadlockDetectionUnlock(int a1)
{
  if ( a1 )
  {
    ViDeadlockDatabaseOwner = 0LL;
    ExReleaseSpinLockExclusiveFromDpcLevel(&ViDeadlockDatabaseLock);
  }
  else
  {
    ExReleaseSpinLockSharedFromDpcLevel(&ViDeadlockDatabaseLock);
  }
}
