__int64 __fastcall imp_VfWdfRequestRetrieveInputWdmMdl(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        _MDL **Mdl)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFREQUEST__ *, _MDL **))WdfVersion.Functions.pfnWdfRequestRetrieveInputWdmMdl)(
           DriverGlobals,
           Request,
           Mdl);
}
