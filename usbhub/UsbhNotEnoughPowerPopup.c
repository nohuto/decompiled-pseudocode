/*
 * XREFs of UsbhNotEnoughPowerPopup @ 0x1C004B420
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhGetPortData @ 0x1C0019550 (UsbhGetPortData.c)
 *     UsbhBuildWmiConnectionNotification @ 0x1C0048DC4 (UsbhBuildWmiConnectionNotification.c)
 */

int __fastcall UsbhNotEnoughPowerPopup(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  _DWORD *v4; // rax
  _DWORD *EventData; // rbx
  __int64 PortData; // rax

  Log((__int64)DeviceObject, 128, 1850758994, a2, 0LL);
  FdoExt((__int64)DeviceObject);
  v4 = (_DWORD *)UsbhBuildWmiConnectionNotification((__int64)DeviceObject, *(_WORD *)(a2 + 20));
  EventData = v4;
  if ( v4 )
  {
    *v4 = 2;
    PortData = UsbhGetPortData((__int64)DeviceObject, *(_WORD *)(a2 + 20));
    if ( PortData )
      EventData[4] = *(_DWORD *)(PortData + 432);
    Log((__int64)DeviceObject, 128, 2003659088, a2, (__int64)EventData);
    LODWORD(v4) = WmiFireEvent(DeviceObject, &GUID_USB_WMI_STD_NOTIFICATION, 0, 0x18u, EventData);
  }
  return (int)v4;
}
