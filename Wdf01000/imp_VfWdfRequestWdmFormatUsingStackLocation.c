void __fastcall imp_VfWdfRequestWdmFormatUsingStackLocation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        _IO_STACK_LOCATION *Stack)
{
  WdfVersion.Functions.pfnWdfRequestWdmFormatUsingStackLocation(DriverGlobals, Request, Stack);
}
