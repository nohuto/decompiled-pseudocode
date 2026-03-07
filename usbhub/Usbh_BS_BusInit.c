__int64 __fastcall Usbh_BS_BusInit(struct _DEVICE_OBJECT *a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  unsigned int v6; // edi

  v4 = a3;
  FdoExt(*(_QWORD *)(a2 + 8));
  v6 = *(_DWORD *)(a2 + 80);
  Log((__int64)a1, 2048, 1651722574, a2, v4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xAu,
      (__int64)&WPP_c14d5bcd548e31c8cc373c847eff1ef0_Traceguids,
      v4);
  if ( (_DWORD)v4 == 1 )
    v6 = 2;
  return UsbhReleaseBusStateLock(a1, a2, v6);
}
