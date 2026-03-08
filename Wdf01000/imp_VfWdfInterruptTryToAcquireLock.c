/*
 * XREFs of imp_VfWdfInterruptTryToAcquireLock @ 0x1C00B4FC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfInterruptTryToAcquireLock(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFINTERRUPT__ *Interrupt)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFINTERRUPT__ *))WdfVersion.Functions.pfnWdfInterruptTryToAcquireLock)(
           DriverGlobals,
           Interrupt);
}
