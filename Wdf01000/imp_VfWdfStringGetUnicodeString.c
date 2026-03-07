void __fastcall imp_VfWdfStringGetUnicodeString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFSTRING__ *String,
        _UNICODE_STRING *UnicodeString)
{
  WdfVersion.Functions.pfnWdfStringGetUnicodeString(DriverGlobals, String, UnicodeString);
}
