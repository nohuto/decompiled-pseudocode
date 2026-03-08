/*
 * XREFs of imp_VfWdfCommonBufferGetAlignedVirtualAddress @ 0x1C00B3430
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void *__fastcall imp_VfWdfCommonBufferGetAlignedVirtualAddress(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOMMONBUFFER__ *CommonBuffer)
{
  return WdfVersion.Functions.pfnWdfCommonBufferGetAlignedVirtualAddress(DriverGlobals, CommonBuffer);
}
