/*
 * XREFs of imp_WdfCmResourceListInsertDescriptor @ 0x1C0048FA0
 * Callers:
 *     <none>
 * Callees:
 *     FxCmResourceListInsertDescriptor @ 0x1C0048B50 (FxCmResourceListInsertDescriptor.c)
 */

int __fastcall imp_WdfCmResourceListInsertDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCMRESLIST__ *List,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *Descriptor,
        unsigned int Index)
{
  return FxCmResourceListInsertDescriptor(DriverGlobals, List, Descriptor, Index);
}
