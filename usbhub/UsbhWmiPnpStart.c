/*
 * XREFs of UsbhWmiPnpStart @ 0x1C004A4D0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhWmiPnpStart(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rbx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xBu,
      (__int64)&WPP_ec4ff3de95383249fcb308d84b12865b_Traceguids);
  v2 = FdoExt((__int64)DeviceObject);
  v2[718] = 6;
  *((_QWORD *)v2 + 360) = &USB_WmiGuidList;
  *((_QWORD *)v2 + 361) = UsbhQueryWmiRegInfo;
  *((_QWORD *)v2 + 362) = UsbhQueryWmiDataBlock;
  *((_QWORD *)v2 + 363) = UsbhSetWmiDataBlock;
  *((_QWORD *)v2 + 365) = UsbhExecuteWmiMethod;
  *((_QWORD *)v2 + 364) = 0LL;
  *((_QWORD *)v2 + 366) = 0LL;
  IoWMIRegistrationControl(DeviceObject, 1u);
  v2[640] |= 2u;
  Log((__int64)DeviceObject, 64, 1098345833, 0LL, 0LL);
  return 0LL;
}
