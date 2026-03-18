/*
 * XREFs of ?SetFilter@FxDevice@@QEAAJE@Z @ 0x1C00525D8
 * Callers:
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0050780 (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E65C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

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
    WPP_IFR_SF_d(m_Globals, 2u, 0xDu, 0x1Du, (const _GUID *)&WPP_FxPkgIo_cpp_Traceguids, -1073741808);
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
