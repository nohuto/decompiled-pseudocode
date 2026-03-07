__int64 __fastcall UsbhPdoSetD0_Finish(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3)
{
  _DWORD *v6; // rbp
  _DWORD *v7; // rdi
  POWER_STATE v8; // r15d
  __int64 v9; // r8
  _DWORD *v10; // rbx
  KIRQL v11; // dl
  unsigned int v12; // edx
  int v14; // edx
  int v15; // [rsp+80h] [rbp+8h] BYREF

  v15 = 0;
  v6 = PdoExt((__int64)a2);
  v7 = FdoExt(*(_QWORD *)(a1 + 8));
  v8.SystemState = *(_SYSTEM_POWER_STATE *)(*(_QWORD *)(a3 + 184) + 24LL);
  UsbhAcquireFdoPwrLock(*(_QWORD *)(a1 + 8), a1, 126LL, 1852401232LL);
  PdoExt((__int64)a2);
  UsbhSetPdoPowerState(a1, (__int64)a2, v9, 1, 8);
  Log(*(_QWORD *)(a1 + 8), 16, 1884769123, a1, (__int64)a2);
  v6[596] = v7[1054];
  v10 = FdoExt(*(_QWORD *)(a1 + 8));
  FdoExt(*(_QWORD *)(a1 + 8));
  *(_DWORD *)(a1 + 32) = 1734964085;
  v11 = *((_BYTE *)v10 + 5064);
  *((_QWORD *)v10 + 168) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)v10 + 632, v11);
  if ( (v6[355] & 0x100) != 0 )
  {
    v12 = UsbhDisableDeviceForWake(*(_QWORD *)(a1 + 8), a2, &v15);
    if ( (v12 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected(v12) )
      UsbhException(*(_QWORD *)(a1 + 8), *((unsigned __int16 *)v6 + 714), 49, 0, 0, v14, v15, usbfile_pdopwr_c, 842, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
      *((_WORD *)v6 + 714));
  UsbhSet_Pdo_Dx(a2, v8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      13,
      (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
      *((_WORD *)v6 + 714));
  return 0LL;
}
