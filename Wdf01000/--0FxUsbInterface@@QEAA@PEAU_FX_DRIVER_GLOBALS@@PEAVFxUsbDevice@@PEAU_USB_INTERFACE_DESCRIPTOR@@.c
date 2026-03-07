void __fastcall FxUsbInterface::FxUsbInterface(
        FxUsbInterface *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxUsbDevice *UsbDevice,
        _USB_INTERFACE_DESCRIPTOR *InterfaceDescriptor)
{
  FxNonPagedObject::FxNonPagedObject(this, 0x1204u, 0x98u, FxDriverGlobals);
  this->m_UsbDevice = UsbDevice;
  this->__vftable = (FxUsbInterface_vtbl *)FxUsbInterface::`vftable';
  FxObject::AddRef(UsbDevice, this, 35, "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbinterface.cpp");
  this->m_InterfaceNumber = InterfaceDescriptor->bInterfaceNumber;
  this->m_Protocol = InterfaceDescriptor->bInterfaceProtocol;
  this->m_Class = InterfaceDescriptor->bInterfaceClass;
  this->m_SubClass = InterfaceDescriptor->bInterfaceSubClass;
  this->m_ObjectFlags |= 2u;
  this->m_CurAlternateSetting = 0;
  *(_WORD *)&this->m_NumSettings = 0;
  this->m_ConfiguredPipes = 0LL;
  this->m_Settings = 0LL;
}
