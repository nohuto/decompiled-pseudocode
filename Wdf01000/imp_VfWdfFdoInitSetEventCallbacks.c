void __fastcall imp_VfWdfFdoInitSetEventCallbacks(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_FDO_EVENT_CALLBACKS *FdoEventCallbacks)
{
  WdfVersion.Functions.pfnWdfFdoInitSetEventCallbacks(DriverGlobals, DeviceInit, FdoEventCallbacks);
}
