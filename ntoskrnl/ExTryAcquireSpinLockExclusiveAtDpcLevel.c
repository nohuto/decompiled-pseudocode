/*
 * XREFs of ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140305AB0
 * Callers:
 *     MiLockPageTableInternal @ 0x14026A0D0 (MiLockPageTableInternal.c)
 *     MiGetPerfectColorHeadPage @ 0x140270750 (MiGetPerfectColorHeadPage.c)
 *     MiCanFileBeTruncatedInternal @ 0x1402A492C (MiCanFileBeTruncatedInternal.c)
 *     MmFlushImageSection @ 0x1402E1460 (MmFlushImageSection.c)
 *     PopPepWork @ 0x140305714 (PopPepWork.c)
 *     MiSynchronizeFastPageInsert @ 0x140319210 (MiSynchronizeFastPageInsert.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x140330F30 (MmDoesFileHaveUserWritableReferences.c)
 *     MiComputeFlushRange @ 0x140331078 (MiComputeFlushRange.c)
 *     MiReferenceControlArea @ 0x140331908 (MiReferenceControlArea.c)
 *     MiCopyDataPageToImagePage @ 0x140334490 (MiCopyDataPageToImagePage.c)
 *     MiLockSectionControlArea @ 0x1403638A8 (MiLockSectionControlArea.c)
 *     MiDeleteEmptySubsections @ 0x14036AC38 (MiDeleteEmptySubsections.c)
 *     CcBcbProfiler @ 0x1403DD7C0 (CcBcbProfiler.c)
 *     PspIumReplenishPartitionPages @ 0x1405A3DE0 (PspIumReplenishPartitionPages.c)
 *     MiDeleteCachedSegment @ 0x140621514 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140621708 (MiDeleteCachedSubsection.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x140622788 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x1406229CC (MiProcessDeleteOnClose.c)
 *     MiProcessDereferenceList @ 0x140622C74 (MiProcessDereferenceList.c)
 *     MiFreezeIoPfnNode @ 0x14062BCF8 (MiFreezeIoPfnNode.c)
 *     MiDbgMarkPfnModified @ 0x1406417E0 (MiDbgMarkPfnModified.c)
 *     MiReferencePfBackedSection @ 0x140667510 (MiReferencePfBackedSection.c)
 *     sub_14067C010 @ 0x14067C010 (sub_14067C010.c)
 *     KiForceSymbolReferences @ 0x140B92408 (KiForceSymbolReferences.c)
 * Callees:
 *     TRY_ACQUIRE_EXLOCK_EXCLUSIVE @ 0x140305AD8 (TRY_ACQUIRE_EXLOCK_EXCLUSIVE.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140463056 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 ExTryAcquireSpinLockExclusiveAtDpcLevel()
{
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented();
  else
    return TRY_ACQUIRE_EXLOCK_EXCLUSIVE();
}
