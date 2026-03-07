__int64 __fastcall FsRtlQueryKernelEaFile(
        PFILE_OBJECT FileObject,
        _SLIST_ENTRY *a2,
        int a3,
        char a4,
        __int64 a5,
        int a6,
        _DWORD *a7,
        char a8,
        _DWORD *a9)
{
  IRP *v13; // rbx
  __int64 v14; // rdx
  PSLIST_ENTRY v15; // rax
  __int64 v16; // rdx
  _BYTE *v17; // rcx
  __int64 v18; // rax
  unsigned int Status; // edi
  struct _MDL *MdlAddress; // rcx
  PIRP Irp; // [rsp+30h] [rbp-38h]
  PDEVICE_OBJECT DeviceObject; // [rsp+38h] [rbp-30h] BYREF
  struct _KEVENT Object; // [rsp+40h] [rbp-28h] BYREF

  v13 = 0LL;
  memset(&Object, 0, sizeof(Object));
  KeInitializeEvent(&Object, NotificationEvent, 0);
  if ( (FileObject->Flags & 0x800) != 0 )
  {
    Status = -1073741808;
  }
  else
  {
    DeviceObject = IoGetRelatedDeviceObject(FileObject);
    LOBYTE(v14) = DeviceObject->StackSize;
    v15 = IoAllocateIrpEx((__int64)DeviceObject, v14, 0LL);
    v13 = (IRP *)v15;
    Irp = (PIRP)v15;
    if ( v15 )
    {
      v16 = *((_QWORD *)&v15[11].Next + 1);
      *(_BYTE *)(v16 - 72) = 7;
      *(_QWORD *)(v16 - 24) = FileObject;
      v15[7].Next = a2;
      *(_DWORD *)(v16 - 64) = a3;
      *(_QWORD *)(v16 - 56) = a5;
      *(_DWORD *)(v16 - 48) = a6;
      v17 = (_BYTE *)(v16 - 70);
      if ( a7 )
      {
        *(_DWORD *)(v16 - 40) = *a7;
        *v17 |= 4u;
      }
      else
      {
        *(_DWORD *)(v16 - 40) = 0;
      }
      if ( a8 )
        *v17 |= 1u;
      if ( a4 )
        *v17 |= 2u;
      v13 = (IRP *)v15;
      *((_QWORD *)&v15[9].Next + 1) = KeGetCurrentThread();
      LODWORD(v15[1].Next) = 4;
      LOBYTE(v15[4].Next) = 0;
      v18 = *((_QWORD *)&v15[11].Next + 1);
      *(_QWORD *)(v18 - 16) = CmpCompleteFlushAndPurgeIrp;
      *(_QWORD *)(v18 - 8) = &Object;
      *(_BYTE *)(v18 - 69) = 0;
      *(_BYTE *)(v18 - 69) = 64;
      *(_BYTE *)(v18 - 69) = -64;
      *(_BYTE *)(v18 - 69) = -32;
      if ( IofCallDriver(DeviceObject, Irp) == 259 )
      {
        DeviceObject = (PDEVICE_OBJECT)&Object;
        if ( FsRtlCancellableWaitForMultipleObjects(1u, (PVOID *)&DeviceObject, WaitAll, 0LL, 0LL, 0LL) == -1073741749 )
        {
          IoCancelIrp(Irp);
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        }
      }
      Status = Irp->IoStatus.Status;
      *a9 = Irp->IoStatus.Information;
    }
    else
    {
      Status = -1073741670;
    }
  }
  if ( v13 )
  {
    MdlAddress = v13->MdlAddress;
    if ( MdlAddress )
    {
      FsRtlpFreeMdlChain(MdlAddress);
      v13->MdlAddress = 0LL;
    }
    IoFreeIrp(v13);
  }
  return Status;
}
