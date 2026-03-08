/*
 * XREFs of PnpDeviceCompletionRequestDestroy @ 0x140202754
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x140202690 (PnpDeviceCompletionRoutine.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140685424 (PnpDeviceCompletionProcessCompletedRequest.c)
 * Callees:
 *     IoAllocateWorkItem @ 0x1402027B0 (IoAllocateWorkItem.c)
 *     ExQueueWorkItemFromIo @ 0x14033EDC0 (ExQueueWorkItemFromIo.c)
 *     IopQueueWorkItemProlog @ 0x140341380 (IopQueueWorkItemProlog.c)
 */

PIO_WORKITEM __fastcall PnpDeviceCompletionRequestDestroy(__int64 a1)
{
  PIO_WORKITEM result; // rax
  ULONG_PTR v3; // rax

  result = (PIO_WORKITEM)(unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 56), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    result = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 16) + 32LL));
    if ( result )
    {
      v3 = IopQueueWorkItemProlog(result, &PnpDeviceCompletionRequestDestroyWorkItem, a1);
      return (PIO_WORKITEM)ExQueueWorkItemFromIo(v3);
    }
  }
  return result;
}
