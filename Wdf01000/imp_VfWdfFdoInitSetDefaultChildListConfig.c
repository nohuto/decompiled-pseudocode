void __fastcall imp_VfWdfFdoInitSetDefaultChildListConfig(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_CHILD_LIST_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *DefaultChildListAttributes)
{
  WdfVersion.Functions.pfnWdfFdoInitSetDefaultChildListConfig(
    DriverGlobals,
    DeviceInit,
    Config,
    DefaultChildListAttributes);
}
