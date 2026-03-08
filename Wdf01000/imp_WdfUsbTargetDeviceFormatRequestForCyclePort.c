/*
 * XREFs of imp_WdfUsbTargetDeviceFormatRequestForCyclePort @ 0x1C00574C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FormatCycleRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C005D4FC (-FormatCycleRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@@Z.c)
 */

int __fastcall imp_WdfUsbTargetDeviceFormatRequestForCyclePort(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        WDFREQUEST__ *Request)
{
  FxUsbDevice *pUsbDevice; // [rsp+30h] [rbp+8h] BYREF
  FxRequest *pRequest; // [rsp+48h] [rbp+20h] BYREF

  pUsbDevice = 0LL;
  pRequest = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice);
  FxObjectHandleGetPtr(pUsbDevice->m_Globals, (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  return FxUsbDevice::FormatCycleRequest(pUsbDevice, pRequest);
}
