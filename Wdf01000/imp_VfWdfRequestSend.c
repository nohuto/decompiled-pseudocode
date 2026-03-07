__int64 __fastcall imp_VfWdfRequestSend(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        WDFIOTARGET__ *Target,
        _WDF_REQUEST_SEND_OPTIONS *Options)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFREQUEST__ *, WDFIOTARGET__ *, _WDF_REQUEST_SEND_OPTIONS *))WdfVersion.Functions.pfnWdfRequestSend)(
           DriverGlobals,
           Request,
           Target,
           Options);
}
