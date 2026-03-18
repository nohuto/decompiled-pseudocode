/*
 * XREFs of ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140312010
 * Callers:
 *     MiLockSectionControlArea @ 0x1402100E8 (MiLockSectionControlArea.c)
 *     MiLockPageTableInternal @ 0x1402376E0 (MiLockPageTableInternal.c)
 *     MiGetPerfectColorHeadPage @ 0x14026DAF0 (MiGetPerfectColorHeadPage.c)
 *     MiSynchronizeFastPageInsert @ 0x14026DDF0 (MiSynchronizeFastPageInsert.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x1402877C0 (MmDoesFileHaveUserWritableReferences.c)
 *     MiComputeFlushRange @ 0x140287908 (MiComputeFlushRange.c)
 *     MiReferenceControlArea @ 0x140288198 (MiReferenceControlArea.c)
 *     MiCopyDataPageToImagePage @ 0x14028B350 (MiCopyDataPageToImagePage.c)
 *     MiCanFileBeTruncatedInternal @ 0x14028B880 (MiCanFileBeTruncatedInternal.c)
 *     PopPepWork @ 0x140311C7C (PopPepWork.c)
 *     MmFlushImageSection @ 0x14034DE00 (MmFlushImageSection.c)
 *     MiDeleteEmptySubsections @ 0x140361418 (MiDeleteEmptySubsections.c)
 *     CcBcbProfiler @ 0x1403E2CE0 (CcBcbProfiler.c)
 *     PspIumReplenishPartitionPages @ 0x1405A6290 (PspIumReplenishPartitionPages.c)
 *     MiDeleteCachedSegment @ 0x1406239C4 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140623BB8 (MiDeleteCachedSubsection.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x140624C38 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x140624E7C (MiProcessDeleteOnClose.c)
 *     MiProcessDereferenceList @ 0x140625124 (MiProcessDereferenceList.c)
 *     MiFreezeIoPfnNode @ 0x14062E178 (MiFreezeIoPfnNode.c)
 *     MiDbgMarkPfnModified @ 0x140643C40 (MiDbgMarkPfnModified.c)
 *     MiReferencePfBackedSection @ 0x140669B60 (MiReferencePfBackedSection.c)
 *     sub_14067E010 @ 0x14067E010 (sub_14067E010.c)
 *     KiForceSymbolReferences @ 0x140B96628 (KiForceSymbolReferences.c)
 * Callees:
 *     TRY_ACQUIRE_EXLOCK_EXCLUSIVE @ 0x140312038 (TRY_ACQUIRE_EXLOCK_EXCLUSIVE.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14046AF56 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 ExTryAcquireSpinLockExclusiveAtDpcLevel()
{
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented();
  else
    return TRY_ACQUIRE_EXLOCK_EXCLUSIVE();
}
