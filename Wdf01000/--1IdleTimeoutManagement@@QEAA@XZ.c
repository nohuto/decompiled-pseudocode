void __fastcall IdleTimeoutManagement::~IdleTimeoutManagement(IdleTimeoutManagement *this)
{
  _POX_SETTINGS *m_PoxSettings; // r8
  unsigned int v2; // eax
  _PO_FX_COMPONENT_V1 *Component; // rcx

  m_PoxSettings = this->m_PoxSettings;
  v2 = 0;
  if ( m_PoxSettings )
  {
    Component = m_PoxSettings->Component;
    if ( Component )
      v2 = 24 * Component->IdleStateCount + 32;
    ExFreePoolWithTag((char *)m_PoxSettings - v2, 0);
  }
}
