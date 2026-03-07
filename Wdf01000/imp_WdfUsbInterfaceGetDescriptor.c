void __fastcall imp_WdfUsbInterfaceGetDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBINTERFACE__ *UsbInterface,
        unsigned __int8 SettingIndex,
        _USB_INTERFACE_DESCRIPTOR *InterfaceDescriptor)
{
  __int64 v5; // rdi
  unsigned __int8 iInterface; // al
  _USB_INTERFACE_DESCRIPTOR *v7; // rax
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]
  FxUsbInterface *pUsbInterface; // [rsp+30h] [rbp+8h] BYREF

  pUsbInterface = 0LL;
  v5 = SettingIndex;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)UsbInterface,
    0x1204u,
    (void **)&pUsbInterface);
  if ( !InterfaceDescriptor )
    FxVerifierNullBugCheck(pUsbInterface->m_Globals, retaddr);
  if ( (unsigned __int8)v5 < pUsbInterface->m_NumSettings )
  {
    _mm_lfence();
    v7 = pUsbInterface->m_Settings[v5].InterfaceDescriptor;
    *(_QWORD *)&InterfaceDescriptor->bLength = *(_QWORD *)&v7->bLength;
    iInterface = v7->iInterface;
  }
  else
  {
    iInterface = 0;
    *(_QWORD *)&InterfaceDescriptor->bLength = 0LL;
  }
  InterfaceDescriptor->iInterface = iInterface;
}
