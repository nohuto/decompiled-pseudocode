void __fastcall imp_VfWdfDeviceInitSetReleaseHardwareOrderOnFailure(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        __int64 ReleaseHardwareOrderOnFailure)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetReleaseHardwareOrderOnFailure(
    DriverGlobals,
    DeviceInit,
    (_WDF_RELEASE_HARDWARE_ORDER_ON_FAILURE)ReleaseHardwareOrderOnFailure);
}
