/*
 * XREFs of imp_VfWdfCommonBufferCreateWithConfig @ 0x1C00B33D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfCommonBufferCreateWithConfig(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        unsigned __int64 Length,
        _WDF_COMMON_BUFFER_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFCOMMONBUFFER__ **CommonBuffer)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDMAENABLER__ *, unsigned __int64, _WDF_COMMON_BUFFER_CONFIG *, _WDF_OBJECT_ATTRIBUTES *, WDFCOMMONBUFFER__ **))WdfVersion.Functions.pfnWdfCommonBufferCreateWithConfig)(
           DriverGlobals,
           DmaEnabler,
           Length,
           Config,
           Attributes,
           CommonBuffer);
}
