void __fastcall imp_WdfFdoInitSetEventCallbacks(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_FDO_EVENT_CALLBACKS *FdoEventCallbacks)
{
  _FX_DRIVER_GLOBALS *v6; // rsi
  _FX_DRIVER_GLOBALS *v7; // rcx
  _FX_DRIVER_GLOBALS *v8; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v6 = DeviceInit->DriverGlobals;
  v7 = DeviceInit->DriverGlobals;
  if ( !FdoEventCallbacks )
    FxVerifierNullBugCheck(v7, retaddr);
  if ( (int)FxVerifierCheckIrqlLevel(v7, 0) >= 0 )
  {
    if ( DeviceInit->InitType )
    {
      WPP_IFR_SF_(v6, 2u, 0x12u, 0x2Bu, WPP_FxDeviceInitApi_cpp_Traceguids);
LABEL_8:
      v8 = v6;
LABEL_9:
      FxVerifierDbgBreakPoint(v8);
      return;
    }
    if ( FdoEventCallbacks->Size != 32 )
    {
      WPP_IFR_SF_dd(v6, 2u, 0x12u, 0x2Cu, WPP_FxDeviceInitApi_cpp_Traceguids, FdoEventCallbacks->Size, 32);
      goto LABEL_8;
    }
    if ( FdoEventCallbacks->EvtDeviceFilterAddResourceRequirements && !FdoEventCallbacks->EvtDeviceRemoveAddedResources )
    {
      WPP_IFR_SF_q(
        (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
        2u,
        0xCu,
        0x2Du,
        WPP_FxDeviceInitApi_cpp_Traceguids,
        FdoEventCallbacks->EvtDeviceFilterAddResourceRequirements);
      v8 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
      goto LABEL_9;
    }
    *(_OWORD *)&DeviceInit->Fdo.EventCallbacks.Size = *(_OWORD *)&FdoEventCallbacks->Size;
    *(_OWORD *)&DeviceInit->Fdo.EventCallbacks.EvtDeviceFilterRemoveResourceRequirements = *(_OWORD *)&FdoEventCallbacks->EvtDeviceFilterRemoveResourceRequirements;
  }
}
