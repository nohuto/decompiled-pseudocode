/*
 * XREFs of imp_VfWdfDpcWdmGetDpc @ 0x1C00B48C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

_KDPC *__fastcall imp_VfWdfDpcWdmGetDpc(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDPC__ *Dpc)
{
  return WdfVersion.Functions.pfnWdfDpcWdmGetDpc(DriverGlobals, Dpc);
}
