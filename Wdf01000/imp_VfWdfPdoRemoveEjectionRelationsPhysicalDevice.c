void __fastcall imp_VfWdfPdoRemoveEjectionRelationsPhysicalDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _DEVICE_OBJECT *PhysicalDevice)
{
  WdfVersion.Functions.pfnWdfPdoRemoveEjectionRelationsPhysicalDevice(DriverGlobals, Device, PhysicalDevice);
}
