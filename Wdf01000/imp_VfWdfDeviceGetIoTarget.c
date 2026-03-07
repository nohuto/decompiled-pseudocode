WDFIOTARGET__ *__fastcall imp_VfWdfDeviceGetIoTarget(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  return WdfVersion.Functions.pfnWdfDeviceGetIoTarget(DriverGlobals, Device);
}
