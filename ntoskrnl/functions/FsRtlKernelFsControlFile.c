__int64 __fastcall FsRtlKernelFsControlFile(
        PFILE_OBJECT FileObject,
        int a2,
        const void *a3,
        unsigned int a4,
        _SLIST_ENTRY *VirtualAddress,
        ULONG Length,
        ULONG *a7)
{
  size_t v7; // r12
  char v9; // r13
  IRP *v11; // rbx
  int v12; // r13d
  __int64 v13; // rdx
  PSLIST_ENTRY v14; // rax
  __int64 v15; // rcx
  ULONG v16; // r14d
  __int64 v17; // rax
  int Status; // esi
  ULONG Information; // ecx
  struct _MDL *Mdl; // rax
  struct _MDL *MdlAddress; // rcx
  PIRP Irp; // [rsp+38h] [rbp-50h]
  __int64 *v24; // [rsp+40h] [rbp-48h]
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-40h] BYREF
  struct _KEVENT Object; // [rsp+50h] [rbp-38h] BYREF

  v7 = a4;
  v9 = a2;
  v11 = 0LL;
  memset(&Object, 0, sizeof(Object));
  KeInitializeEvent(&Object, NotificationEvent, 0);
  v12 = v9 & 3;
  if ( (FileObject->Flags & 0x800) != 0 )
  {
    Status = -1073741808;
    goto LABEL_32;
  }
  DeviceObject = IoGetRelatedDeviceObject(FileObject);
  LOBYTE(v13) = DeviceObject->StackSize;
  v14 = IoAllocateIrpEx((__int64)DeviceObject, v13, 0LL);
  v11 = (IRP *)v14;
  Irp = (PIRP)v14;
  if ( !v14 )
    goto LABEL_23;
  v24 = (__int64 *)(&v14[11].Next + 1);
  v15 = *((_QWORD *)&v14[11].Next + 1);
  *(_WORD *)(v15 - 72) = 1037;
  *(_QWORD *)(v15 - 24) = FileObject;
  v16 = Length;
  *(_DWORD *)(v15 - 64) = Length;
  *(_DWORD *)(v15 - 56) = v7;
  *(_DWORD *)(v15 - 48) = a2;
  if ( !v12 )
  {
    if ( (_DWORD)v7 || Length )
    {
      if ( (unsigned int)v7 >= Length )
      {
        *((_QWORD *)&v14[1].Next + 1) = a3;
      }
      else
      {
        *((_QWORD *)&v14[1].Next + 1) = VirtualAddress;
        memmove(VirtualAddress, a3, v7);
      }
      v11->Flags = 16;
      v11->UserBuffer = VirtualAddress;
      if ( VirtualAddress )
        v11->Flags = 80;
    }
    else
    {
      LODWORD(v14[1].Next) = 0;
      v14[7].Next = 0LL;
    }
    goto LABEL_10;
  }
  if ( v12 != 1 && v12 != 2 )
  {
    v14[7].Next = VirtualAddress;
    *(_QWORD *)(v15 - 40) = a3;
    goto LABEL_10;
  }
  if ( a3 )
  {
    *((_QWORD *)&v14[1].Next + 1) = a3;
    LODWORD(v14[1].Next) = 16;
  }
  else
  {
    LODWORD(v14[1].Next) = 0;
  }
  if ( !VirtualAddress )
    goto LABEL_10;
  Mdl = IoAllocateMdl(VirtualAddress, Length, 0, 0, 0LL);
  v11->MdlAddress = Mdl;
  if ( !Mdl )
  {
LABEL_23:
    Status = -1073741670;
    goto LABEL_32;
  }
  MmProbeAndLockPages(Mdl, 0, (LOCK_OPERATION)(v12 != 1));
LABEL_10:
  v11 = Irp;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  Irp->Flags |= 4u;
  Irp->RequestorMode = 0;
  v17 = *v24;
  *(_QWORD *)(v17 - 16) = CmpCompleteFlushAndPurgeIrp;
  *(_QWORD *)(v17 - 8) = &Object;
  *(_BYTE *)(v17 - 69) = 0;
  *(_BYTE *)(v17 - 69) = 64;
  *(_BYTE *)(v17 - 69) = -64;
  *(_BYTE *)(v17 - 69) = -32;
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
  Information = Irp->IoStatus.Information;
  *a7 = Information;
  if ( Status >= 0 && Information && (unsigned int)v7 >= Length )
  {
    if ( Information < Length )
      v16 = Information;
    memmove(VirtualAddress, a3, v16);
  }
LABEL_32:
  if ( v11 )
  {
    MdlAddress = v11->MdlAddress;
    if ( MdlAddress )
    {
      FsRtlpFreeMdlChain(MdlAddress);
      v11->MdlAddress = 0LL;
    }
    IoFreeIrp(v11);
  }
  return (unsigned int)Status;
}
