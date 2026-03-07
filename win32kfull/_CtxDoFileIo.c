NTSTATUS __fastcall CtxDoFileIo(__int64 a1, struct _FILE_OBJECT *a2, void *a3, ULONG a4)
{
  NTSTATUS result; // eax
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rax
  struct _DEVICE_OBJECT *v9; // rbp
  PIRP v10; // rax
  IRP *v11; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  union _LARGE_INTEGER Timeout; // [rsp+48h] [rbp+10h] BYREF

  if ( (a2->Flags & 2) != 0 )
    return -1073741776;
  RelatedDeviceObject = IoGetRelatedDeviceObject(a2);
  Timeout.QuadPart = -1LL;
  v9 = RelatedDeviceObject;
  v10 = IoBuildAsynchronousFsdRequest(4u, RelatedDeviceObject, a3, a4, &Timeout, &IoStatusBlock);
  v11 = v10;
  if ( !v10 )
    return -1073741670;
  v10->UserEvent = 0LL;
  v10->Flags |= 4u;
  ObfReferenceObject(a2);
  CurrentStackLocation = v11->Tail.Overlay.CurrentStackLocation;
  v11->Tail.Overlay.OriginalFileObject = a2;
  CurrentStackLocation[-1].FileObject = a2;
  v11->Tail.Overlay.Thread = KeGetCurrentThread();
  IoQueueThreadIrp(v11);
  result = IofCallDriver(v9, v11);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&a2->Event, Executive, 0, 0, 0LL);
    return a2->FinalStatus;
  }
  return result;
}
