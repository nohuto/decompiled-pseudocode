int __fastcall imp_WdfUsbTargetDeviceCreateIsochUrb(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        unsigned int NumberOfIsochPackets,
        WDFMEMORY__ **UrbMemory,
        _URB **Urb)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]
  FxUsbDevice *pUsbDevice; // [rsp+40h] [rbp+8h] BYREF

  pUsbDevice = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice);
  m_Globals = pUsbDevice->m_Globals;
  if ( !UrbMemory )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( pUsbDevice->m_USBDHandle )
    return FxUsbDevice::CreateIsochUrb(pUsbDevice, Attributes, NumberOfIsochPackets, UrbMemory, Urb);
  WPP_IFR_SF_D(m_Globals, 2u, 0xEu, 0x1Fu, WPP_FxUsbDeviceAPI_cpp_Traceguids, 0xC0000184);
  return -1073741436;
}
