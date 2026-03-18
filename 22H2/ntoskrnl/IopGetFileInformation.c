/*
 * XREFs of IopGetFileInformation @ 0x14075B36C
 * Callers:
 *     IopQueryNameInternal @ 0x14075AE74 (IopQueryNameInternal.c)
 *     IopGetBasicInformationFile @ 0x1407D37EC (IopGetBasicInformationFile.c)
 *     IopGraftName @ 0x14087F9E8 (IopGraftName.c)
 *     IopGetRelatedFileName @ 0x140944B00 (IopGetRelatedFileName.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x14022ED80 (IopQueueThreadIrp.c)
 *     IofCallDriver @ 0x14022EF10 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x14022EF90 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14022F530 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233C20 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1402AF840 (KeInitializeEvent.c)
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
