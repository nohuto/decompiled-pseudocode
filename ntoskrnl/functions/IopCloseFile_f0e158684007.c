void __fastcall IopCloseFile(__int64 a1, struct _FILE_OBJECT *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 FileObjectExtension; // r15
  __int64 v8; // rdi
  int v9; // r14d
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v11; // rbp
  int v12; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rax
  IRP *MustSucceed; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _KTHREAD *v17; // rax
  _QWORD *v18; // r8
  __int64 v19; // rcx
  bool v20; // zf
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  struct _DEVICE_OBJECT *v22; // rsi
  PFAST_IO_DISPATCH FastIoDispatch; // rbp
  struct _KTHREAD *v24; // rax
  __int64 v25; // rax
  __int64 (__fastcall *FastIoUnlockAll)(struct _FILE_OBJECT *, _KPROCESS *, __int128 *, struct _DEVICE_OBJECT *); // rbp
  void *v27; // rdi
  char v28; // r15
  IRP *v29; // rdi
  struct _IO_STACK_LOCATION *v30; // rcx
  __int64 v31; // [rsp+30h] [rbp-58h] BYREF
  __int128 v32; // [rsp+38h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-40h] BYREF
  __int64 v34; // [rsp+A0h] [rbp+18h] BYREF

  v4 = a4;
  FileObjectExtension = 0LL;
  v8 = 0LL;
  v9 = 0;
  memset(&Event, 0, sizeof(Event));
  if ( a3 == 1 )
  {
    if ( a2->FileObjectExtension )
    {
      FileObjectExtension = IopGetFileObjectExtension((__int64)a2, 2, 0LL);
      v8 = IopGetFileObjectExtension(v19, (int)v18 + 4, v18);
    }
    if ( v4 == 1 )
    {
      if ( (a2->Flags & 0x800) != 0 )
        AttachedDevice = IoGetAttachedDevice(a2->DeviceObject);
      else
        AttachedDevice = IoGetRelatedDeviceObject(a2);
      v11 = AttachedDevice;
      v12 = a2->Flags | 0x40000;
      a2->Flags = v12;
      if ( a1 && (v12 & 2) != 0 )
      {
        v9 = 1;
        while ( 1 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v14 = KeAbPreAcquire((__int64)&a2->Lock, 0LL);
          if ( !_InterlockedExchange((volatile __int32 *)&a2->Busy, 1) )
            break;
          if ( !(unsigned int)IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)&a2->Type, 0, 0, v14, &v31) )
            goto LABEL_14;
        }
        if ( v14 )
          *(_BYTE *)(v14 + 18) = 1;
        ObfReferenceObject(a2);
      }
LABEL_14:
      if ( v8 )
        IopFreeBandwidthContract(a2);
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      if ( (a2->Flags & 0x4000000) == 0 )
        KeResetEvent(&a2->Event);
      MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)v11, (unsigned __int8)v11->StackSize);
      MustSucceed->Tail.Overlay.OriginalFileObject = a2;
      MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
      MustSucceed->UserIosb = &MustSucceed->IoStatus;
      CurrentStackLocation = MustSucceed->Tail.Overlay.CurrentStackLocation;
      MustSucceed->RequestorMode = 0;
      MustSucceed->UserEvent = &Event;
      MustSucceed->Overlay.AllocationSize.QuadPart = 0LL;
      MustSucceed->Flags = 1028;
      CurrentStackLocation[-1].MajorFunction = 18;
      CurrentStackLocation[-1].FileObject = a2;
      IopQueueThreadIrp((__int64)MustSucceed);
      v17 = KeGetCurrentThread();
      ++v17->OtherOperationCount;
      __incgsdword(0x2EE4u);
      if ( IofCallDriver(v11, MustSucceed) == 259 )
        KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
      MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
      IopDequeueIrpFromThread(MustSucceed);
      IoFreeIrp(MustSucceed);
      if ( v9 )
        IopReleaseFileObjectLock((volatile __int32 *)&a2->Type);
      IopCancelIrpsInFileObjectList((__int64)a2, a1, 0LL, 0LL, 1, 1);
      for ( ; FileObjectExtension; FileObjectExtension = *(_QWORD *)(FileObjectExtension + 40) )
      {
        if ( *(_QWORD *)(FileObjectExtension + 32) == a1 )
          IopCleanupFileObjectIosbRange(FileObjectExtension);
      }
      if ( a2->FileObjectExtension )
        IopCloseFileObjectExtension((__int64)a2);
    }
    else
    {
      IopCleanupProcessResources((__int64)a2, a1, FileObjectExtension);
      if ( (int)IopSetLockOperationProcess((__int64)a2, a1, 1) >= 0 )
      {
        v20 = (a2->Flags & 0x800) == 0;
        v32 = 0LL;
        if ( v20 )
          RelatedDeviceObject = IoGetRelatedDeviceObject(a2);
        else
          RelatedDeviceObject = IoGetAttachedDevice(a2->DeviceObject);
        v22 = RelatedDeviceObject;
        FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
        if ( (a2->Flags & 2) != 0 && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) == 0 )
        {
          v9 = 1;
          while ( 1 )
          {
            v24 = KeGetCurrentThread();
            --v24->KernelApcDisable;
            v25 = KeAbPreAcquire((__int64)&a2->Lock, 0LL);
            if ( !_InterlockedExchange((volatile __int32 *)&a2->Busy, 1) )
              break;
            if ( !(unsigned int)IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)&a2->Type, 0, 0, v25, &v34) )
              goto LABEL_40;
          }
          if ( v25 )
            *(_BYTE *)(v25 + 18) = 1;
          ObfReferenceObject(a2);
        }
LABEL_40:
        if ( !FastIoDispatch )
          goto LABEL_49;
        FastIoUnlockAll = (__int64 (__fastcall *)(struct _FILE_OBJECT *, _KPROCESS *, __int128 *, struct _DEVICE_OBJECT *))FastIoDispatch->FastIoUnlockAll;
        if ( !FastIoUnlockAll )
          goto LABEL_49;
        if ( (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(v22->DriverObject) )
          v27 = (void *)VfFastIoSnapState();
        else
          v27 = 0LL;
        v28 = FastIoUnlockAll(a2, KeGetCurrentThread()->ApcState.Process, &v32, v22);
        if ( v27 )
          VfFastIoCheckState(v27);
        if ( !v28 )
        {
LABEL_49:
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          if ( (a2->Flags & 0x4000000) == 0 )
            KeResetEvent(&a2->Event);
          v29 = (IRP *)IopAllocateIrpMustSucceed((__int64)v22, (unsigned __int8)v22->StackSize);
          v29->Tail.Overlay.OriginalFileObject = a2;
          v29->Tail.Overlay.Thread = KeGetCurrentThread();
          v29->UserIosb = &v29->IoStatus;
          v30 = v29->Tail.Overlay.CurrentStackLocation;
          v29->RequestorMode = 0;
          v29->UserEvent = &Event;
          v29->Flags = 4;
          v29->Overlay.AllocationSize.QuadPart = 0LL;
          *(_WORD *)&v30[-1].MajorFunction = 785;
          v30[-1].FileObject = a2;
          ObfReferenceObject(a2);
          IopQueueThreadIrp((__int64)v29);
          if ( IofCallDriver(v22, v29) == 259 )
            KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
        }
        if ( v9 == 1 )
          IopReleaseFileObjectLock((volatile __int32 *)&a2->Type);
      }
    }
  }
}
