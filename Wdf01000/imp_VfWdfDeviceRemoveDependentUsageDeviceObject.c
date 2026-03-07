void __fastcall imp_VfWdfDeviceRemoveDependentUsageDeviceObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _DEVICE_OBJECT *DependentDevice)
{
  WdfVersion.Functions.pfnWdfDeviceRemoveDependentUsageDeviceObject(DriverGlobals, Device, DependentDevice);
}
