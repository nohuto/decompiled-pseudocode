/*
 * XREFs of IopGetFileInformation @ 0x14072054C
 * Callers:
 *     IopQueryNameInternal @ 0x140720054 (IopQueryNameInternal.c)
 *     IopGetBasicInformationFile @ 0x140784190 (IopGetBasicInformationFile.c)
 *     IopGraftName @ 0x14087A8D0 (IopGraftName.c)
 *     IopGetRelatedFileName @ 0x140941AE0 (IopGetRelatedFileName.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1403121F0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140312290 (IopAllocateIrpExReturn.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x140312720 (IopQueueThreadIrp.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 */

__int64 __fastcall IopGetFileInformation(struct _FILE_OBJECT *Object, ULONG a2, ULONG a3, struct _IRP *a4, _DWORD *a5)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rsi
  __int64 v10; // rdx
  __int64 Irp; // rax
  IRP *v12; // rbx
  __int64 v13; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v16; // edx
  __int128 v18; // [rsp+30h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  v18 = 0LL;
  ObfReferenceObject(Object);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  LOBYTE(v10) = RelatedDeviceObject->StackSize;
  Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v10, 0LL);
  v12 = (IRP *)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = Object;
    v13 = Irp;
    CurrentThread = KeGetCurrentThread();
    v12->Overlay.AllocationSize.QuadPart = 0LL;
    v12->Tail.Overlay.Thread = CurrentThread;
    v12->UserEvent = &Event;
    v12->UserIosb = (PIO_STATUS_BLOCK)&v18;
    CurrentStackLocation = v12->Tail.Overlay.CurrentStackLocation;
    v12->Flags = 4100;
    v12->RequestorMode = 0;
    CurrentStackLocation[-1].MajorFunction = 5;
    CurrentStackLocation[-1].FileObject = Object;
    v12->Flags |= 0x10u;
    v12->AssociatedIrp.MasterIrp = a4;
    CurrentStackLocation[-1].Parameters.Read.Length = a2;
    CurrentStackLocation[-1].Parameters.Create.Options = a3;
    IopQueueThreadIrp(v13);
    v16 = IofCallDriver(RelatedDeviceObject, v12);
    if ( v16 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v16 = v18;
    }
    *a5 = DWORD2(v18);
    return v16;
  }
  else
  {
    ObfDereferenceObject(Object);
    return 3221225626LL;
  }
}
