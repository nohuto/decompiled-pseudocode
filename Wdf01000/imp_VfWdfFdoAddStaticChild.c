__int64 __fastcall imp_VfWdfFdoAddStaticChild(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Fdo, WDFDEVICE__ *Child)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, WDFDEVICE__ *))WdfVersion.Functions.pfnWdfFdoAddStaticChild)(
           DriverGlobals,
           Fdo,
           Child);
}
