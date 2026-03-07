void __fastcall FxUsbDeviceStringContext::~FxUsbDeviceStringContext(FxUsbDeviceStringContext *this)
{
  FX_POOL_TRACKER *m_StringDescriptor; // rcx
  _URB *m_Urb; // rdx

  this->__vftable = (FxUsbDeviceStringContext_vtbl *)FxUsbDeviceStringContext::`vftable';
  m_StringDescriptor = (FX_POOL_TRACKER *)this->m_StringDescriptor;
  if ( m_StringDescriptor )
  {
    FxPoolFree(m_StringDescriptor);
    this->m_StringDescriptor = 0LL;
  }
  m_Urb = (_URB *)this->m_Urb;
  if ( m_Urb && m_Urb != (_URB *)&this->m_UrbLegacy )
    USBD_UrbFree(this->m_USBDHandle, m_Urb);
  this->m_Urb = 0LL;
  this->m_USBDHandle = 0LL;
  this->__vftable = (FxUsbDeviceStringContext_vtbl *)FxRequestContext::`vftable';
}
