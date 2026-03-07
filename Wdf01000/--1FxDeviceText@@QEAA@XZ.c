void __fastcall FxDeviceText::~FxDeviceText(FxDeviceText *this)
{
  wchar_t *m_Description; // rcx
  wchar_t *m_LocationInformation; // rcx

  m_Description = this->m_Description;
  if ( m_Description )
  {
    FxPoolFree((FX_POOL_TRACKER *)m_Description);
    this->m_Description = 0LL;
  }
  m_LocationInformation = this->m_LocationInformation;
  if ( m_LocationInformation )
  {
    FxPoolFree((FX_POOL_TRACKER *)m_LocationInformation);
    this->m_LocationInformation = 0LL;
  }
}
