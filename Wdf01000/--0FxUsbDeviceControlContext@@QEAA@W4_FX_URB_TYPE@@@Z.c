void __fastcall FxUsbDeviceControlContext::FxUsbDeviceControlContext(
        FxUsbDeviceControlContext *this,
        _FX_URB_TYPE FxUrbType)
{
  _URB_CONTROL_TRANSFER *p_m_UrbLegacy; // rax

  FxUsbRequestContext::FxUsbRequestContext(this, 0x13u);
  this->__vftable = (FxUsbDeviceControlContext_vtbl *)FxUsbDeviceControlContext::`vftable';
  p_m_UrbLegacy = &this->m_UrbLegacy;
  this->m_PartialMdl = 0LL;
  if ( FxUrbType )
    p_m_UrbLegacy = 0LL;
  this->m_UnlockPages = 0;
  this->m_USBDHandle = 0LL;
  this->m_Urb = p_m_UrbLegacy;
}
