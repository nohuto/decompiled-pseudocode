/*
 * XREFs of PsDereferencePartition @ 0x1402ABFDC
 * Callers:
 *     MiCommitExistingVad @ 0x140218D90 (MiCommitExistingVad.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140267690 (MiTrimUnusedPageFileRegionsWorker.c)
 *     PsGetNextPartition @ 0x1402ABF88 (PsGetNextPartition.c)
 *     CcGetPartitionWithCreate @ 0x1402BAEB0 (CcGetPartitionWithCreate.c)
 *     EtwpClearPartitionContext @ 0x1402C7EA0 (EtwpClearPartitionContext.c)
 *     MmQueryMemoryListInformation @ 0x1402D4240 (MmQueryMemoryListInformation.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x1402E32F0 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MiQueryAddressState @ 0x14032F730 (MiQueryAddressState.c)
 *     MiRebuildLargePages @ 0x14038D6C0 (MiRebuildLargePages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052F930 (MmMarkPhysicalMemoryAsBad.c)
 *     MmAllocateNonChargedSecurePages @ 0x14053430C (MmAllocateNonChargedSecurePages.c)
 *     MmFreeNonChargedSecurePages @ 0x1405344D4 (MmFreeNonChargedSecurePages.c)
 *     MiObtainFreePages @ 0x14053B584 (MiObtainFreePages.c)
 *     MmGetNodeFastLargePageCounts @ 0x140547D00 (MmGetNodeFastLargePageCounts.c)
 *     MiRebalanceZeroFreeLists @ 0x140551200 (MiRebalanceZeroFreeLists.c)
 *     MmAllocateSecureKernelPages @ 0x1405533D4 (MmAllocateSecureKernelPages.c)
 *     MiContractWsSwapPageFileWorker @ 0x14055C4B0 (MiContractWsSwapPageFileWorker.c)
 *     PsQuitNextPartition @ 0x1405842D0 (PsQuitNextPartition.c)
 *     EtwpSetPartitionContext @ 0x1405B0AA0 (EtwpSetPartitionContext.c)
 *     MmAllocateVirtualMemory @ 0x1405F94E0 (MmAllocateVirtualMemory.c)
 *     NtAllocateVirtualMemory @ 0x1405FA740 (NtAllocateVirtualMemory.c)
 *     PspProcessDelete @ 0x1406136C0 (PspProcessDelete.c)
 *     MmQueryVirtualMemory @ 0x14061E930 (MmQueryVirtualMemory.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x140682FC4 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     NtManagePartition @ 0x140691E80 (NtManagePartition.c)
 *     MiAllocateVirtualMemoryCommon @ 0x1406944E8 (MiAllocateVirtualMemoryCommon.c)
 *     MmGetPageFileInformation @ 0x1406BE834 (MmGetPageFileInformation.c)
 *     MiCreateSection @ 0x140705710 (MiCreateSection.c)
 *     MiInitializeCreateSectionPacket @ 0x140705930 (MiInitializeCreateSectionPacket.c)
 *     MmGetPhysicalMemoryRangesEx2 @ 0x14076F700 (MmGetPhysicalMemoryRangesEx2.c)
 *     PspAllocatePartition @ 0x1407CC2B4 (PspAllocatePartition.c)
 *     IopSetFileMemoryPartitionInformation @ 0x1408942EC (IopSetFileMemoryPartitionInformation.c)
 *     MiScanPagefileSpace @ 0x1408D07D0 (MiScanPagefileSpace.c)
 *     MmBuildLargePages @ 0x1408D76D4 (MmBuildLargePages.c)
 *     PspSetJobMemoryPartition @ 0x14090953C (PspSetJobMemoryPartition.c)
 *     NtCreatePartition @ 0x14090CD70 (NtCreatePartition.c)
 *     PspClosePartitionHandle @ 0x14090CF20 (PspClosePartitionHandle.c)
 *     PspTeardownPartition @ 0x14090D090 (PspTeardownPartition.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14023E750 (ExQueueWorkItem.c)
 */

void __fastcall PsDereferencePartition(__int64 a1)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax
  struct _WORK_QUEUE_ITEM *v5; // rcx

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    v5 = (struct _WORK_QUEUE_ITEM *)(a1 + 64);
    v5->Parameter = (void *)a1;
    v5->List.Flink = 0LL;
    v5->WorkerRoutine = (void (__fastcall *)(void *))PspTeardownPartition;
    ExQueueWorkItem(v5, DelayedWorkQueue);
  }
}
