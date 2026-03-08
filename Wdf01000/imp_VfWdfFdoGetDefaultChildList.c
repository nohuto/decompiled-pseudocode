/*
 * XREFs of imp_VfWdfFdoGetDefaultChildList @ 0x1C00B4A90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

WDFCHILDLIST__ *__fastcall imp_VfWdfFdoGetDefaultChildList(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Fdo)
{
  return WdfVersion.Functions.pfnWdfFdoGetDefaultChildList(DriverGlobals, Fdo);
}
