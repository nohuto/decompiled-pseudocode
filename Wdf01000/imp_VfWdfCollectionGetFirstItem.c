/*
 * XREFs of imp_VfWdfCollectionGetFirstItem @ 0x1C00B3300
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void *__fastcall imp_VfWdfCollectionGetFirstItem(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFCOLLECTION__ *Collection)
{
  return WdfVersion.Functions.pfnWdfCollectionGetFirstItem(DriverGlobals, Collection);
}
