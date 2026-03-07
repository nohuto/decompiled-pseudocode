__int64 __fastcall imp_VfWdfObjectQuery(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        void *Object,
        const _GUID *Guid,
        __int64 QueryBufferLength,
        void *QueryBuffer)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, void *, const _GUID *, __int64, void *))WdfVersion.Functions.pfnWdfObjectQuery)(
           DriverGlobals,
           Object,
           Guid,
           QueryBufferLength,
           QueryBuffer);
}
