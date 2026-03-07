NTSTATUS __fastcall FsRtlGetDirectImageOriginalBase(PFILE_OBJECT FileObject, __int64 a2)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rbx
  __int64 v5; // rdx
  PSLIST_ENTRY Irp; // rax
  IRP *v7; // rdx
  NTSTATUS result; // eax
  __int64 v9; // rax
  __int128 v10; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+40h] [rbp-28h] BYREF

  memset(&Object, 0, sizeof(Object));
  v10 = 0LL;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  LOBYTE(v5) = RelatedDeviceObject->StackSize;
  Irp = IoAllocateIrpEx((__int64)RelatedDeviceObject, v5, 0LL);
  v7 = (IRP *)Irp;
  if ( !Irp )
    return -1073741670;
  LOBYTE(Irp[4].Next) = 0;
  *((_QWORD *)&Irp[1].Next + 1) = a2;
  *((_QWORD *)&Irp[4].Next + 1) = &v10;
  Irp[5].Next = (_SLIST_ENTRY *)&Object;
  *((_QWORD *)&Irp[9].Next + 1) = KeGetCurrentThread();
  v9 = *((_QWORD *)&Irp[11].Next + 1);
  *(_DWORD *)(v9 - 56) = 0;
  *(_QWORD *)(v9 - 40) = 0LL;
  *(_WORD *)(v9 - 72) = 13;
  *(_QWORD *)(v9 - 24) = FileObject;
  *(_DWORD *)(v9 - 48) = 590756;
  *(_DWORD *)(v9 - 64) = 8;
  result = IofCallDriver(RelatedDeviceObject, v7);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    return v10;
  }
  return result;
}
