__int64 __fastcall imp_VfWdfIoTargetSendInternalIoctlSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        __int64 IoctlCode,
        _WDF_MEMORY_DESCRIPTOR *InputBuffer,
        _WDF_MEMORY_DESCRIPTOR *OutputBuffer,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        unsigned __int64 *BytesReturned)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIOTARGET__ *, WDFREQUEST__ *, __int64, _WDF_MEMORY_DESCRIPTOR *, _WDF_MEMORY_DESCRIPTOR *, _WDF_REQUEST_SEND_OPTIONS *, unsigned __int64 *))WdfVersion.Functions.pfnWdfIoTargetSendInternalIoctlSynchronously)(
           DriverGlobals,
           IoTarget,
           Request,
           IoctlCode,
           InputBuffer,
           OutputBuffer,
           RequestOptions,
           BytesReturned);
}
