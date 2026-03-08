/*
 * XREFs of imp_VfWdfIoResourceListInsertDescriptor @ 0x1C00B56F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfIoResourceListInsertDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESLIST__ *ResourceList,
        _IO_RESOURCE_DESCRIPTOR *Descriptor,
        __int64 Index)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIORESLIST__ *, _IO_RESOURCE_DESCRIPTOR *, __int64))WdfVersion.Functions.pfnWdfIoResourceListInsertDescriptor)(
           DriverGlobals,
           ResourceList,
           Descriptor,
           Index);
}
