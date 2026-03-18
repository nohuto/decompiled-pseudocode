/*
 * XREFs of imp_WdfFdoRetrieveNextStaticChild @ 0x1C0039660
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0013820 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E65C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_D @ 0x1C0039220 (WPP_IFR_SF_D.c)
 *     ?GetNextStaticDevice@FxChildList@@QEAAPEAUWDFDEVICE__@@PEAU2@K@Z @ 0x1C003B770 (-GetNextStaticDevice@FxChildList@@QEAAPEAUWDFDEVICE__@@PEAU2@K@Z.c)
 */

WDFDEVICE__ *__fastcall imp_WdfFdoRetrieveNextStaticChild(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Fdo,
        WDFDEVICE__ *PreviousChild,
        unsigned int Flags)
{
  unsigned __int8 v7; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxPkgPnp *m_PkgPnp; // rcx
  FxDevice *pDevice; // [rsp+40h] [rbp+8h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Fdo,
    0x1002u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !Flags || (Flags & 0xFFFFFFF8) != 0 )
  {
    WPP_IFR_SF_D(m_Globals, v7, 0x12u, 0xDu, WPP_FxDeviceFdoAPI_cpp_Traceguids, Flags);
  }
  else
  {
    if ( !pDevice->m_Legacy )
    {
      m_PkgPnp = pDevice->m_PkgPnp;
      if ( m_PkgPnp->m_Type == 4353 )
        return FxChildList::GetNextStaticDevice(*(FxChildList **)&m_PkgPnp[1].m_Type, PreviousChild, Flags);
    }
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xEu, WPP_FxDeviceFdoAPI_cpp_Traceguids, Fdo);
  }
  FxVerifierDbgBreakPoint(m_Globals);
  return 0LL;
}
