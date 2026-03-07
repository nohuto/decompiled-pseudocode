__int64 __fastcall imp_VfWdfRequestIsReserved(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFREQUEST__ *))WdfVersion.Functions.pfnWdfRequestIsReserved)(
           DriverGlobals,
           Request);
}
