__int64 __fastcall imp_VfWdfRegistryAssignUnicodeString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        const _UNICODE_STRING *ValueName,
        const _UNICODE_STRING *Value)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFKEY__ *, const _UNICODE_STRING *, const _UNICODE_STRING *))WdfVersion.Functions.pfnWdfRegistryAssignUnicodeString)(
           DriverGlobals,
           Key,
           ValueName,
           Value);
}
