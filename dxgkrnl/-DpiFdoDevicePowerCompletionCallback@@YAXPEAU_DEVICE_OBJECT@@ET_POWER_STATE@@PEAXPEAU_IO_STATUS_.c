void __fastcall DpiFdoDevicePowerCompletionCallback(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        IRP *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  struct _IO_REMOVE_LOCK *DeviceExtension; // rdi

  DeviceExtension = (struct _IO_REMOVE_LOCK *)DeviceObject->DeviceExtension;
  if ( IoStatus->Status >= 0 )
    LODWORD(DeviceExtension[8].Common.RemoveEvent.Header.WaitListHead.Blink) = Context->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  PoStartNextPowerIrp(Context);
  Context->IoStatus.Status = IoStatus->Status;
  IofCompleteRequest(Context, 1);
  IoReleaseRemoveLockEx(DeviceExtension + 2, Context, 0x20u);
}
