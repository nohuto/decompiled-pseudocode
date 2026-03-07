__int64 __fastcall imp_VfWdfDriverIsVersionAvailable(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDRIVER__ *Driver,
        _WDF_DRIVER_VERSION_AVAILABLE_PARAMS *VersionAvailableParams)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDRIVER__ *, _WDF_DRIVER_VERSION_AVAILABLE_PARAMS *))WdfVersion.Functions.pfnWdfDriverIsVersionAvailable)(
           DriverGlobals,
           Driver,
           VersionAvailableParams);
}
