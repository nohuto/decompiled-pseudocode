/*
 * XREFs of imp_VfWdfDriverCreate @ 0x1C00B48E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfDriverCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _DRIVER_OBJECT *DriverObject,
        const _UNICODE_STRING *RegistryPath,
        _WDF_OBJECT_ATTRIBUTES *DriverAttributes,
        _WDF_DRIVER_CONFIG *DriverConfig,
        WDFDRIVER__ **Driver)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, _DRIVER_OBJECT *, const _UNICODE_STRING *, _WDF_OBJECT_ATTRIBUTES *, _WDF_DRIVER_CONFIG *, WDFDRIVER__ **))WdfVersion.Functions.pfnWdfDriverCreate)(
           DriverGlobals,
           DriverObject,
           RegistryPath,
           DriverAttributes,
           DriverConfig,
           Driver);
}
