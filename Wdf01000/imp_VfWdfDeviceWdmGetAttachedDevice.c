_DEVICE_OBJECT *__fastcall imp_VfWdfDeviceWdmGetAttachedDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  return WdfVersion.Functions.pfnWdfDeviceWdmGetAttachedDevice(DriverGlobals, Device);
}
