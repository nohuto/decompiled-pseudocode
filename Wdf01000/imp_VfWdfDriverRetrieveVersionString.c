__int64 __fastcall imp_VfWdfDriverRetrieveVersionString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDRIVER__ *Driver,
        WDFSTRING__ *String)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDRIVER__ *, WDFSTRING__ *))WdfVersion.Functions.pfnWdfDriverRetrieveVersionString)(
           DriverGlobals,
           Driver,
           String);
}
