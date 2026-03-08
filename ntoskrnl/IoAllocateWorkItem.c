/*
 * XREFs of IoAllocateWorkItem @ 0x1402027B0
 * Callers:
 *     PnpDeviceCompletionRequestDestroy @ 0x140202754 (PnpDeviceCompletionRequestDestroy.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

PIO_WORKITEM __stdcall IoAllocateWorkItem(PDEVICE_OBJECT DeviceObject)
{
  PIO_WORKITEM result; // rax

  result = (PIO_WORKITEM)ExAllocatePool2(64LL, 88LL, 1230466889LL);
  if ( result )
  {
    result->WorkOnBehalfThread = 0LL;
    result->IoObject = DeviceObject;
    result->Type = 1;
    result->WorkItem.List.Flink = 0LL;
    result->WorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopProcessWorkItem;
    result->WorkItem.Parameter = result;
  }
  return result;
}
