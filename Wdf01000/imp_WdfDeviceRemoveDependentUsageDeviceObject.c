void __fastcall imp_WdfDeviceRemoveDependentUsageDeviceObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _DEVICE_OBJECT *DependentDevice)
{
  FxPkgPnp *m_PkgPnp; // rdx
  FxTransactionedList *m_UsageDependentDeviceList; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]
  FxDevice *pDevice; // [rsp+30h] [rbp+8h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  if ( !DependentDevice )
    FxVerifierNullBugCheck(pDevice->m_Globals, retaddr);
  m_PkgPnp = pDevice->m_PkgPnp;
  m_UsageDependentDeviceList = m_PkgPnp->m_UsageDependentDeviceList;
  if ( m_UsageDependentDeviceList )
    FxTransactionedList::SearchForAndRemove(m_UsageDependentDeviceList, m_PkgPnp->m_Globals, DependentDevice);
}
