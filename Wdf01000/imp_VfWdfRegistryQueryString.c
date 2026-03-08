/*
 * XREFs of imp_VfWdfRegistryQueryString @ 0x1C00B65E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfRegistryQueryString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        const _UNICODE_STRING *ValueName,
        WDFSTRING__ *String)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFKEY__ *, const _UNICODE_STRING *, WDFSTRING__ *))WdfVersion.Functions.pfnWdfRegistryQueryString)(
           DriverGlobals,
           Key,
           ValueName,
           String);
}
