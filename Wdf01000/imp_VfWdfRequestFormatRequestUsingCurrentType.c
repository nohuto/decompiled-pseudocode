void __fastcall imp_VfWdfRequestFormatRequestUsingCurrentType(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request)
{
  WdfVersion.Functions.pfnWdfRequestFormatRequestUsingCurrentType(DriverGlobals, Request);
}
