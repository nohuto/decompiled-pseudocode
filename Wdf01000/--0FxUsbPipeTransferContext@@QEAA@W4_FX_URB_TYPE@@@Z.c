void __fastcall FxUsbPipeTransferContext::FxUsbPipeTransferContext(
        FxUsbPipeTransferContext *this,
        _FX_URB_TYPE FxUrbType)
{
  _URB_BULK_OR_INTERRUPT_TRANSFER *p_m_UrbLegacy; // rax

  FxUsbRequestContext::FxUsbRequestContext(this, 0x10u);
  this->__vftable = (FxUsbPipeTransferContext_vtbl *)FxUsbPipeTransferContext::`vftable';
  p_m_UrbLegacy = &this->m_UrbLegacy;
  this->m_UnlockPages = 0;
  if ( FxUrbType )
    p_m_UrbLegacy = 0LL;
  this->m_PartialMdl = 0LL;
  this->m_USBDHandle = 0LL;
  this->m_Urb = p_m_UrbLegacy;
}
