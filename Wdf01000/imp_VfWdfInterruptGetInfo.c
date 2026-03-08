/*
 * XREFs of imp_VfWdfInterruptGetInfo @ 0x1C00B4E90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfInterruptGetInfo(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFINTERRUPT__ *Interrupt,
        _WDF_INTERRUPT_INFO *Info)
{
  WdfVersion.Functions.pfnWdfInterruptGetInfo(DriverGlobals, Interrupt, Info);
}
