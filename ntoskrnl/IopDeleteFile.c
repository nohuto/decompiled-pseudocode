/*
 * XREFs of IopDeleteFile @ 0x1407BAF80
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     IopDeleteFileObjectExtension @ 0x140298CFC (IopDeleteFileObjectExtension.c)
 *     IopDecrementDeviceObjectRefCount @ 0x1402F0E78 (IopDecrementDeviceObjectRefCount.c)
 *     IoFreeIrp @ 0x14030EC00 (IoFreeIrp.c)
 *     IoGetAttachedDevice @ 0x14030EE00 (IoGetAttachedDevice.c)
 *     IopDequeueIrpFromThread @ 0x14030F160 (IopDequeueIrpFromThread.c)
 *     IopAllocateIrpMustSucceed @ 0x14030F2F0 (IopAllocateIrpMustSucceed.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x14030F5C0 (IopDecrementDeviceObjectRef.c)
 *     IopDecrementVpbRefCount @ 0x14030F780 (IopDecrementVpbRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14030F910 (IopIncrementDeviceObjectRefCount.c)
 *     IoGetRelatedDeviceObject @ 0x1403121F0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x140312720 (IopQueueThreadIrp.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     FsRtlPTeardownPerFileObjectContexts @ 0x1406B1CE4 (FsRtlPTeardownPerFileObjectContexts.c)
 *     IopCloseFile @ 0x1407BACE0 (IopCloseFile.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall IopDeleteFile(ULONG_PTR BugCheckParameter1)
{
  struct _DEVICE_OBJECT *v2; // rcx
  ULONG_PTR v3; // rsi
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v5; // r15
  IRP *MustSucceed; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v8; // rbp
  ULONG_PTR v9; // rcx
  char v10; // r14
  ULONG_PTR v11; // rcx
  __int128 v12; // [rsp+30h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-38h] BYREF

  v2 = *(struct _DEVICE_OBJECT **)(BugCheckParameter1 + 8);
  v3 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v12 = 0LL;
  if ( v2 )
  {
    if ( (*(_DWORD *)(BugCheckParameter1 + 80) & 0x800) != 0 )
      AttachedDevice = IoGetAttachedDevice(v2);
    else
      AttachedDevice = IoGetRelatedDeviceObject((PFILE_OBJECT)BugCheckParameter1);
    v5 = AttachedDevice;
    if ( (*(_DWORD *)(BugCheckParameter1 + 80) & 0x240000) == 0 )
      IopCloseFile(0LL, (struct _FILE_OBJECT *)BugCheckParameter1, 1LL, 1LL);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    if ( (*(_DWORD *)(BugCheckParameter1 + 80) & 0x4000000) == 0 )
      KeResetEvent((PRKEVENT)(BugCheckParameter1 + 152));
    MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)v5, (unsigned __int8)v5->StackSize);
    CurrentStackLocation = MustSucceed->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 2;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)BugCheckParameter1;
    MustSucceed->UserIosb = (PIO_STATUS_BLOCK)&v12;
    MustSucceed->UserEvent = &Event;
    MustSucceed->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)BugCheckParameter1;
    MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
    MustSucceed->AssociatedIrp.MasterIrp = 0LL;
    MustSucceed->Flags = 1028;
    IopQueueThreadIrp((__int64)MustSucceed);
    v8 = *(_QWORD *)(BugCheckParameter1 + 16);
    if ( v8 )
    {
      if ( (*(_DWORD *)(BugCheckParameter1 + 80) & 0x800) == 0 )
      {
        IopDecrementVpbRefCount(*(_QWORD *)(BugCheckParameter1 + 16), 1);
        v3 = *(_QWORD *)(v8 + 8);
        if ( v3 )
          IopIncrementDeviceObjectRefCount(*(_QWORD *)(v8 + 8), 1);
      }
    }
    v9 = *(_QWORD *)(BugCheckParameter1 + 8);
    if ( (*(_DWORD *)(v9 + 48) & 0x400) != 0 )
    {
      IopDecrementDeviceObjectRefCount(v9, 1);
      v10 = 1;
    }
    else
    {
      v10 = 0;
    }
    if ( IofCallDriver(v5, MustSucceed) == 259 )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
    IopDequeueIrpFromThread(MustSucceed);
    IoFreeIrp(MustSucceed);
    if ( *(_WORD *)(BugCheckParameter1 + 88) )
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 96), 0);
    v11 = *(_QWORD *)(BugCheckParameter1 + 176);
    if ( v11 )
    {
      if ( *(_QWORD *)(v11 + 16) )
        KeBugCheckEx(0x18u, BugCheckParameter1, v11, 0x80uLL, *(_QWORD *)(v11 + 16));
      ObfDereferenceObject(*(PVOID *)v11);
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 176), 0);
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 208) )
      FsRtlPTeardownPerFileObjectContexts(BugCheckParameter1);
    if ( !v10 )
      IopDecrementDeviceObjectRef(
        *(_QWORD *)(BugCheckParameter1 + 8),
        0,
        (unsigned __int8)~*(_BYTE *)(BugCheckParameter1 - 21) >> 7);
    if ( v3 && v8 )
      IopDecrementDeviceObjectRef(v3, 0, (unsigned __int8)~*(_BYTE *)(BugCheckParameter1 - 21) >> 7);
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 208) )
    IopDeleteFileObjectExtension(BugCheckParameter1);
}
