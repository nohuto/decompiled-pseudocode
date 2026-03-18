/*
 * XREFs of UsbhDriverOvercurrentResetWorker @ 0x1C0030670
 * Callers:
 *     <none>
 * Callees:
 *     UsbhReferenceListAdd @ 0x1C0001AE8 (UsbhReferenceListAdd.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C0016CA0 (UsbhGetPortData.c)
 *     UsbhReferenceListRemove @ 0x1C001B88C (UsbhReferenceListRemove.c)
 *     UsbhDeviceOvercurrentPopup @ 0x1C00305A4 (UsbhDeviceOvercurrentPopup.c)
 *     Usbh_OvercurrentDerefHubBusy @ 0x1C0030C60 (Usbh_OvercurrentDerefHubBusy.c)
 *     Usbh__TestPoint__Ulong @ 0x1C0030D10 (Usbh__TestPoint__Ulong.c)
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
