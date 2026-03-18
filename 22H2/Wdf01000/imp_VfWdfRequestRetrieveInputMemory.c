/*
 * XREFs of imp_VfWdfRequestRetrieveInputMemory @ 0x1C00C2E70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfRequestRetrieveInputMemory(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        WDFMEMORY__ **Memory)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFREQUEST__ *, WDFMEMORY__ **))WdfVersion.Functions.pfnWdfRequestRetrieveInputMemory)(
           DriverGlobals,
           Request,
           Memory);
}
