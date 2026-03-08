/*
 * XREFs of imp_VfWdfIoResourceListRemoveByDescriptor @ 0x1C00B5730
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfIoResourceListRemoveByDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESLIST__ *ResourceList,
        _IO_RESOURCE_DESCRIPTOR *Descriptor)
{
  WdfVersion.Functions.pfnWdfIoResourceListRemoveByDescriptor(DriverGlobals, ResourceList, Descriptor);
}
