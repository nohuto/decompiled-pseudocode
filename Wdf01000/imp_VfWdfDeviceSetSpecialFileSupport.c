void __fastcall imp_VfWdfDeviceSetSpecialFileSupport(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        __int64 FileType,
        __int64 FileTypeIsSupported)
{
  WdfVersion.Functions.pfnWdfDeviceSetSpecialFileSupport(
    DriverGlobals,
    Device,
    (_WDF_SPECIAL_FILE_TYPE)FileType,
    FileTypeIsSupported);
}
