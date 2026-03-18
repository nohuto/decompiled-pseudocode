/*
 * XREFs of UsbhFdoPnp_StartDevice @ 0x1C0043C20
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C002EEF4 (WPP_RECORDER_SF_.c)
 *     Usbh_FDO_Pnp_State @ 0x1C0044D48 (Usbh_FDO_Pnp_State.c)
 *     UsbhException @ 0x1C004B478 (UsbhException.c)
 */

__int64 __fastcall UsbhFdoPnp_StartDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PDEVICE_OBJECT *v4; // rbp
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v6; // rax
  int Status; // edi
  _DWORD *v8; // rax
  int v10; // [rsp+48h] [rbp-30h]
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  v4 = (PDEVICE_OBJECT *)FdoExt((__int64)DeviceObject);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x15u,
      (__int64)&WPP_bd192adfbaab37968b6512a601d84f30_Traceguids);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( IoSetCompletionRoutineEx(DeviceObject, Irp, (PIO_COMPLETION_ROUTINE)UsbhDeferIrpCompletion, &Event, 1u, 1u, 1u) < 0 )
  {
    v6 = Irp->Tail.Overlay.CurrentStackLocation;
    v6[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhDeferIrpCompletion;
    v6[-1].Context = &Event;
    v6[-1].Control = -32;
  }
  Log((__int64)DeviceObject, 2, 1937011287, 0LL, (__int64)Irp);
  if ( IofCallDriver(v4[151], Irp) == 259 )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  Status = Irp->IoStatus.Status;
  if ( (Status & 0xC0000000) == 0xC0000000 )
  {
    LOBYTE(v10) = 0;
    UsbhException((int)DeviceObject, 0, 57, 0, 0, Status, 0, usbfile_pnp_c, 3081, v10);
  }
  else
  {
    v8 = FdoExt((__int64)DeviceObject);
    Status = Usbh_FDO_Pnp_State(v8 + 346, 4LL);
  }
  v4[638] = (PDEVICE_OBJECT)MEMORY[0xFFFFF78000000014];
  Log((__int64)DeviceObject, 2, 1398035028, 0LL, Status);
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)Status;
}
