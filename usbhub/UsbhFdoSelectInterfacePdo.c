/*
 * XREFs of UsbhFdoSelectInterfacePdo @ 0x1C002AF54
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0015370 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 */

NTSTATUS __fastcall UsbhFdoSelectInterfacePdo(PDEVICE_OBJECT DeviceObject, PVOID Context, PIRP Irp)
{
  PDEVICE_OBJECT *v6; // rbp
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  _IO_STACK_LOCATION *v8; // rax

  v6 = (PDEVICE_OBJECT *)FdoExt((__int64)DeviceObject);
  PdoExt((__int64)Context);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( IoSetCompletionRoutineEx(DeviceObject, Irp, UsbhSelectConfigOrInterfaceComplete, Context, 1u, 1u, 1u) < 0 )
  {
    v8 = Irp->Tail.Overlay.CurrentStackLocation;
    v8[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhSelectConfigOrInterfaceComplete;
    v8[-1].Context = Context;
    v8[-1].Control = -32;
  }
  return IofCallDriver(v6[152], Irp);
}
