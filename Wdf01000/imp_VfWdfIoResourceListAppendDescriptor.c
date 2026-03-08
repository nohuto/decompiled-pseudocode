/*
 * XREFs of imp_VfWdfIoResourceListAppendDescriptor @ 0x1C00B5670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfIoResourceListAppendDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESLIST__ *ResourceList,
        _IO_RESOURCE_DESCRIPTOR *Descriptor)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIORESLIST__ *, _IO_RESOURCE_DESCRIPTOR *))WdfVersion.Functions.pfnWdfIoResourceListAppendDescriptor)(
           DriverGlobals,
           ResourceList,
           Descriptor);
}
