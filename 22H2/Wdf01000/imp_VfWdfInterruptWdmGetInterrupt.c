/*
 * XREFs of imp_VfWdfInterruptWdmGetInterrupt @ 0x1C00C0FE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

struct _KINTERRUPT *__fastcall imp_VfWdfInterruptWdmGetInterrupt(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFINTERRUPT__ *Interrupt)
{
  return WdfVersion.Functions.pfnWdfInterruptWdmGetInterrupt(DriverGlobals, Interrupt);
}
