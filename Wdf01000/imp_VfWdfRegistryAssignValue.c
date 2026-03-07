__int64 __fastcall imp_VfWdfRegistryAssignValue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        const _UNICODE_STRING *ValueName,
        __int64 ValueType,
        unsigned int ValueLength,
        void *Value)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFKEY__ *, const _UNICODE_STRING *, __int64, unsigned int, void *))WdfVersion.Functions.pfnWdfRegistryAssignValue)(
           DriverGlobals,
           Key,
           ValueName,
           ValueType,
           ValueLength,
           Value);
}
