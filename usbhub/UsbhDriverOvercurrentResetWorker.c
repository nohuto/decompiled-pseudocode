/*
 * XREFs of UsbhDriverOvercurrentResetWorker @ 0x1C002FC70
 * Callers:
 *     <none>
 * Callees:
 *     UsbhReferenceListRemove @ 0x1C00018CC (UsbhReferenceListRemove.c)
 *     UsbhReferenceListAdd @ 0x1C0002650 (UsbhReferenceListAdd.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C0019550 (UsbhGetPortData.c)
 *     UsbhDeviceOvercurrentPopup @ 0x1C002FBA4 (UsbhDeviceOvercurrentPopup.c)
 *     Usbh_OvercurrentDerefHubBusy @ 0x1C0030260 (Usbh_OvercurrentDerefHubBusy.c)
 *     Usbh__TestPoint__Ulong @ 0x1C0030310 (Usbh__TestPoint__Ulong.c)
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
