__int64 __fastcall imp_VfWdfUsbTargetPipeIsOutEndpoint(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFUSBPIPE__ *Pipe)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBPIPE__ *))WdfVersion.Functions.pfnWdfUsbTargetPipeIsOutEndpoint)(
           DriverGlobals,
           Pipe);
}
