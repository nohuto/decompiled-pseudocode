/*
 * XREFs of imp_VfWdfStringGetUnicodeString @ 0x1C00B7100
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfStringGetUnicodeString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFSTRING__ *String,
        _UNICODE_STRING *UnicodeString)
{
  WdfVersion.Functions.pfnWdfStringGetUnicodeString(DriverGlobals, String, UnicodeString);
}
