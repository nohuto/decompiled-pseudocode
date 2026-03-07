void __fastcall imp_VfWdfDeviceSetCharacteristics(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        __int64 DeviceCharacteristics)
{
  WdfVersion.Functions.pfnWdfDeviceSetCharacteristics(DriverGlobals, Device, DeviceCharacteristics);
}
