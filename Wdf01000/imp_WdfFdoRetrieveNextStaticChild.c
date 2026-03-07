WDFDEVICE__ *__fastcall imp_WdfFdoRetrieveNextStaticChild(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Fdo,
        WDFDEVICE__ *PreviousChild,
        unsigned int Flags)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxPkgPnp *m_PkgPnp; // rcx
  FxDevice *pDevice; // [rsp+40h] [rbp+8h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Fdo, 0x1002u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !Flags || (Flags & 0xFFFFFFF8) != 0 )
  {
    WPP_IFR_SF_D(m_Globals, 2u, 0x12u, 0xDu, WPP_FxDeviceFdoAPI_cpp_Traceguids, Flags);
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
