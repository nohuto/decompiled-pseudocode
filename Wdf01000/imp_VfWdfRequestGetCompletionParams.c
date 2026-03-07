void __fastcall imp_VfWdfRequestGetCompletionParams(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_COMPLETION_PARAMS *Params)
{
  WdfVersion.Functions.pfnWdfRequestGetCompletionParams(DriverGlobals, Request, Params);
}
