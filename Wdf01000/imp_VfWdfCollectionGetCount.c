__int64 __fastcall imp_VfWdfCollectionGetCount(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFCOLLECTION__ *Collection)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFCOLLECTION__ *))WdfVersion.Functions.pfnWdfCollectionGetCount)(
           DriverGlobals,
           Collection);
}
