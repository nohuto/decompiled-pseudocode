_DEVICE_OBJECT *__fastcall imp_VfWdfDeviceWdmGetPhysicalDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  return WdfVersion.Functions.pfnWdfDeviceWdmGetPhysicalDevice(DriverGlobals, Device);
}
