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
