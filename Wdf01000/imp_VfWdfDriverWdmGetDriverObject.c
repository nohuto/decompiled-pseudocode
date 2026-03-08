/*
 * XREFs of imp_VfWdfDriverWdmGetDriverObject @ 0x1C00B4A50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

_DRIVER_OBJECT *__fastcall imp_VfWdfDriverWdmGetDriverObject(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDRIVER__ *Driver)
{
  return WdfVersion.Functions.pfnWdfDriverWdmGetDriverObject(DriverGlobals, Driver);
}
