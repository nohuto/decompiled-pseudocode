__int64 __fastcall FxDevice::SetFilter(FxDevice *this, unsigned __int8 Value)
{
  FxPkgIo *m_PkgIo; // rax
  unsigned int v3; // ebx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxPkgPnp *m_PkgPnp; // rax

  m_PkgIo = this->m_PkgIo;
  v3 = 0;
  m_Globals = m_PkgIo->m_Globals;
  if ( m_PkgIo->m_DefaultQueue )
  {
    v3 = -1073741808;
    WPP_IFR_SF_D(m_Globals, 2u, 0xDu, 0x1Du, WPP_FxPkgIo_cpp_Traceguids, 0xC0000010);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    m_PkgIo->m_Filter = Value;
    m_PkgPnp = this->m_PkgPnp;
    if ( m_PkgPnp )
      LOBYTE(m_PkgPnp[1].m_DeviceBase) = Value;
    this->m_Filter = Value;
  }
  return v3;
}
