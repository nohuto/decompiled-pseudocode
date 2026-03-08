/*
 * XREFs of USBDInternal_BuildandSendIoctlSynchronously @ 0x1C008781C
 * Callers:
 *     USBD_QueryUsbCapability @ 0x1C00882BC (USBD_QueryUsbCapability.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall USBDInternal_BuildandSendIoctlSynchronously(
        _DEVICE_OBJECT *DeviceObject,
        _DEVICE_OBJECT *TargetDeviceObject,
        _IRP::<unnamed_type_AssociatedIrp> SystemBuffer,
        unsigned __int64 Argument1)
{
  PIRP Irp; // rax
  _IRP *v9; // rdi
  unsigned int Status; // ebx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v12; // rax
  _KEVENT event; // [rsp+40h] [rbp-28h] BYREF

  memset(&event, 0, sizeof(event));
  KeInitializeEvent(&event, NotificationEvent, 0);
  Irp = IoAllocateIrp(TargetDeviceObject->StackSize, 0);
  v9 = Irp;
  if ( Irp )
  {
    Irp->AssociatedIrp = SystemBuffer;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = Argument1;
    CurrentStackLocation[-1].MajorFunction = 15;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 4788299;
    if ( IoSetCompletionRoutineEx(DeviceObject, v9, USBD_SyncCompletionRoutine, &event, 1u, 1u, 1u) < 0 )
    {
      v12 = v9->Tail.Overlay.CurrentStackLocation;
      v12[-1].CompletionRoutine = USBD_SyncCompletionRoutine;
      v12[-1].Context = &event;
      v12[-1].Control = -32;
    }
    Status = IofCallDriver(TargetDeviceObject, v9);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&event, Executive, 0, 0, 0LL);
      Status = v9->IoStatus.Status;
    }
    IoFreeIrp(v9);
  }
  else
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "Failed to allocate Irp for Target Device Object 0x%p\n", TargetDeviceObject);
    return (unsigned int)-1073741670;
  }
  return Status;
}
