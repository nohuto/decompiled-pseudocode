void __fastcall imp_WdfPdoInitSetEventCallbacks(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_PDO_EVENT_CALLBACKS *DispatchTable)
{
  _FX_DRIVER_GLOBALS *v5; // rsi
  _FX_DRIVER_GLOBALS *v6; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v5 = DeviceInit->DriverGlobals;
  v6 = DeviceInit->DriverGlobals;
  if ( !DispatchTable )
    FxVerifierNullBugCheck(v6, retaddr);
  if ( (int)FxVerifierCheckIrqlLevel(v6, 0) >= 0 )
  {
    if ( DeviceInit->InitType != FxDeviceInitTypePdo )
    {
      WPP_IFR_SF_(v5, 2u, 0x12u, 0x35u, WPP_FxDeviceInitApi_cpp_Traceguids);
LABEL_8:
      FxVerifierDbgBreakPoint(v5);
      return;
    }
    if ( ((DispatchTable->Size - 56) & 0xFFFFFFF7) != 0 )
    {
      WPP_IFR_SF_dd(v5, 2u, 0x12u, 0x36u, WPP_FxDeviceInitApi_cpp_Traceguids, DispatchTable->Size, 64);
      goto LABEL_8;
    }
    *(_OWORD *)&DeviceInit->Pdo.EventCallbacks.Size = *(_OWORD *)&DispatchTable->Size;
    *(_OWORD *)&DeviceInit->Pdo.EventCallbacks.EvtDeviceResourceRequirementsQuery = *(_OWORD *)&DispatchTable->EvtDeviceResourceRequirementsQuery;
    *(_OWORD *)&DeviceInit->Pdo.EventCallbacks.EvtDeviceSetLock = *(_OWORD *)&DispatchTable->EvtDeviceSetLock;
    *(_OWORD *)&DeviceInit->Pdo.EventCallbacks.EvtDeviceDisableWakeAtBus = *(_OWORD *)&DispatchTable->EvtDeviceDisableWakeAtBus;
  }
}
