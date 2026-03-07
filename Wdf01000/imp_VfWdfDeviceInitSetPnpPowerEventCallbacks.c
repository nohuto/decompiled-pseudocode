void __fastcall imp_VfWdfDeviceInitSetPnpPowerEventCallbacks(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_PNPPOWER_EVENT_CALLBACKS *PnpPowerEventCallbacks)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetPnpPowerEventCallbacks(DriverGlobals, DeviceInit, PnpPowerEventCallbacks);
}
