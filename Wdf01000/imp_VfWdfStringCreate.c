__int64 __fastcall imp_VfWdfStringCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        const _UNICODE_STRING *UnicodeString,
        _WDF_OBJECT_ATTRIBUTES *StringAttributes,
        WDFSTRING__ **String)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, const _UNICODE_STRING *, _WDF_OBJECT_ATTRIBUTES *, WDFSTRING__ **))WdfVersion.Functions.pfnWdfStringCreate)(
           DriverGlobals,
           UnicodeString,
           StringAttributes,
           String);
}
