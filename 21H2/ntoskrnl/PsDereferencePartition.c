/*
 * XREFs of PsDereferencePartition @ 0x140274588
 * Callers:
 *     CcGetPartitionWithCreate @ 0x1402390C0 (CcGetPartitionWithCreate.c)
 *     EtwpClearPartitionContext @ 0x140246700 (EtwpClearPartitionContext.c)
 *     PsGetNextPartition @ 0x140250E68 (PsGetNextPartition.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140255630 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MmQueryMemoryListInformation @ 0x140272F20 (MmQueryMemoryListInformation.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140294640 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MiCommitExistingVad @ 0x1402BD690 (MiCommitExistingVad.c)
 *     MiQueryAddressState @ 0x14033A480 (MiQueryAddressState.c)
 *     MiRebuildLargePages @ 0x14038D810 (MiRebuildLargePages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052FB70 (MmMarkPhysicalMemoryAsBad.c)
 *     MmAllocateNonChargedSecurePages @ 0x14053454C (MmAllocateNonChargedSecurePages.c)
 *     MmFreeNonChargedSecurePages @ 0x140534714 (MmFreeNonChargedSecurePages.c)
 *     MiObtainFreePages @ 0x14053B7C4 (MiObtainFreePages.c)
 *     MmGetNodeFastLargePageCounts @ 0x140547F40 (MmGetNodeFastLargePageCounts.c)
 *     MiRebalanceZeroFreeLists @ 0x140551440 (MiRebalanceZeroFreeLists.c)
 *     MmAllocateSecureKernelPages @ 0x140553614 (MmAllocateSecureKernelPages.c)
 *     MiContractWsSwapPageFileWorker @ 0x14055C6F0 (MiContractWsSwapPageFileWorker.c)
 *     PsQuitNextPartition @ 0x140584500 (PsQuitNextPartition.c)
 *     EtwpSetPartitionContext @ 0x1405B0CD0 (EtwpSetPartitionContext.c)
 *     MiAllocateVirtualMemoryCommon @ 0x1405F3A38 (MiAllocateVirtualMemoryCommon.c)
 *     MmGetPageFileInformation @ 0x14061DAD4 (MmGetPageFileInformation.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14067BC6C (MiReleaseProcessReferenceToSessionDataPage.c)
 *     NtManagePartition @ 0x14067CAC0 (NtManagePartition.c)
 *     PspProcessDelete @ 0x14067D320 (PspProcessDelete.c)
 *     MmQueryVirtualMemory @ 0x1406885A0 (MmQueryVirtualMemory.c)
 *     MmAllocateVirtualMemory @ 0x1406E8C40 (MmAllocateVirtualMemory.c)
 *     NtAllocateVirtualMemory @ 0x1406E9EA0 (NtAllocateVirtualMemory.c)
 *     MiCreateSection @ 0x14071CAF0 (MiCreateSection.c)
 *     MiInitializeCreateSectionPacket @ 0x14071CD10 (MiInitializeCreateSectionPacket.c)
 *     MmGetPhysicalMemoryRangesEx2 @ 0x14076F8C0 (MmGetPhysicalMemoryRangesEx2.c)
 *     PspAllocatePartition @ 0x1407CC424 (PspAllocatePartition.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14089444C (IopSetFileMemoryPartitionInformation.c)
 *     MiScanPagefileSpace @ 0x1408D0930 (MiScanPagefileSpace.c)
 *     MmBuildLargePages @ 0x1408D7834 (MmBuildLargePages.c)
 *     PspSetJobMemoryPartition @ 0x14090969C (PspSetJobMemoryPartition.c)
 *     NtCreatePartition @ 0x14090CED0 (NtCreatePartition.c)
 *     PspClosePartitionHandle @ 0x14090D080 (PspClosePartitionHandle.c)
 *     PspTeardownPartition @ 0x14090D1F0 (PspTeardownPartition.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
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
