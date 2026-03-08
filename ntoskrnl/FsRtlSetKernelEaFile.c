/*
 * XREFs of FsRtlSetKernelEaFile @ 0x140786AA0
 * Callers:
 *     SPCallServerHandleFileIntegrityUpdate @ 0x1407FA154 (SPCallServerHandleFileIntegrityUpdate.c)
 * Callees:
 *     IoCancelIrp @ 0x1402E4F50 (IoCancelIrp.c)
 *     IoFreeIrp @ 0x14030EC00 (IoFreeIrp.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1403121F0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     IoAllocateIrpEx @ 0x140352E90 (IoAllocateIrpEx.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1407D7750 (FsRtlCancellableWaitForMultipleObjects.c)
 *     FsRtlpFreeMdlChain @ 0x14093BF98 (FsRtlpFreeMdlChain.c)
 */

__int64 __fastcall FsRtlSetKernelEaFile(PFILE_OBJECT FileObject, void *a2, int a3)
{
  IRP *v6; // rbx
  __int64 v7; // rdx
  PSLIST_ENTRY v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int Status; // edi
  struct _MDL *MdlAddress; // rcx
  PIRP Irp; // [rsp+30h] [rbp-28h]
  struct _KEVENT Object; // [rsp+38h] [rbp-20h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0LL;
  memset(&Object, 0, sizeof(Object));
  KeInitializeEvent(&Object, NotificationEvent, 0);
  if ( (FileObject->Flags & 0x800) != 0 )
  {
    Status = -1073741808;
  }
  else
  {
    DeviceObject = IoGetRelatedDeviceObject(FileObject);
    LOBYTE(v7) = DeviceObject->StackSize;
    v8 = IoAllocateIrpEx((__int64)DeviceObject, v7, 0LL);
    v6 = (IRP *)v8;
    Irp = (PIRP)v8;
    if ( v8 )
    {
      v9 = (__int64 *)(&v8[11].Next + 1);
      v10 = *((_QWORD *)&v8[11].Next + 1);
      *(_WORD *)(v10 - 72) = 1032;
      *(_QWORD *)(v10 - 24) = FileObject;
      v6->UserBuffer = a2;
      *(_DWORD *)(v10 - 64) = a3;
      v6 = Irp;
      Irp->Tail.Overlay.Thread = KeGetCurrentThread();
      Irp->Flags = 4;
      Irp->RequestorMode = 0;
      v11 = *v9;
      *(_QWORD *)(v11 - 16) = CmpCompleteFlushAndPurgeIrp;
      *(_QWORD *)(v11 - 8) = &Object;
      *(_BYTE *)(v11 - 69) = 0;
      *(_BYTE *)(v11 - 69) = 64;
      *(_BYTE *)(v11 - 69) = -64;
      *(_BYTE *)(v11 - 69) = -32;
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
    }
    else
    {
      Status = -1073741670;
    }
  }
  if ( v6 )
  {
    MdlAddress = v6->MdlAddress;
    if ( MdlAddress )
    {
      FsRtlpFreeMdlChain(MdlAddress);
      v6->MdlAddress = 0LL;
    }
    IoFreeIrp(v6);
  }
  return Status;
}
