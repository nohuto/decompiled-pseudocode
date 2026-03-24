/*
 * XREFs of HalpQueueMapBufferWorker @ 0x1404BC538
 * Callers:
 *     HalpAllocateDmaResourcesInternal @ 0x1404CA51C (HalpAllocateDmaResourcesInternal.c)
 *     HalAllocateAdapterChannelV2 @ 0x1404CC624 (HalAllocateAdapterChannelV2.c)
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x1404CCC28 (HalpDmaProcessMapRegisterQueueV2.c)
 *     IoFreeAdapterChannelV2 @ 0x1404CCD0C (IoFreeAdapterChannelV2.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14023E0C0 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

void __fastcall HalpQueueMapBufferWorker(__int64 a1, int a2)
{
  __int64 v4; // rbx
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  v4 = *(_BYTE *)(a1 + 434) != 0 ? 4 : 0;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)((char *)&HalpDmaGrowMapBufferWorkerQueued + v4), 1, 0) )
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x206C6148u);
    if ( PoolWithTag )
    {
      PoolWithTag->List.Flink = 0LL;
      PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))HalpGrowMapBufferWorker;
      PoolWithTag->Parameter = PoolWithTag;
      PoolWithTag[1].List.Flink = *(struct _LIST_ENTRY **)(a1 + 152);
      HIDWORD(PoolWithTag[1].List.Blink) = a2;
      LOBYTE(PoolWithTag[1].List.Blink) = *(_BYTE *)(a1 + 434);
      LODWORD(PoolWithTag[1].WorkerRoutine) = *(_DWORD *)(a1 + 148);
      ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
    }
    else
    {
      *(_DWORD *)((char *)&HalpDmaGrowMapBufferWorkerQueued + v4) = 0;
    }
  }
}
