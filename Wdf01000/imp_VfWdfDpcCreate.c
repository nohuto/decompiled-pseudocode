/*
 * XREFs of imp_VfWdfDpcCreate @ 0x1C00B4860
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfDpcCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_DPC_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFDPC__ **Dpc)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, _WDF_DPC_CONFIG *, _WDF_OBJECT_ATTRIBUTES *, WDFDPC__ **))WdfVersion.Functions.pfnWdfDpcCreate)(
           DriverGlobals,
           Config,
           Attributes,
           Dpc);
}
