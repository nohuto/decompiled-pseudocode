/*
 * XREFs of imp_VfWdfInterruptGetDevice @ 0x1C00B4E70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

WDFDEVICE__ *__fastcall imp_VfWdfInterruptGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFINTERRUPT__ *Interrupt)
{
  return WdfVersion.Functions.pfnWdfInterruptGetDevice(DriverGlobals, Interrupt);
}
