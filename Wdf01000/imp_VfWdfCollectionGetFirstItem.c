void *__fastcall imp_VfWdfCollectionGetFirstItem(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFCOLLECTION__ *Collection)
{
  return WdfVersion.Functions.pfnWdfCollectionGetFirstItem(DriverGlobals, Collection);
}
