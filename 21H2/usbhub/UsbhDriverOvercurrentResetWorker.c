/*
 * XREFs of UsbhDriverOvercurrentResetWorker @ 0x1C002F2A0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C000F370 (UsbhGetPortData.c)
 *     UsbhReferenceListAdd @ 0x1C001AD54 (UsbhReferenceListAdd.c)
 *     UsbhReferenceListRemove @ 0x1C001DCEC (UsbhReferenceListRemove.c)
 *     UsbhDeviceOvercurrentPopup @ 0x1C002F1D4 (UsbhDeviceOvercurrentPopup.c)
 *     Usbh_OvercurrentDerefHubBusy @ 0x1C002F890 (Usbh_OvercurrentDerefHubBusy.c)
 *     Usbh__TestPoint__Ulong @ 0x1C002F940 (Usbh__TestPoint__Ulong.c)
 */

void __fastcall UsbhDriverOvercurrentResetWorker(PDEVICE_OBJECT DeviceObject, unsigned int a2, __int64 a3)
{
  __int64 PortData; // rax

  FdoExt((__int64)DeviceObject);
  if ( (int)Usbh__TestPoint__Ulong(DeviceObject, 8LL, 0LL, a2) < 0
    || (int)UsbhReferenceListAdd((__int64)DeviceObject, a3, 1466196847) < 0 )
  {
    PortData = UsbhGetPortData((__int64)DeviceObject, a2);
    Usbh_OvercurrentDerefHubBusy(DeviceObject, PortData, 0LL);
  }
  else
  {
    UsbhDeviceOvercurrentPopup(DeviceObject, a2);
    UsbhReferenceListRemove((__int64)DeviceObject, a3);
  }
}
