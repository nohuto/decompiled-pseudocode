WDFIOTARGET__ *__fastcall imp_WdfDeviceGetSelfIoTarget(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  FxPkgPnp *m_PkgPnp; // rcx
  FxObject *v3; // rcx
  FxDevice *pDevice; // [rsp+30h] [rbp+8h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_PkgPnp = pDevice->m_PkgPnp;
  if ( m_PkgPnp && m_PkgPnp->m_Type == 4353 && (v3 = *(FxObject **)&m_PkgPnp[1].m_ObjectFlags) != 0LL )
    return (WDFIOTARGET__ *)FxObject::GetObjectHandleUnchecked(v3);
  else
    return 0LL;
}
