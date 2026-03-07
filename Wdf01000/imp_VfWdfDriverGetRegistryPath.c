wchar_t *__fastcall imp_VfWdfDriverGetRegistryPath(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDRIVER__ *Driver)
{
  return WdfVersion.Functions.pfnWdfDriverGetRegistryPath(DriverGlobals, Driver);
}
