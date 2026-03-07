_DEVICE_OBJECT *__fastcall imp_VfWdfIoTargetWdmGetTargetPhysicalDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget)
{
  return WdfVersion.Functions.pfnWdfIoTargetWdmGetTargetPhysicalDevice(DriverGlobals, IoTarget);
}
