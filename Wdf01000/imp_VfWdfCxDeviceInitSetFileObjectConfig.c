void __fastcall imp_VfWdfCxDeviceInitSetFileObjectConfig(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCXDEVICE_INIT *CxDeviceInit,
        _WDFCX_FILEOBJECT_CONFIG *CxFileObjectConfig,
        _WDF_OBJECT_ATTRIBUTES *FileObjectAttributes)
{
  WdfVersion.Functions.pfnWdfCxDeviceInitSetFileObjectConfig(
    DriverGlobals,
    CxDeviceInit,
    CxFileObjectConfig,
    FileObjectAttributes);
}
