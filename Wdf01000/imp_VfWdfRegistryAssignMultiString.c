/*
 * XREFs of imp_VfWdfRegistryAssignMultiString @ 0x1C00B6400
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfRegistryAssignMultiString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        const _UNICODE_STRING *ValueName,
        WDFCOLLECTION__ *StringsCollection)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFKEY__ *, const _UNICODE_STRING *, WDFCOLLECTION__ *))WdfVersion.Functions.pfnWdfRegistryAssignMultiString)(
           DriverGlobals,
           Key,
           ValueName,
           StringsCollection);
}
