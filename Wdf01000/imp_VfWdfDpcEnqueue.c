__int64 __fastcall imp_VfWdfDpcEnqueue(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDPC__ *Dpc)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDPC__ *))WdfVersion.Functions.pfnWdfDpcEnqueue)(
           DriverGlobals,
           Dpc);
}
