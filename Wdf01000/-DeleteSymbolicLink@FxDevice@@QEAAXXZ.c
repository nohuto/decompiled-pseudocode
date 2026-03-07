void __fastcall FxDevice::DeleteSymbolicLink(FxDevice *this)
{
  _UNICODE_STRING *p_m_SymbolicLinkName; // rbx

  if ( this->m_SymbolicLinkName.Buffer )
  {
    p_m_SymbolicLinkName = &this->m_SymbolicLinkName;
    if ( this->m_SymbolicLinkName.Length )
      IoDeleteSymbolicLink(&this->m_SymbolicLinkName);
    FxPoolFree((FX_POOL_TRACKER *)this->m_SymbolicLinkName.Buffer);
    *p_m_SymbolicLinkName = 0LL;
  }
}
