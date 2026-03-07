void __fastcall imp_WdfDeviceInitSetPnpPowerEventCallbacks(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_PNPPOWER_EVENT_CALLBACKS *PnpPowerEventCallbacks)
{
  _FX_DRIVER_GLOBALS *v3; // rbx
  size_t _a1; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v3 = DeviceInit->DriverGlobals;
  if ( !PnpPowerEventCallbacks )
    FxVerifierNullBugCheck(v3, retaddr);
  _a1 = PnpPowerEventCallbacks->Size;
  if ( (_DWORD)_a1 == 144 )
  {
    if ( PnpPowerEventCallbacks->EvtDeviceUsageNotification && PnpPowerEventCallbacks->EvtDeviceUsageNotificationEx )
    {
      WPP_IFR_SF_(v3, 2u, 0x12u, 0x12u, WPP_FxDeviceInitApi_cpp_Traceguids);
      goto LABEL_8;
    }
  }
  else if ( (_DWORD)_a1 != 136 )
  {
    WPP_IFR_SF_dd(v3, 2u, 0x12u, 0x11u, WPP_FxDeviceInitApi_cpp_Traceguids, _a1, 144);
LABEL_8:
    FxVerifierDbgBreakPoint(v3);
    return;
  }
  memmove(&DeviceInit->PnpPower, PnpPowerEventCallbacks, _a1);
}
