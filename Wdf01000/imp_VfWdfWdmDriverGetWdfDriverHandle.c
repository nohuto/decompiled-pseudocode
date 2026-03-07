WDFDRIVER__ *__fastcall imp_VfWdfWdmDriverGetWdfDriverHandle(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _DRIVER_OBJECT *DriverObject)
{
  return WdfVersion.Functions.pfnWdfWdmDriverGetWdfDriverHandle(DriverGlobals, DriverObject);
}
