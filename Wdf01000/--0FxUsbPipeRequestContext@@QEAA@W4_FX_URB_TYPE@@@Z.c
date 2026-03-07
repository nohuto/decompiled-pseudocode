void __fastcall FxUsbPipeRequestContext::FxUsbPipeRequestContext(FxUsbPipeRequestContext *this, _FX_URB_TYPE FxUrbType)
{
  _URB_PIPE_REQUEST *p_m_UrbLegacy; // rax

  FxUsbRequestContext::FxUsbRequestContext(this, 0x12u);
  this->__vftable = (FxUsbPipeRequestContext_vtbl *)FxUsbPipeRequestContext::`vftable';
  p_m_UrbLegacy = &this->m_UrbLegacy;
  this->m_USBDHandle = 0LL;
  if ( FxUrbType )
    p_m_UrbLegacy = 0LL;
  this->m_Urb = p_m_UrbLegacy;
}
