void __fastcall imp_WdfDeviceGetDeviceState(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_STATE *DeviceState)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !DeviceState )
    FxVerifierNullBugCheck(pDevice->m_Globals, retaddr);
  if ( ((DeviceState->Size - 28) & 0xFFFFFFFB) != 0 )
  {
    WPP_IFR_SF_qdd(m_Globals, 2u, 0x12u, 0x16u, WPP_FxDeviceApi_cpp_Traceguids, Device, DeviceState->Size, 0x20u);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    FxPkgPnp::GetPnpState(pDevice->m_PkgPnp, DeviceState);
  }
}
