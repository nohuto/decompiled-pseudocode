void __fastcall imp_WdfDeviceSetBusInformationForChildren(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _PNP_BUS_INFORMATION *BusInformation)
{
  void *retaddr; // [rsp+28h] [rbp+0h]
  FxDevice *pDevice; // [rsp+30h] [rbp+8h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  if ( !BusInformation )
    FxVerifierNullBugCheck(pDevice->m_Globals, retaddr);
  pDevice->m_PkgPnp->m_BusInformation = *BusInformation;
}
