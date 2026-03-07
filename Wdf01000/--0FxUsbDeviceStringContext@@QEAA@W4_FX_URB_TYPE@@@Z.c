void __fastcall FxUsbDeviceStringContext::FxUsbDeviceStringContext(
        FxUsbDeviceStringContext *this,
        _FX_URB_TYPE FxUrbType)
{
  FxUsbRequestContext::FxUsbRequestContext(this, 0x14u);
  this->m_USBDHandle = 0LL;
  this->m_StringDescriptor = 0LL;
  this->m_StringDescriptorLength = 0;
  this->__vftable = (FxUsbDeviceStringContext_vtbl *)FxUsbDeviceStringContext::`vftable';
  memset(&this->m_UrbLegacy, 0, sizeof(this->m_UrbLegacy));
  if ( FxUrbType )
  {
    this->m_Urb = 0LL;
  }
  else
  {
    this->m_Urb = &this->m_UrbLegacy;
    this->m_UrbLegacy.Hdr.Function = 11;
    this->m_Urb->Hdr.Length = 136;
    this->m_Urb->DescriptorType = 3;
  }
}
