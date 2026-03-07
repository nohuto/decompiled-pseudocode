__int64 __fastcall imp_VfWdfCmResourceListGetCount(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFCMRESLIST__ *List)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFCMRESLIST__ *))WdfVersion.Functions.pfnWdfCmResourceListGetCount)(
           DriverGlobals,
           List);
}
