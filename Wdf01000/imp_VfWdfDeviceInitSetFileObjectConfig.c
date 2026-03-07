void __fastcall imp_VfWdfDeviceInitSetFileObjectConfig(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_FILEOBJECT_CONFIG *FileObjectConfig,
        _WDF_OBJECT_ATTRIBUTES *FileObjectAttributes)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetFileObjectConfig(
    DriverGlobals,
    DeviceInit,
    FileObjectConfig,
    FileObjectAttributes);
}
