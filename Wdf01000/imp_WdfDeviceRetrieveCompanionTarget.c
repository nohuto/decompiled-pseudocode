__int64 __fastcall imp_WdfDeviceRetrieveCompanionTarget(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        WDFCOMPANIONTARGET__ **CompanionTarget)
{
  FxPkgPnp *m_PkgPnp; // rdx
  FxDevice *pDevice; // [rsp+30h] [rbp+8h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_PkgPnp = pDevice->m_PkgPnp;
  if ( !m_PkgPnp )
    return 3221225488LL;
  if ( m_PkgPnp->m_CompanionTargetStatus >= 0 )
    *CompanionTarget = (WDFCOMPANIONTARGET__ *)FxObject::GetObjectHandleUnchecked(m_PkgPnp->m_CompanionTarget);
  return (unsigned int)m_PkgPnp->m_CompanionTargetStatus;
}
