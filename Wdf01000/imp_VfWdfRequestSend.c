/*
 * XREFs of imp_VfWdfRequestSend @ 0x1C00B6FA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

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
