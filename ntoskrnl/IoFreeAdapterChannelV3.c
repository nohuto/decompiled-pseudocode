/*
 * XREFs of IoFreeAdapterChannelV3 @ 0x14050DD90
 * Callers:
 *     HalCancelAdapterChannel @ 0x14050CA30 (HalCancelAdapterChannel.c)
 *     HalFreeAdapterObject @ 0x14050CAF0 (HalFreeAdapterObject.c)
 *     IoFreeAdapterChannelV3Passive @ 0x14050DE40 (IoFreeAdapterChannelV3Passive.c)
 *     HalCancelAdapterChannelDmaThin @ 0x140510AC0 (HalCancelAdapterChannelDmaThin.c)
 *     HalCancelAdapterChannelDmarThin @ 0x1405112B0 (HalCancelAdapterChannelDmarThin.c)
 *     HalpAllocateDmaResourcesInternal @ 0x140512A4C (HalpAllocateDmaResourcesInternal.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     HalpContinueProcessingWaitQueue @ 0x14050D774 (HalpContinueProcessingWaitQueue.c)
 *     IoFreeAdapterChannelV3Internal @ 0x14050DDE4 (IoFreeAdapterChannelV3Internal.c)
 */

void __fastcall IoFreeAdapterChannelV3(__int64 a1)
{
  int v2; // ecx

  v2 = *(_DWORD *)(a1 + 520);
  if ( KeGetCurrentIrql() == 2 && v2 )
  {
    if ( *(_BYTE *)(a1 + 224) )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 480), CriticalWorkQueue);
  }
  else
  {
    IoFreeAdapterChannelV3Internal(a1);
    HalpContinueProcessingWaitQueue(a1);
  }
}
