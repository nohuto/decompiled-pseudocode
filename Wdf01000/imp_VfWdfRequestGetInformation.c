unsigned __int64 __fastcall imp_VfWdfRequestGetInformation(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  return WdfVersion.Functions.pfnWdfRequestGetInformation(DriverGlobals, Request);
}
