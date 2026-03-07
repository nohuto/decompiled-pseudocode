NTSTATUS __stdcall IoSetCompletionRoutineEx(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        PIO_COMPLETION_ROUTINE CompletionRoutine,
        PVOID Context,
        BOOLEAN InvokeOnSuccess,
        BOOLEAN InvokeOnError,
        BOOLEAN InvokeOnCancel)
{
  __int64 Pool2; // rax
  void *v12; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax

  if ( !InvokeOnError && !InvokeOnCancel && !InvokeOnSuccess )
    return -1073741811;
  Pool2 = ExAllocatePool2(64LL, 32LL, 1934978889LL);
  v12 = (void *)Pool2;
  if ( !Pool2 )
    return -1073741670;
  *(_QWORD *)Pool2 = DeviceObject;
  *(_QWORD *)(Pool2 + 16) = CompletionRoutine;
  *(_QWORD *)(Pool2 + 8) = Context;
  *(_BYTE *)(Pool2 + 24) = InvokeOnError;
  *(_BYTE *)(Pool2 + 25) = InvokeOnSuccess;
  *(_BYTE *)(Pool2 + 26) = InvokeOnCancel;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&IopUnloadSafeCompletion;
  CurrentStackLocation[-1].Context = v12;
  CurrentStackLocation[-1].Control = -32;
  return 0;
}
