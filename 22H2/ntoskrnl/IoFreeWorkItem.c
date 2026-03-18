/*
 * XREFs of IoFreeWorkItem @ 0x14031D3D0
 * Callers:
 *     PnpDeviceCompletionRequestDestroyWorkItem @ 0x14031D380 (PnpDeviceCompletionRequestDestroyWorkItem.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __stdcall IoFreeWorkItem(PIO_WORKITEM IoWorkItem)
{
  if ( IoWorkItem->WorkItem.List.Flink )
    KeBugCheckEx(0xE4u, 2uLL, (ULONG_PTR)IoWorkItem, (ULONG_PTR)&IoWorkItem->Routine, 0LL);
  ExFreePoolWithTag(IoWorkItem, 0);
}
