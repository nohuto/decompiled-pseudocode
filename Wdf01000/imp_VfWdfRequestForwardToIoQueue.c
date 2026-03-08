/*
 * XREFs of imp_VfWdfRequestForwardToIoQueue @ 0x1C00B6BE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfRequestForwardToIoQueue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        WDFQUEUE__ *DestinationQueue)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFREQUEST__ *, WDFQUEUE__ *))WdfVersion.Functions.pfnWdfRequestForwardToIoQueue)(
           DriverGlobals,
           Request,
           DestinationQueue);
}
