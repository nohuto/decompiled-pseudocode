/*
 * XREFs of PsDereferencePartition @ 0x140295BF8
 * Callers:
 *     MmQueryMemoryListInformation @ 0x140236738 (MmQueryMemoryListInformation.c)
 *     MiZeroInParallel @ 0x140242EB8 (MiZeroInParallel.c)
 *     MiZeroInParallelWorker @ 0x140275970 (MiZeroInParallelWorker.c)
 *     EtwpClearPartitionContext @ 0x14028DAAC (EtwpClearPartitionContext.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x1402B39C0 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     CcGetPartitionWithCreate @ 0x1402E20D0 (CcGetPartitionWithCreate.c)
 *     PsGetNextPartition @ 0x1402FF5F0 (PsGetNextPartition.c)
 *     MiQueryAddressState @ 0x14031B4F0 (MiQueryAddressState.c)
 *     MiCommitExistingVad @ 0x140320D70 (MiCommitExistingVad.c)
 *     MmAllocateContiguousMemoryEx @ 0x14038D1E0 (MmAllocateContiguousMemoryEx.c)
 *     PsQuitNextPartition @ 0x1405A4180 (PsQuitNextPartition.c)
 *     EtwpSetPartitionContext @ 0x1405FF3A0 (EtwpSetPartitionContext.c)
 *     MmGetNodeFastLargePageCounts @ 0x1406154C4 (MmGetNodeFastLargePageCounts.c)
 *     MiZeroHugeRangeWorker @ 0x140620990 (MiZeroHugeRangeWorker.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1406291A0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiObtainFreePages @ 0x140632B0C (MiObtainFreePages.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1406392E0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiRebalanceZeroFreeLists @ 0x14064F140 (MiRebalanceZeroFreeLists.c)
 *     MiContractWsSwapPageFileWorker @ 0x140650250 (MiContractWsSwapPageFileWorker.c)
 *     MmAllocateNonChargedSecurePages @ 0x140654ECC (MmAllocateNonChargedSecurePages.c)
 *     MmAllocateSecureKernelPages @ 0x1406551DC (MmAllocateSecureKernelPages.c)
 *     MmFreeNonChargedSecurePages @ 0x1406556E8 (MmFreeNonChargedSecurePages.c)
 *     MiRebuildLargePages @ 0x14065B810 (MiRebuildLargePages.c)
 *     PspClosePartitionHandle @ 0x14067FFE0 (PspClosePartitionHandle.c)
 *     PspProcessDelete @ 0x140704DD0 (PspProcessDelete.c)
 *     NtManagePartition @ 0x140705650 (NtManagePartition.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14072665C (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiAllocateVirtualMemoryCommon @ 0x1407C4A70 (MiAllocateVirtualMemoryCommon.c)
 *     MmQueryVirtualMemory @ 0x1407C6390 (MmQueryVirtualMemory.c)
 *     MiCreateSection @ 0x1407D05D0 (MiCreateSection.c)
 *     MiInitializeCreateSectionPacket @ 0x1407D0AE0 (MiInitializeCreateSectionPacket.c)
 *     SmFirstTimeInit @ 0x1407DDCE0 (SmFirstTimeInit.c)
 *     MmGetPhysicalMemoryRangesEx2 @ 0x1408362B0 (MmGetPhysicalMemoryRangesEx2.c)
 *     SmProcessCompressionInfoRequest @ 0x140840C00 (SmProcessCompressionInfoRequest.c)
 *     PsCreatePartition @ 0x140855A0C (PsCreatePartition.c)
 *     PspAllocatePartition @ 0x140855B00 (PspAllocatePartition.c)
 *     SmProcessConfigRequest @ 0x1408582AC (SmProcessConfigRequest.c)
 *     MmQueryMemoryRanges @ 0x140859AF0 (MmQueryMemoryRanges.c)
 *     MmGetPageFileInformation @ 0x140872420 (MmGetPageFileInformation.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140944B5C (IopSetFileMemoryPartitionInformation.c)
 *     PspSetJobMemoryPartition @ 0x1409AFC84 (PspSetJobMemoryPartition.c)
 *     PspTeardownPartition @ 0x1409B3730 (PspTeardownPartition.c)
 *     SmProcessListRequest @ 0x1409D3FBC (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x1409D4588 (SmProcessStatsRequest.c)
 *     SmProcessSystemStoreTrimRequest @ 0x1409D489C (SmProcessSystemStoreTrimRequest.c)
 *     MmRemovePhysicalMemory @ 0x140A2A520 (MmRemovePhysicalMemory.c)
 *     MiZeroHugeRangeCore @ 0x140A2B20C (MiZeroHugeRangeCore.c)
 *     MmAllocateMemoryRanges @ 0x140A2B5D0 (MmAllocateMemoryRanges.c)
 *     MmIdentifyPhysicalMemory @ 0x140A2C028 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x140A2FF20 (MiScanPagefileSpace.c)
 *     MmBuildLargePages @ 0x140A43304 (MmBuildLargePages.c)
 *     MiAddSpecialPurposeMemoryCleanup @ 0x140A44064 (MiAddSpecialPurposeMemoryCleanup.c)
 *     MiCreatePagefileMemoryExtents @ 0x140A44298 (MiCreatePagefileMemoryExtents.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x140A445E8 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x140A4470C (MiInitializePartitionSpecialPurposeMemory.c)
 *     MiOpenSpecialPurposeMemory @ 0x140A44A2C (MiOpenSpecialPurposeMemory.c)
 *     MiSpecialPurposeMemoryRemoved @ 0x140A44BE4 (MiSpecialPurposeMemoryRemoved.c)
 *     MiUpdateSpecialPurposeMemoryCacheEligibility @ 0x140A44D34 (MiUpdateSpecialPurposeMemoryCacheEligibility.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 */

void __fastcall PsDereferencePartition(__int64 a1)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax
  struct _WORK_QUEUE_ITEM *v5; // rcx

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 32), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    v5 = (struct _WORK_QUEUE_ITEM *)(a1 + 72);
    v5->Parameter = (void *)a1;
    v5->List.Flink = 0LL;
    v5->WorkerRoutine = (void (__fastcall *)(void *))PspTeardownPartition;
    ExQueueWorkItem(v5, DelayedWorkQueue);
  }
}
