/*
 * XREFs of imp_VfWdfCommonBufferGetAlignedLogicalAddress @ 0x1C00B3410
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

_LARGE_INTEGER __fastcall imp_VfWdfCommonBufferGetAlignedLogicalAddress(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOMMONBUFFER__ *CommonBuffer)
{
  return (_LARGE_INTEGER)((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFCOMMONBUFFER__ *))WdfVersion.Functions.pfnWdfCommonBufferGetAlignedLogicalAddress)(
                           DriverGlobals,
                           CommonBuffer);
}
