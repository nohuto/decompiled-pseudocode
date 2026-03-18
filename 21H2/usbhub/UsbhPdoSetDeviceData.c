/*
 * XREFs of UsbhPdoSetDeviceData @ 0x1C0056490
 * Callers:
 *     UsbhPdoPnp_StartDevice @ 0x1C0055CA0 (UsbhPdoPnp_StartDevice.c)
 * Callees:
 *     UsbhDerefPdoDeviceHandle @ 0x1C0003470 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C00036C0 (UsbhRefPdoDeviceHandle.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     Usbh_HubSetDeviceHandleData @ 0x1C0057034 (Usbh_HubSetDeviceHandleData.c)
 */

void __fastcall UsbhPdoSetDeviceData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi

  PdoExt(a2);
  v6 = UsbhRefPdoDeviceHandle(a1, a2, a3, 0x44746573u);
  v7 = v6;
  if ( v6 )
  {
    Log(a1, 32, 1936028740, 0LL, v6);
    Usbh_HubSetDeviceHandleData(a1, v7, a2);
    UsbhDerefPdoDeviceHandle(a1, v7, a3, 0x44746573u);
  }
}
