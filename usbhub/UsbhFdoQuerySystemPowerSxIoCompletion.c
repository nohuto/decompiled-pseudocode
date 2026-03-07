__int64 __fastcall UsbhFdoQuerySystemPowerSxIoCompletion(PDEVICE_OBJECT DeviceObject, PIRP Irp, PVOID Context)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  _DWORD *v6; // rax
  __int64 LowPart; // rbx
  _DWORD *v8; // rbp
  _DWORD *v9; // rax
  NTSTATUS v10; // eax
  unsigned int v11; // ebx

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v6 = FdoExt((__int64)DeviceObject);
  LowPart = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v8 = v6;
  Log((__int64)DeviceObject, 16, 1901295731, LowPart, (__int64)Irp);
  v9 = FdoExt((__int64)DeviceObject);
  v10 = PoRequestPowerIrp(
          DeviceObject,
          3u,
          (POWER_STATE)((v9[LowPart + 1252] != 3) + 3),
          (PREQUEST_POWER_COMPLETE)UsbhFdoQueryDevicePowerDxPoCompletion,
          Irp,
          0LL);
  v11 = v10;
  if ( v10 == 259 )
    return 3221225494LL;
  Irp->IoStatus.Status = v10;
  UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 1273LL);
  IofCompleteRequest(Irp, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 306), Irp, 0x20u);
  return v11;
}
