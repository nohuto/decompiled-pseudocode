/*
 * XREFs of IoFreeAdapterChannelV2 @ 0x1404CCD0C
 * Callers:
 *     IoFreeAdapterChannel @ 0x1404B8C60 (IoFreeAdapterChannel.c)
 * Callees:
 *     IoFreeMapRegisters @ 0x1403A25A0 (IoFreeMapRegisters.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     HalpQueueMapBufferWorker @ 0x1404BC538 (HalpQueueMapBufferWorker.c)
 *     HalpDmaAllocateMapRegisters @ 0x1404C683C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaQueueAdapter @ 0x1404C7CD4 (HalpDmaQueueAdapter.c)
 *     KeRemoveDeviceQueue @ 0x14051AB10 (KeRemoveDeviceQueue.c)
 */

void __fastcall IoFreeAdapterChannelV2(PDMA_ADAPTER DmaAdapter)
{
  char v1; // r15
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  ULONG v5; // r8d
  PVOID *p_DmaOperations; // r14
  PKDEVICE_QUEUE_ENTRY v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  PKDEVICE_QUEUE_ENTRY v10; // rsi
  unsigned int SortKey; // edx
  __int64 MapRegisters; // rax
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf
  PVOID v18; // r8
  int v19; // eax

  v1 = 0;
  CurrentIrql = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v1 = 1;
  }
  while ( 1 )
  {
    v5 = *(_DWORD *)&DmaAdapter[15].Version;
    p_DmaOperations = (PVOID *)&DmaAdapter[14].DmaOperations;
    if ( v5 )
      IoFreeMapRegisters(DmaAdapter, *p_DmaOperations, v5);
    v7 = KeRemoveDeviceQueue((PKDEVICE_QUEUE)&DmaAdapter[11]);
    v10 = v7;
    if ( !v7 )
      break;
    DmaAdapter[21].DmaOperations = (_DMA_OPERATIONS *)v7;
    *(_DWORD *)&DmaAdapter[15].Version = v7[1].SortKey;
    SortKey = v7[1].SortKey;
    if ( SortKey && DmaAdapter[9].DmaOperations )
    {
      MapRegisters = HalpDmaAllocateMapRegisters((__int64)DmaAdapter, SortKey, v8, v9);
      *p_DmaOperations = (PVOID)MapRegisters;
      if ( !MapRegisters )
      {
        HalpDmaQueueAdapter((__int64)DmaAdapter);
        HalpQueueMapBufferWorker((__int64)DmaAdapter, v10[1].SortKey);
        break;
      }
    }
    else
    {
      DmaAdapter[14].DmaOperations = 0LL;
      *(_DWORD *)&DmaAdapter[15].Version = 0;
    }
    v18 = *p_DmaOperations;
    DmaAdapter[21].DmaOperations = (_DMA_OPERATIONS *)v10;
    v19 = ((__int64 (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY *, PVOID, struct _LIST_ENTRY *))v10[1].DeviceListEntry.Flink)(
            v10[2].DeviceListEntry.Flink,
            v10[2].DeviceListEntry.Blink,
            v18,
            v10[1].DeviceListEntry.Blink);
    if ( v19 == 1 )
      break;
    if ( v19 == 3 )
      *(_DWORD *)&DmaAdapter[15].Version = 0;
  }
  if ( v1 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v13 = KeGetCurrentIrql();
        if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v15 = CurrentPrcb->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v17 = (v16 & v15[5]) == 0;
          v15[5] &= v16;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
}
