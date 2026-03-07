void __fastcall CUmdfSvcConfig::~CUmdfSvcConfig(CUmdfSvcConfig *this)
{
  void *m_Key; // rcx

  if ( this->m_AutoClose )
  {
    m_Key = this->m_Key;
    if ( m_Key )
      ZwClose(m_Key);
  }
}
