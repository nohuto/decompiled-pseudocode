/*
 * XREFs of UsbhFdoReturnDeviceBusInfo @ 0x1C0030DA8
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0015370 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C001BC4C (UsbhDecPdoIoCount.c)
 *     UsbhGetDeviceBusInfo @ 0x1C002BA9C (UsbhGetDeviceBusInfo.c)
 *     WPP_RECORDER_SF_q @ 0x1C002EA5C (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall UsbhFdoReturnDeviceBusInfo(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  int DeviceBusInfo; // eax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1u,
      0xAu,
      (__int64)&WPP_6755297163953fe01245bafdfc38d5a5_Traceguids,
      a2);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  PdoExt(a2);
  DeviceBusInfo = UsbhGetDeviceBusInfo(a1, a2, CurrentStackLocation->Parameters.Create.SecurityContext, 0x10u);
  a3->IoStatus.Status = DeviceBusInfo;
  LODWORD(CurrentStackLocation) = DeviceBusInfo;
  IofCompleteRequest(a3, 0);
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  return (unsigned int)CurrentStackLocation;
}
