void __fastcall imp_WdfDeviceSetStaticStopRemove(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        unsigned __int8 Stoppable)
{
  FxPkgPnp *m_PkgPnp; // rcx
  FxDevice *pDevice; // [rsp+30h] [rbp+8h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_PkgPnp = pDevice->m_PkgPnp;
  if ( Stoppable )
    _InterlockedDecrement((volatile signed __int32 *)&m_PkgPnp->m_DeviceStopCount);
  else
    _InterlockedIncrement((volatile signed __int32 *)&m_PkgPnp->m_DeviceStopCount);
}
