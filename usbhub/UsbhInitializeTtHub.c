/*
 * XREFs of UsbhInitializeTtHub @ 0x1C002D268
 * Callers:
 *     UsbhInitialize @ 0x1C002CE20 (UsbhInitialize.c)
 *     UsbhReinitialize @ 0x1C002D73C (UsbhReinitialize.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     Usbh_HubDerefDeviceHandle @ 0x1C002E238 (Usbh_HubDerefDeviceHandle.c)
 *     Usbh_HubInitialize20Hub @ 0x1C002E2F4 (Usbh_HubInitialize20Hub.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     UsbhGetDeviceHandle @ 0x1C0038178 (UsbhGetDeviceHandle.c)
 */

__int64 __fastcall UsbhInitializeTtHub(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbx
  unsigned int v5; // esi
  __int64 DeviceHandle; // rbp
  unsigned int v8; // ebx

  v4 = FdoExt(a1);
  v5 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      30,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids);
  DeviceHandle = UsbhGetDeviceHandle(a1, a2);
  if ( !DeviceHandle )
    return 3221225473LL;
  if ( (v4[640] & 0x80u) != 0 )
    v5 = *((unsigned __int8 *)FdoExt(a1) + 2938);
  v8 = Usbh_HubInitialize20Hub(a1, DeviceHandle, v5);
  Log(a1, 8, 1768838228, (int)v8, v5);
  Usbh_HubDerefDeviceHandle(a1, DeviceHandle, a2, 1212445810LL);
  return v8;
}
