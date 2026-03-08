/*
 * XREFs of Usbh_BS_BusStop @ 0x1C0031AE0
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x1C001CF30 (UsbhDispatch_BusEvent.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhReleaseBusStateLock @ 0x1C001D7C0 (UsbhReleaseBusStateLock.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1C003AD1C (Usbh_BusRemove_PdoEvent.c)
 */

__int64 __fastcall Usbh_BS_BusStop(struct _DEVICE_OBJECT *a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  unsigned int v6; // edi
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx

  v3 = a3;
  FdoExt((__int64)a1);
  FdoExt(*(_QWORD *)(a2 + 8));
  v6 = *(_DWORD *)(a2 + 80);
  Log((__int64)a1, 2048, 1651725140, a2, v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xBu,
      (__int64)&WPP_c14d5bcd548e31c8cc373c847eff1ef0_Traceguids,
      v3);
  if ( (int)v3 > 7 )
  {
    v10 = v3 - 8;
    if ( !v10 )
      return UsbhReleaseBusStateLock(a1, a2, v6);
    v11 = v10 - 1;
    if ( !v11 )
    {
LABEL_17:
      v6 = 4;
      return UsbhReleaseBusStateLock(a1, a2, v6);
    }
    if ( v11 != 3 )
      return UsbhReleaseBusStateLock(a1, a2, v6);
    Usbh_BusRemove_PdoEvent(*(_QWORD *)(a2 + 8), a2);
LABEL_16:
    v6 = 2;
    return UsbhReleaseBusStateLock(a1, a2, v6);
  }
  if ( (_DWORD)v3 == 7 )
    return UsbhReleaseBusStateLock(a1, a2, v6);
  v7 = v3 - 2;
  if ( !v7 )
  {
    v6 = 6;
    return UsbhReleaseBusStateLock(a1, a2, v6);
  }
  v8 = v7 - 1;
  if ( !v8 )
    goto LABEL_16;
  v9 = v8 - 1;
  if ( !v9 )
    goto LABEL_17;
  if ( v9 == 1 )
    v6 = 3;
  return UsbhReleaseBusStateLock(a1, a2, v6);
}
