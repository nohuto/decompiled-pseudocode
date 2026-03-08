/*
 * XREFs of HalpQueueMapBufferWorker @ 0x140503034
 * Callers:
 *     HalAllocateAdapterChannelV2 @ 0x140454AE8 (HalAllocateAdapterChannelV2.c)
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x1404551EE (HalpDmaProcessMapRegisterQueueV2.c)
 *     IoFreeAdapterChannelV2 @ 0x1404552D0 (IoFreeAdapterChannelV2.c)
 *     HalpAllocateDmaResourcesInternal @ 0x140512A4C (HalpAllocateDmaResourcesInternal.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

void __fastcall HalpQueueMapBufferWorker(__int64 a1, int a2)
{
  __int64 v4; // rbx
  __int64 Pool2; // rax

  v4 = *(_BYTE *)(a1 + 442) != 0 ? 4 : 0;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)((char *)&HalpDmaGrowMapBufferWorkerQueued + v4), 1, 0) )
  {
    Pool2 = ExAllocatePool2(66LL, 56LL, 1147953480LL);
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = 0LL;
      *(_QWORD *)(Pool2 + 16) = HalpGrowMapBufferWorker;
      *(_QWORD *)(Pool2 + 24) = Pool2;
      *(_QWORD *)(Pool2 + 32) = *(_QWORD *)(a1 + 160);
      *(_DWORD *)(Pool2 + 44) = a2;
      *(_BYTE *)(Pool2 + 40) = *(_BYTE *)(a1 + 442);
      *(_DWORD *)(Pool2 + 48) = *(_DWORD *)(a1 + 156);
      ExQueueWorkItem((PWORK_QUEUE_ITEM)Pool2, DelayedWorkQueue);
    }
    else
    {
      *(_DWORD *)((char *)&HalpDmaGrowMapBufferWorkerQueued + v4) = 0;
    }
  }
}
