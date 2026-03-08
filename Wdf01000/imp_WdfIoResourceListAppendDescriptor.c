/*
 * XREFs of imp_WdfIoResourceListAppendDescriptor @ 0x1C00491A0
 * Callers:
 *     <none>
 * Callees:
 *     FxIoResourceListInsertDescriptor @ 0x1C0048C54 (FxIoResourceListInsertDescriptor.c)
 */

int __fastcall imp_WdfIoResourceListAppendDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESLIST__ *ResourceList,
        _IO_RESOURCE_DESCRIPTOR *Descriptor)
{
  return FxIoResourceListInsertDescriptor(DriverGlobals, ResourceList, Descriptor, 0xFFFFFFFF);
}
