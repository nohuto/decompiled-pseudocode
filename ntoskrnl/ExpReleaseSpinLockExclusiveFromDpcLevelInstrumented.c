/*
 * XREFs of ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140608CDC
 * Callers:
 *     MiComputeAgingAmount @ 0x140224C50 (MiComputeAgingAmount.c)
 *     MiReferenceControlAreaPfn @ 0x140224DA0 (MiReferenceControlAreaPfn.c)
 *     MiEmptyDecayClusterTimers @ 0x140224EE0 (MiEmptyDecayClusterTimers.c)
 *     PsImpersonateContainerOfThread @ 0x140225F60 (PsImpersonateContainerOfThread.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1402493A0 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpVsChunkSplit @ 0x14024AB60 (RtlpHpVsChunkSplit.c)
 *     RtlpHpSegPageRangeShrink @ 0x14024DB00 (RtlpHpSegPageRangeShrink.c)
 *     MiIdentifyPfn @ 0x14025E5D0 (MiIdentifyPfn.c)
 *     MiMakePageAvoidRead @ 0x140272670 (MiMakePageAvoidRead.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140276500 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPfPutPagesInTransition @ 0x140288890 (MiPfPutPagesInTransition.c)
 *     MiUnlockWorkingSetExclusive @ 0x140289BA0 (MiUnlockWorkingSetExclusive.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x1402CB850 (RtlpHpVsSubsegmentCommitPages.c)
 *     ExReleaseSpinLockExclusive @ 0x1402CC9C0 (ExReleaseSpinLockExclusive.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1402CD080 (RtlpHpReleaseQueuedLockExclusive.c)
 *     MiDereferenceControlAreaPfnList @ 0x1402CFBF0 (MiDereferenceControlAreaPfnList.c)
 *     ExInitializeResourceLite @ 0x14030FAB0 (ExInitializeResourceLite.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140316BE0 (NtWaitForWorkViaWorkerFactory.c)
 *     MiInsertLargePageInNodeList @ 0x14031C970 (MiInsertLargePageInNodeList.c)
 *     MiAgePte @ 0x1403260A0 (MiAgePte.c)
 *     MiLogPageAccess @ 0x140326EF0 (MiLogPageAccess.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x140330F30 (MmDoesFileHaveUserWritableReferences.c)
 *     MiAddViewsForSection @ 0x140331DC0 (MiAddViewsForSection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiCheckControlArea @ 0x140334D00 (MiCheckControlArea.c)
 *     ExDeleteResourceLite @ 0x140336580 (ExDeleteResourceLite.c)
 *     MiGetLargePage @ 0x14034EF30 (MiGetLargePage.c)
 *     MiReleaseLargePageAllocationLocks @ 0x14034F6B0 (MiReleaseLargePageAllocationLocks.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x1405FE984 (PerfLogSpinLockRelease.c)
 */

void __fastcall ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(_DWORD *a1, __int64 a2)
{
  *a1 = 0;
  PerfLogSpinLockRelease((__int64)a1, a2, __rdtsc());
}
