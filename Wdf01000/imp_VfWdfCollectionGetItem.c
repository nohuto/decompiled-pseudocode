void *__fastcall imp_VfWdfCollectionGetItem(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOLLECTION__ *Collection,
        __int64 Index)
{
  return WdfVersion.Functions.pfnWdfCollectionGetItem(DriverGlobals, Collection, Index);
}
