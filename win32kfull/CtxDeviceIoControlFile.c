NTSTATUS __fastcall CtxDeviceIoControlFile(
        struct _FILE_OBJECT *Object,
        ULONG IoControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        int a7,
        int a8,
        PIO_STATUS_BLOCK a9)
{
  ULONG Flags; // eax
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK *IoStatusBlock; // rsi
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rbp
  PIRP v17; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int128 v19; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  Flags = Object->Flags;
  v19 = 0LL;
  if ( (Flags & 2) != 0 )
    return -1073741776;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  IoStatusBlock = (struct _IO_STATUS_BLOCK *)&v19;
  if ( a9 )
    IoStatusBlock = a9;
  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  v17 = IoBuildDeviceIoControlRequest(
          IoControlCode,
          RelatedDeviceObject,
          InputBuffer,
          InputBufferLength,
          OutputBuffer,
          OutputBufferLength,
          0,
          &Event,
          IoStatusBlock);
  if ( !v17 )
    return -1073741670;
  ObfReferenceObject(Object);
  CurrentStackLocation = v17->Tail.Overlay.CurrentStackLocation;
  v17->Tail.Overlay.OriginalFileObject = Object;
  CurrentStackLocation[-1].FileObject = Object;
  v17->Flags |= 4u;
  result = IofCallDriver(RelatedDeviceObject, v17);
  if ( result == 259 )
  {
    result = KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
    if ( !result )
      return IoStatusBlock->Status;
  }
  return result;
}
