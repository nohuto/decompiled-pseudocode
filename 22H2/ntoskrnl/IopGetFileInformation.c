/*
 * XREFs of IopGetFileInformation @ 0x140620E34
 * Callers:
 *     IopGetRelatedFileName @ 0x1405D87C8 (IopGetRelatedFileName.c)
 *     IopGetBasicInformationFile @ 0x140608D48 (IopGetBasicInformationFile.c)
 *     IopQueryNameInternal @ 0x140620924 (IopQueryNameInternal.c)
 *     IopGraftName @ 0x140683164 (IopGraftName.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x1402CB9A0 (IopQueueThreadIrp.c)
 *     IoGetRelatedDeviceObject @ 0x1402D20D0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1402D2170 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x1402D21F0 (IopAllocateIrpExReturn.c)
 *     KeInitializeEvent @ 0x1402D40A0 (KeInitializeEvent.c)
 */

__int64 __fastcall IopGetFileInformation(
        struct _FILE_OBJECT *DmaAdapter,
        ULONG a2,
        ULONG a3,
        struct _IRP *a4,
        _DWORD *a5)
{
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rsi
  __int64 Irp; // rax
  IRP *v11; // rbx
  __int64 v12; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v15; // edx
  __int128 v17; // [rsp+30h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  v17 = 0LL;
  ObfReferenceObject(DmaAdapter);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(DmaAdapter);
  Irp = IopAllocateIrpExReturn();
  v11 = (IRP *)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = DmaAdapter;
    v12 = Irp;
    CurrentThread = KeGetCurrentThread();
    v11->Overlay.AllocationSize.QuadPart = 0LL;
    v11->Tail.Overlay.Thread = CurrentThread;
    v11->UserEvent = &Event;
    v11->UserIosb = (PIO_STATUS_BLOCK)&v17;
    CurrentStackLocation = v11->Tail.Overlay.CurrentStackLocation;
    v11->Flags = 4100;
    v11->RequestorMode = 0;
    CurrentStackLocation[-1].MajorFunction = 5;
    CurrentStackLocation[-1].FileObject = DmaAdapter;
    v11->Flags |= 0x10u;
    v11->AssociatedIrp.MasterIrp = a4;
    CurrentStackLocation[-1].Parameters.Read.Length = a2;
    CurrentStackLocation[-1].Parameters.Create.Options = a3;
    IopQueueThreadIrp(v12);
    v15 = IofCallDriver(RelatedDeviceObject, v11);
    if ( v15 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v15 = v17;
    }
    *a5 = DWORD2(v17);
    return v15;
  }
  else
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)DmaAdapter);
    return 3221225626LL;
  }
}
