__int64 __fastcall UsbhPdoPnp_QueryPnpDeviceState(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _DWORD *v4; // rsi
  unsigned int Status; // ebx
  int v7; // [rsp+28h] [rbp-10h]

  v4 = PdoExt((__int64)DeviceObject);
  Status = 0;
  if ( v4[283] )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v7 = v4[283];
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0xFu,
        (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids,
        v7);
    }
    if ( v4[705] )
      UsbhPdo_ReportPnPFailureProblem(DeviceObject);
    Irp->IoStatus.Information |= (unsigned int)v4[283];
    Irp->IoStatus.Status = 0;
  }
  else
  {
    Status = Irp->IoStatus.Status;
  }
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return Status;
}
