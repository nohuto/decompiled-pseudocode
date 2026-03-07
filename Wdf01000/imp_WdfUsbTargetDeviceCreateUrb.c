int __fastcall imp_WdfUsbTargetDeviceCreateUrb(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFMEMORY__ **UrbMemory,
        _URB **Urb)
{
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]
  FxUsbDevice *pUsbDevice; // [rsp+40h] [rbp+8h] BYREF

  pUsbDevice = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice);
  if ( !UrbMemory )
    FxVerifierNullBugCheck(pUsbDevice->m_Globals, retaddr);
  if ( pUsbDevice->m_USBDHandle )
    return FxUsbDevice::CreateUrb(pUsbDevice, Attributes, UrbMemory, Urb);
  WPP_IFR_SF_D(pUsbDevice->m_Globals, 2u, 0xEu, 0x11u, WPP_FxUsbDeviceApiKm_cpp_Traceguids, 0xC0000184);
  return -1073741436;
}
