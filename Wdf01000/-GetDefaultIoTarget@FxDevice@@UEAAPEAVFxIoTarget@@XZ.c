_FX_DRIVER_GLOBALS *__fastcall FxDevice::GetDefaultIoTarget(FxDevice *this)
{
  FxPkgPnp *m_PkgPnp; // rax

  m_PkgPnp = this->m_PkgPnp;
  if ( m_PkgPnp && m_PkgPnp->m_Type == 4353 )
    return m_PkgPnp[1].m_Globals;
  else
    return 0LL;
}
