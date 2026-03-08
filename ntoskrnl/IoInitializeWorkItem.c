/*
 * XREFs of IoInitializeWorkItem @ 0x1402FABA0
 * Callers:
 *     DifIoInitializeWorkItemWrapper @ 0x1405DDC50 (DifIoInitializeWorkItemWrapper.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void __stdcall IoInitializeWorkItem(PVOID IoObject, PIO_WORKITEM IoWorkItem)
{
  if ( (unsigned __int16)(*(_WORD *)IoObject - 3) > 1u )
    KeBugCheckEx(0xE4u, 3uLL, (ULONG_PTR)IoWorkItem, (ULONG_PTR)IoObject, 0LL);
  IoWorkItem->WorkOnBehalfThread = 0LL;
  IoWorkItem->Type = 1;
  IoWorkItem->IoObject = IoObject;
  IoWorkItem->WorkItem.List.Flink = 0LL;
  IoWorkItem->WorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopProcessWorkItem;
  IoWorkItem->WorkItem.Parameter = IoWorkItem;
}
