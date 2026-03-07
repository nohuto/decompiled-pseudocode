_DEVICE_OBJECT *__fastcall imp_VfWdfDeviceWdmGetDeviceObject(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  return WdfVersion.Functions.pfnWdfDeviceWdmGetDeviceObject(DriverGlobals, Device);
}
