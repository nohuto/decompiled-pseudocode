/*
 * XREFs of PsDereferencePartition @ 0x1402F9C4C
 * Callers:
 *     MiQueryAddressState @ 0x140271AE0 (MiQueryAddressState.c)
 *     MiCommitExistingVad @ 0x140276910 (MiCommitExistingVad.c)
 *     MiZeroInParallelWorker @ 0x1402D1300 (MiZeroInParallelWorker.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x1402F87A0 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmQueryMemoryListInformation @ 0x1402F8958 (MmQueryMemoryListInformation.c)
 *     MiZeroInParallel @ 0x140304230 (MiZeroInParallel.c)
 *     EtwpClearPartitionContext @ 0x14031EE44 (EtwpClearPartitionContext.c)
 *     CcGetPartitionWithCreate @ 0x14034E6F4 (CcGetPartitionWithCreate.c)
 *     PsGetNextPartition @ 0x14036A720 (PsGetNextPartition.c)
 *     MmAllocateContiguousMemoryEx @ 0x14038F6A0 (MmAllocateContiguousMemoryEx.c)
 *     PsQuitNextPartition @ 0x1405A6630 (PsQuitNextPartition.c)
 *     EtwpSetPartitionContext @ 0x140601804 (EtwpSetPartitionContext.c)
 *     MmGetNodeFastLargePageCounts @ 0x140617974 (MmGetNodeFastLargePageCounts.c)
 *     MiZeroHugeRangeWorker @ 0x140622E40 (MiZeroHugeRangeWorker.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14062B620 (MmMarkPhysicalMemoryAsBad.c)
 *     MiObtainFreePages @ 0x140634F9C (MiObtainFreePages.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14063B760 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiRebalanceZeroFreeLists @ 0x1406517A0 (MiRebalanceZeroFreeLists.c)
 *     MiContractWsSwapPageFileWorker @ 0x1406528B0 (MiContractWsSwapPageFileWorker.c)
 *     MmAllocateNonChargedSecurePages @ 0x14065750C (MmAllocateNonChargedSecurePages.c)
 *     MmAllocateSecureKernelPages @ 0x14065781C (MmAllocateSecureKernelPages.c)
 *     MmFreeNonChargedSecurePages @ 0x140657D28 (MmFreeNonChargedSecurePages.c)
 *     MiRebuildLargePages @ 0x14065DE60 (MiRebuildLargePages.c)
 *     PspClosePartitionHandle @ 0x1406833C0 (PspClosePartitionHandle.c)
 *     MiAllocateVirtualMemoryCommon @ 0x1406F6AD0 (MiAllocateVirtualMemoryCommon.c)
 *     MmQueryVirtualMemory @ 0x1406F8400 (MmQueryVirtualMemory.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x140706D8C (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiCreateSection @ 0x140722B70 (MiCreateSection.c)
 *     MiInitializeCreateSectionPacket @ 0x140723080 (MiInitializeCreateSectionPacket.c)
 *     NtManagePartition @ 0x140760280 (NtManagePartition.c)
 *     PspProcessDelete @ 0x1407615C0 (PspProcessDelete.c)
 *     SmFirstTimeInit @ 0x1407B82C4 (SmFirstTimeInit.c)
 *     MmGetPhysicalMemoryRangesEx2 @ 0x140835F60 (MmGetPhysicalMemoryRangesEx2.c)
 *     SmProcessCompressionInfoRequest @ 0x140843254 (SmProcessCompressionInfoRequest.c)
 *     PsCreatePartition @ 0x140859F8C (PsCreatePartition.c)
 *     PspAllocatePartition @ 0x14085A080 (PspAllocatePartition.c)
 *     SmProcessConfigRequest @ 0x14085C000 (SmProcessConfigRequest.c)
 *     MmQueryMemoryRanges @ 0x14085D9E0 (MmQueryMemoryRanges.c)
 *     MmGetPageFileInformation @ 0x1408752E0 (MmGetPageFileInformation.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140947B7C (IopSetFileMemoryPartitionInformation.c)
 *     PspSetJobMemoryPartition @ 0x1409B2CD4 (PspSetJobMemoryPartition.c)
 *     PspTeardownPartition @ 0x1409B6760 (PspTeardownPartition.c)
 *     SmProcessListRequest @ 0x1409D6E5C (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x1409D7428 (SmProcessStatsRequest.c)
 *     SmProcessSystemStoreTrimRequest @ 0x1409D773C (SmProcessSystemStoreTrimRequest.c)
 *     MmRemovePhysicalMemory @ 0x140A2D280 (MmRemovePhysicalMemory.c)
 *     MiZeroHugeRangeCore @ 0x140A2DF6C (MiZeroHugeRangeCore.c)
 *     MmAllocateMemoryRanges @ 0x140A2E330 (MmAllocateMemoryRanges.c)
 *     MmIdentifyPhysicalMemory @ 0x140A2ED78 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x140A32C50 (MiScanPagefileSpace.c)
 *     MmBuildLargePages @ 0x140A45FD8 (MmBuildLargePages.c)
 *     MiAddSpecialPurposeMemoryCleanup @ 0x140A46D34 (MiAddSpecialPurposeMemoryCleanup.c)
 *     MiCreatePagefileMemoryExtents @ 0x140A46F68 (MiCreatePagefileMemoryExtents.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x140A472B8 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x140A473DC (MiInitializePartitionSpecialPurposeMemory.c)
 *     MiOpenSpecialPurposeMemory @ 0x140A476FC (MiOpenSpecialPurposeMemory.c)
 *     MiSpecialPurposeMemoryRemoved @ 0x140A478B4 (MiSpecialPurposeMemoryRemoved.c)
 *     MiUpdateSpecialPurposeMemoryCacheEligibility @ 0x140A47A04 (MiUpdateSpecialPurposeMemoryCacheEligibility.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
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
