/*
 * XREFs of ViDeadlockDetectionTryConvertSharedToExclusive @ 0x1406015A4
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x1406015D4 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x140601734 (ViDeadlockRemoveMemoryRangeThreads.c)
 *     VfDeadlockBeforeCallDriver @ 0x140A98064 (VfDeadlockBeforeCallDriver.c)
 * Callees:
 *     ExTryConvertSharedSpinLockExclusive @ 0x1402169E0 (ExTryConvertSharedSpinLockExclusive.c)
 */

LOGICAL ViDeadlockDetectionTryConvertSharedToExclusive()
{
  LOGICAL result; // eax

  result = ExTryConvertSharedSpinLockExclusive(&ViDeadlockDatabaseLock);
  if ( result )
    ViDeadlockDatabaseOwner = (__int64)KeGetCurrentThread();
  return result;
}
