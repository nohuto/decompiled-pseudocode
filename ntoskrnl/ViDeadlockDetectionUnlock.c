/*
 * XREFs of ViDeadlockDetectionUnlock @ 0x140AD5E10
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x1405CF408 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x1405CF568 (ViDeadlockRemoveMemoryRangeThreads.c)
 *     VfDeadlockAcquireResource @ 0x140AD3DAC (VfDeadlockAcquireResource.c)
 *     VfDeadlockInitializeResource @ 0x140AD4738 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x140AD4ECC (VfDeadlockReleaseResource.c)
 *     ViDeadlockDetectionApplySettings @ 0x140AD5D8C (ViDeadlockDetectionApplySettings.c)
 *     ViDeadlockEmptyDatabase @ 0x140AD5E40 (ViDeadlockEmptyDatabase.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x140AD6FA0 (ViIsThreadInsidePagingCodePaths.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
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
