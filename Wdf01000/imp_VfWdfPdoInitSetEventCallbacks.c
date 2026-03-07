void __fastcall imp_VfWdfPdoInitSetEventCallbacks(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_PDO_EVENT_CALLBACKS *DispatchTable)
{
  WdfVersion.Functions.pfnWdfPdoInitSetEventCallbacks(DriverGlobals, DeviceInit, DispatchTable);
}
