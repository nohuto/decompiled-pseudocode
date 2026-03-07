__int64 __fastcall imp_VfWdfRequestRetrieveUnsafeUserInputBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        unsigned __int64 MinimumRequiredLength,
        void **InputBuffer,
        unsigned __int64 *Length)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFREQUEST__ *, unsigned __int64, void **, unsigned __int64 *))WdfVersion.Functions.pfnWdfRequestRetrieveUnsafeUserInputBuffer)(
           DriverGlobals,
           Request,
           MinimumRequiredLength,
           InputBuffer,
           Length);
}
