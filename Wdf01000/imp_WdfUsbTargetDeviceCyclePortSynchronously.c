int __fastcall imp_WdfUsbTargetDeviceCyclePortSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice)
{
  int result; // eax
  FxUsbDevice *pUsbDevice; // [rsp+30h] [rbp+8h] BYREF

  pUsbDevice = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice);
  result = FxVerifierCheckIrqlLevel(pUsbDevice->m_Globals, 0);
  if ( result >= 0 )
    return FxUsbDevice::CyclePort(pUsbDevice);
  return result;
}
