/*
 * XREFs of imp_VfWdfUsbTargetPipeFormatRequestForReset @ 0x1C00B77A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfUsbTargetPipeFormatRequestForReset(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBPIPE__ *, WDFREQUEST__ *))WdfVersion.Functions.pfnWdfUsbTargetPipeFormatRequestForReset)(
           DriverGlobals,
           Pipe,
           Request);
}
