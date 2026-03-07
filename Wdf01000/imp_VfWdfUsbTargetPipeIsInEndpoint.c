__int64 __fastcall imp_VfWdfUsbTargetPipeIsInEndpoint(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFUSBPIPE__ *Pipe)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBPIPE__ *))WdfVersion.Functions.pfnWdfUsbTargetPipeIsInEndpoint)(
           DriverGlobals,
           Pipe);
}
