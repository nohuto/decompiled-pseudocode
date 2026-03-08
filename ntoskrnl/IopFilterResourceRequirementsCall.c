/*
 * XREFs of IopFilterResourceRequirementsCall @ 0x1406F6A4C
 * Callers:
 *     IopQueryDeviceResources @ 0x1406F6440 (IopQueryDeviceResources.c)
 * Callees:
 *     IoAllocateIrp @ 0x140208CF0 (IoAllocateIrp.c)
 *     IovUtilWatermarkIrp @ 0x1402092B8 (IovUtilWatermarkIrp.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x140312720 (IopQueueThreadIrp.c)
 *     IoGetAttachedDeviceReference @ 0x140337BB0 (IoGetAttachedDeviceReference.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 */

__int64 __fastcall IopFilterResourceRequirementsCall(struct _DEVICE_OBJECT *a1, ULONG_PTR a2, _QWORD *a3)
{
  PDEVICE_OBJECT AttachedDeviceReference; // rsi
  PIRP Irp; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v8; // ebx
  __int128 v10; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  v10 = 0LL;
  AttachedDeviceReference = IoGetAttachedDeviceReference(a1);
  Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
  if ( Irp )
  {
    IovUtilWatermarkIrp();
    if ( a2 )
    {
      Irp->IoStatus.Status = 0;
      *((_QWORD *)&v10 + 1) = a2;
      Irp->IoStatus.Information = a2;
    }
    else
    {
      LODWORD(v10) = -1073741637;
      Irp->IoStatus.Status = -1073741637;
    }
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    Irp->UserIosb = (PIO_STATUS_BLOCK)&v10;
    Irp->UserEvent = &Event;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    IopQueueThreadIrp((__int64)Irp);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 3355;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = a2;
    v8 = IofCallDriver(AttachedDeviceReference, Irp);
    if ( v8 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v8 = v10;
    }
    *a3 = *((_QWORD *)&v10 + 1);
  }
  else
  {
    v8 = -1073741670;
  }
  ObfDereferenceObject(AttachedDeviceReference);
  return v8;
}
