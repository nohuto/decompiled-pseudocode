WDFDEVICE__ *__fastcall imp_VfWdfWmiInstanceGetDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFWMIINSTANCE__ *WmiInstance)
{
  return WdfVersion.Functions.pfnWdfWmiInstanceGetDevice(DriverGlobals, WmiInstance);
}
