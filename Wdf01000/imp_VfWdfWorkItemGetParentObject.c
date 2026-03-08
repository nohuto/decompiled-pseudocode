/*
 * XREFs of imp_VfWdfWorkItemGetParentObject @ 0x1C00B7C70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void *__fastcall imp_VfWdfWorkItemGetParentObject(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFWORKITEM__ *WorkItem)
{
  return WdfVersion.Functions.pfnWdfWorkItemGetParentObject(DriverGlobals, WorkItem);
}
