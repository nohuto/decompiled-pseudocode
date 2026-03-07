__int64 __fastcall imp_VfWdfUsbTargetPipeAbortSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBPIPE__ *, WDFREQUEST__ *, _WDF_REQUEST_SEND_OPTIONS *))WdfVersion.Functions.pfnWdfUsbTargetPipeAbortSynchronously)(
           DriverGlobals,
           Pipe,
           Request,
           RequestOptions);
}
