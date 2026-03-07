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
