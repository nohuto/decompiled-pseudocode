NTSTATUS __fastcall CmpGetVolumeClusterSize(HANDLE FileHandle, int *a2)
{
  struct _OBJECT_TYPE *v4; // r8
  NTSTATUS result; // eax
  int v6; // eax
  PVOID v7; // r15
  NTSTATUS v8; // ebx
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  PVOID v10; // rdi
  struct _DEVICE_OBJECT *v11; // rsi
  PIRP Irp; // rax
  IRP *v13; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  IRP *v15; // rdx
  struct _IO_STACK_LOCATION *v16; // rax
  NTSTATUS Status; // r14d
  unsigned int v18; // edx
  int v19; // edx
  PVOID Object; // [rsp+30h] [rbp-49h] BYREF
  PVOID v21; // [rsp+38h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-31h] BYREF
  int v24; // [rsp+58h] [rbp-21h] BYREF
  unsigned int v25; // [rsp+5Ch] [rbp-1Dh]
  __int128 v26; // [rsp+60h] [rbp-19h]
  int v27; // [rsp+70h] [rbp-9h]
  __int128 FsInformation; // [rsp+78h] [rbp-1h] BYREF
  __int64 v29; // [rsp+88h] [rbp+Fh]

  v21 = 0LL;
  Handle = 0LL;
  v27 = 0;
  v25 = 0;
  Object = 0LL;
  v29 = 0LL;
  FsInformation = 0LL;
  v24 = 6;
  IoStatusBlock = 0LL;
  v4 = *(struct _OBJECT_TYPE **)CmIoFileObjectType;
  v26 = 0LL;
  result = ObReferenceObjectByHandle(FileHandle, 0, v4, 0, &Object, 0LL);
  if ( result < 0 )
    return result;
  v6 = CmpCreateEvent(NotificationEvent, &Handle, &v21);
  v7 = Object;
  v8 = v6;
  if ( v6 >= 0 )
  {
    AttachedDeviceReference = IoGetAttachedDeviceReference(*((PDEVICE_OBJECT *)Object + 1));
    v10 = v21;
    v11 = AttachedDeviceReference;
    if ( !AttachedDeviceReference )
      goto LABEL_26;
    Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
    v13 = Irp;
    if ( !Irp )
      goto LABEL_26;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    v15 = Irp;
    CurrentStackLocation[-1].MajorFunction = 14;
    CurrentStackLocation[-1].DeviceObject = v11;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2954240;
    CurrentStackLocation[-1].Parameters.Read.Length = 28;
    CurrentStackLocation[-1].Parameters.Create.Options = 12;
    Irp->AssociatedIrp.MasterIrp = (struct _IRP *)&v24;
    Irp->UserBuffer = &v24;
    v16 = Irp->Tail.Overlay.CurrentStackLocation;
    v13->Flags = 80;
    v13->IoStatus.Status = -1073741637;
    v16[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&CmpGetVolumeClusterSizeCompletion;
    v16[-1].Context = v10;
    v16[-1].Control = -32;
    Status = IofCallDriver(v11, v15);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(v10, Executive, 0, 0, 0LL);
      Status = v13->IoStatus.Status;
    }
    IoFreeIrp(v13);
    if ( Status < 0 )
      goto LABEL_26;
    if ( v25 < 0x18 )
      goto LABEL_26;
    v18 = HIDWORD(v26);
    if ( !HIDWORD(v26) )
      goto LABEL_26;
    if ( ((HIDWORD(v26) - 1) & HIDWORD(v26)) != 0 )
      Status = -1073741288;
    if ( Status < 0 )
    {
LABEL_26:
      v8 = ZwQueryVolumeInformationFile(FileHandle, &IoStatusBlock, &FsInformation, 0x18u, FileFsSizeInformation);
      if ( v8 < 0 )
        goto LABEL_17;
      v18 = HIDWORD(v29);
    }
    v8 = 0;
    if ( v18 > 0x1000 )
    {
      v19 = 8;
      goto LABEL_16;
    }
    if ( v18 < 0x200 )
    {
      v19 = 1;
      goto LABEL_16;
    }
    v19 = v18 >> 9;
    if ( ((v19 - 1) & v19) == 0 )
    {
LABEL_16:
      *a2 = v19;
      goto LABEL_17;
    }
    v8 = -1073741288;
LABEL_17:
    if ( v11 )
      ObfDereferenceObject(v11);
    goto LABEL_19;
  }
  v10 = 0LL;
LABEL_19:
  ObfDereferenceObject(v7);
  if ( v10 )
  {
    ObfDereferenceObject(v10);
    ZwClose(Handle);
  }
  return v8;
}
