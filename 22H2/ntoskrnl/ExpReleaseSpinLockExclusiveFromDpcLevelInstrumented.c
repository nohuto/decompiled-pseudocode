/*
 * XREFs of ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14060B12C
 * Callers:
 *     ExInitializeResourceLite @ 0x140207480 (ExInitializeResourceLite.c)
 *     MiIdentifyPfn @ 0x14023E4A0 (MiIdentifyPfn.c)
 *     RtlpHpVsChunkSplit @ 0x14024A460 (RtlpHpVsChunkSplit.c)
 *     RtlpHpSegPageRangeAllocate @ 0x14024DCD0 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeShrink @ 0x14024E6A0 (RtlpHpSegPageRangeShrink.c)
 *     PsImpersonateContainerOfThread @ 0x140259DC0 (PsImpersonateContainerOfThread.c)
 *     MiEmptyDecayClusterTimers @ 0x14025AE00 (MiEmptyDecayClusterTimers.c)
 *     MiReferenceControlAreaPfn @ 0x14025B200 (MiReferenceControlAreaPfn.c)
 *     MiComputeAgingAmount @ 0x14025BA00 (MiComputeAgingAmount.c)
 *     MiAgePte @ 0x14027BC40 (MiAgePte.c)
 *     MiLogPageAccess @ 0x14027CA90 (MiLogPageAccess.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x1402877C0 (MmDoesFileHaveUserWritableReferences.c)
 *     MiAddViewsForSection @ 0x140288650 (MiAddViewsForSection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x140289AC0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A1D0 (MiUnlockWorkingSetExclusive.c)
 *     MiCheckControlArea @ 0x14029FAA0 (MiCheckControlArea.c)
 *     ExDeleteResourceLite @ 0x1402A8CA0 (ExDeleteResourceLite.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A9090 (NtWaitForWorkViaWorkerFactory.c)
 *     MiMakePageAvoidRead @ 0x1402CE000 (MiMakePageAvoidRead.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402D1E90 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertLargePageInNodeList @ 0x1402D6BE0 (MiInsertLargePageInNodeList.c)
 *     MiGetLargePage @ 0x1402D7A80 (MiGetLargePage.c)
 *     MiReleaseLargePageAllocationLocks @ 0x1402D8200 (MiReleaseLargePageAllocationLocks.c)
 *     MiPfPutPagesInTransition @ 0x1402DE040 (MiPfPutPagesInTransition.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x140337120 (RtlpHpVsSubsegmentCommitPages.c)
 *     ExReleaseSpinLockExclusive @ 0x140337EC0 (ExReleaseSpinLockExclusive.c)
 *     MiDereferenceControlAreaPfnList @ 0x1403399D0 (MiDereferenceControlAreaPfnList.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x140600DE8 (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(_DWORD *a1, __int64 a2)
{
  *a1 = 0;
  return PerfLogSpinLockRelease((__int64)a1, a2, __rdtsc());
}
