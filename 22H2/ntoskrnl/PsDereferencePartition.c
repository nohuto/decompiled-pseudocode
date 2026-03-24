/*
 * XREFs of PsDereferencePartition @ 0x140303F4C
 * Callers:
 *     MiCommitExistingVad @ 0x140218D50 (MiCommitExistingVad.c)
 *     MmQueryMemoryListInformation @ 0x14026EA10 (MmQueryMemoryListInformation.c)
 *     MiQueryAddressState @ 0x1402AFDC0 (MiQueryAddressState.c)
 *     PsGetNextPartition @ 0x140303EF8 (PsGetNextPartition.c)
 *     CcGetPartitionWithCreate @ 0x140313D10 (CcGetPartitionWithCreate.c)
 *     EtwpClearPartitionContext @ 0x140321340 (EtwpClearPartitionContext.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1403306A0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140354850 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MiRebuildLargePages @ 0x14038CFC0 (MiRebuildLargePages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052F870 (MmMarkPhysicalMemoryAsBad.c)
 *     MmAllocateNonChargedSecurePages @ 0x14053424C (MmAllocateNonChargedSecurePages.c)
 *     MmFreeNonChargedSecurePages @ 0x140534414 (MmFreeNonChargedSecurePages.c)
 *     MiObtainFreePages @ 0x14053B4C4 (MiObtainFreePages.c)
 *     MmGetNodeFastLargePageCounts @ 0x140547C40 (MmGetNodeFastLargePageCounts.c)
 *     MiRebalanceZeroFreeLists @ 0x140551140 (MiRebalanceZeroFreeLists.c)
 *     MmAllocateSecureKernelPages @ 0x140553314 (MmAllocateSecureKernelPages.c)
 *     MiContractWsSwapPageFileWorker @ 0x14055C3F0 (MiContractWsSwapPageFileWorker.c)
 *     PsQuitNextPartition @ 0x140584210 (PsQuitNextPartition.c)
 *     EtwpSetPartitionContext @ 0x1405B09E0 (EtwpSetPartitionContext.c)
 *     MmAllocateVirtualMemory @ 0x1405F94E0 (MmAllocateVirtualMemory.c)
 *     NtAllocateVirtualMemory @ 0x1405FA740 (NtAllocateVirtualMemory.c)
 *     PspProcessDelete @ 0x140613B20 (PspProcessDelete.c)
 *     MmQueryVirtualMemory @ 0x14061ED50 (MmQueryVirtualMemory.c)
 *     MiCreateSection @ 0x140652DA0 (MiCreateSection.c)
 *     MiInitializeCreateSectionPacket @ 0x140652FC0 (MiInitializeCreateSectionPacket.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x140660414 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     NtManagePartition @ 0x1406762C0 (NtManagePartition.c)
 *     MiAllocateVirtualMemoryCommon @ 0x140678908 (MiAllocateVirtualMemoryCommon.c)
 *     MmGetPageFileInformation @ 0x1406A1644 (MmGetPageFileInformation.c)
 *     MmGetPhysicalMemoryRangesEx2 @ 0x14076F3C0 (MmGetPhysicalMemoryRangesEx2.c)
 *     PspAllocatePartition @ 0x1407CC1D4 (PspAllocatePartition.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14089433C (IopSetFileMemoryPartitionInformation.c)
 *     MiScanPagefileSpace @ 0x1408D0820 (MiScanPagefileSpace.c)
 *     MmBuildLargePages @ 0x1408D7724 (MmBuildLargePages.c)
 *     PspSetJobMemoryPartition @ 0x14090958C (PspSetJobMemoryPartition.c)
 *     NtCreatePartition @ 0x14090CDC0 (NtCreatePartition.c)
 *     PspClosePartitionHandle @ 0x14090CF70 (PspClosePartitionHandle.c)
 *     PspTeardownPartition @ 0x14090D0E0 (PspTeardownPartition.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14023E0C0 (ExQueueWorkItem.c)
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
