/*
 * XREFs of ?ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C002CF64
 * Callers:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1C0097CEC (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     NdisOpenAdapterEx @ 0x1C012F610 (NdisOpenAdapterEx.c)
 * Callees:
 *     NdisAllocateRefCount @ 0x1C002C070 (NdisAllocateRefCount.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C002D0C0 (NdisNblTrackerRegisterComponent.c)
 *     ?ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x1C002D1E4 (-ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 *     ?ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x1C0038F50 (-ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 *     memset @ 0x1C0040B00 (memset.c)
 */

struct _NDIS_OPEN_BLOCK *__fastcall ndisAllocateOpenBlock(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PROTOCOL_BLOCK *a2,
        char a3)
{
  struct PNDIS_PER_PROCESSOR_SLOT__ *PerProcessorSlot; // rsi
  SIZE_T v7; // rdi
  struct _NDIS_OPEN_BLOCK *PoolWithTag; // rax
  struct _NDIS_OPEN_BLOCK *v9; // rbx
  __int64 RefCount; // rax
  struct _NDIS_OPEN_BLOCK *result; // rax

  PerProcessorSlot = ndisAllocatePerProcessorSlot(0x6F6D444Eu);
  if ( !PerProcessorSlot )
    return 0LL;
  v7 = (a1->Flags & 0x20000) != 0 ? 1160LL : 1016LL;
  PoolWithTag = (struct _NDIS_OPEN_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x6F6D444Eu);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
  {
    ndisFreePerProcessorSlot((ULONG_PTR)PerProcessorSlot, 0x6F6D444EuLL);
    return 0LL;
  }
  memset(PoolWithTag, 0, v7);
  v9->ReceivedAPacketSlot = PerProcessorSlot;
  if ( a3 )
  {
    LOWORD(v9->MacHandle) = 274;
    v9->Header.Size = v7;
  }
  v9->ReceiveQueueList.Blink = &v9->ReceiveQueueList;
  v9->ReceiveQueueList.Flink = &v9->ReceiveQueueList;
  v9->SharedMemoryBlockList.Blink = &v9->SharedMemoryBlockList;
  v9->SharedMemoryBlockList.Flink = &v9->SharedMemoryBlockList;
  v9->VFList.Blink = &v9->VFList;
  v9->VFList.Flink = &v9->VFList;
  v9->VPortList.Blink = &v9->VPortList;
  v9->VPortList.Flink = &v9->VPortList;
  KeInitializeSpinLock(&v9->RefCountLock);
  v9->NblTracker = (NDIS_NBL_TRACKER_HANDLE__ *)NdisNblTrackerRegisterComponent(2LL, v9, &a2->Name);
  RefCount = NdisAllocateRefCount(0x14u, 0);
  v9->UnsolicitedUnbindComplete.List.Flink = 0LL;
  v9->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)RefCount;
  v9->UnsolicitedUnbindComplete.WorkerRoutine = ndisCompleteUnsolicitedUnbind;
  result = v9;
  v9->UnsolicitedUnbindComplete.Parameter = v9;
  return result;
}
