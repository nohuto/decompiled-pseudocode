/*
 * XREFs of imp_WdfUsbTargetDeviceWdmGetConfigurationHandle @ 0x1C0059660
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

void *__fastcall imp_WdfUsbTargetDeviceWdmGetConfigurationHandle(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice)
{
  FxUsbDevice *pUsbDevice; // [rsp+30h] [rbp+8h] BYREF

  pUsbDevice = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice);
  return pUsbDevice->m_ConfigHandle;
}
