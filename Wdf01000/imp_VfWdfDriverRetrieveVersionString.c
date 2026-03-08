/*
 * XREFs of imp_VfWdfDriverRetrieveVersionString @ 0x1C00B4A30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfDriverRetrieveVersionString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDRIVER__ *Driver,
        WDFSTRING__ *String)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDRIVER__ *, WDFSTRING__ *))WdfVersion.Functions.pfnWdfDriverRetrieveVersionString)(
           DriverGlobals,
           Driver,
           String);
}
