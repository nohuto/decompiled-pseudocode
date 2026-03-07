__int64 __fastcall imp_VfWdfChildListRetrieveNextDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *ChildList,
        _WDF_CHILD_LIST_ITERATOR *Iterator,
        WDFDEVICE__ **Device,
        _WDF_CHILD_RETRIEVE_INFO *Info)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFCHILDLIST__ *, _WDF_CHILD_LIST_ITERATOR *, WDFDEVICE__ **, _WDF_CHILD_RETRIEVE_INFO *))WdfVersion.Functions.pfnWdfChildListRetrieveNextDevice)(
           DriverGlobals,
           ChildList,
           Iterator,
           Device,
           Info);
}
