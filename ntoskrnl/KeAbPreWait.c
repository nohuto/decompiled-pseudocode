/*
 * XREFs of KeAbPreWait @ 0x140241620
 * Callers:
 *     ExpAcquireFastMutexContended @ 0x1402410FC (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KiWaitForAllObjects @ 0x1402936D0 (KiWaitForAllObjects.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402A2D3C (MiWaitForCollidedFaultComplete.c)
 *     MiLockControlAreaSectionExtend @ 0x1402A4EFC (MiLockControlAreaSectionExtend.c)
 *     MiReferenceControlArea @ 0x140331908 (MiReferenceControlArea.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KeWaitForMultipleObjects @ 0x1403516C0 (KeWaitForMultipleObjects.c)
 *     ExAcquireFastResourceShared @ 0x1403C3C70 (ExAcquireFastResourceShared.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x1403C43D0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x1403C48B0 (ExAcquireFastResourceExclusive.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x14040F2AC (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x14040F630 (ExpAcquireFastResourceSharedSlow.c)
 *     MiChangingSubsectionProtos @ 0x1406399E8 (MiChangingSubsectionProtos.c)
 *     MiWaitForExtentDeletions @ 0x14063DE84 (MiWaitForExtentDeletions.c)
 *     PfpPrefetchSharedConflictNotifyStart @ 0x14067FBA0 (PfpPrefetchSharedConflictNotifyStart.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406B5654 (IopWaitAndAcquireFileObjectLock.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14085C738 (CmpWaitOnHiveWriteQueue.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140A70420 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14024BC30 (KiAbEntryRemoveFromTree.c)
 */

char __fastcall KeAbPreWait(__int64 *a1)
{
  char result; // al

  *(_BYTE *)a1 |= 2u;
  if ( *a1 < 0 )
    KiAbEntryRemoveFromTree(a1);
  *((_BYTE *)a1 + 17) = 1;
  result = *(_BYTE *)a1 & 0xFD;
  *(_BYTE *)a1 = result;
  return result;
}
