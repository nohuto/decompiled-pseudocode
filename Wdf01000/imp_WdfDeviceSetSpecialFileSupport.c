void __fastcall imp_WdfDeviceSetSpecialFileSupport(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        int FileType,
        unsigned __int8 Supported)
{
  unsigned int v7; // edx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int16 v9; // r9
  _FX_DRIVER_GLOBALS *v10; // rcx
  __int16 v11; // r8
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( (unsigned int)(FileType - 1) > 3 && FileType != 6 )
  {
    v9 = 16;
    v10 = pDevice->m_Globals;
LABEL_7:
    WPP_IFR_SF_qd(v10, 2u, 0x12u, v9, WPP_FxDeviceApiKm_cpp_Traceguids, Device, FileType);
    FxVerifierDbgBreakPoint(m_Globals);
    return;
  }
  if ( !_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(pDevice->m_Globals, v7, 0x1Du) && FileType > 4 )
  {
    v9 = v11 - 12;
    goto LABEL_7;
  }
  FxObjectHandleGetPtr(v10, (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  FxPkgPnp::SetSpecialFileSupport(pDevice->m_PkgPnp, (_WDF_SPECIAL_FILE_TYPE)FileType, Supported);
}
