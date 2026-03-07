__int64 __fastcall imp_VfWdfChildListCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_CHILD_LIST_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *ChildListAttributes,
        WDFCHILDLIST__ **ChildList)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, _WDF_CHILD_LIST_CONFIG *, _WDF_OBJECT_ATTRIBUTES *, WDFCHILDLIST__ **))WdfVersion.Functions.pfnWdfChildListCreate)(
           DriverGlobals,
           Device,
           Config,
           ChildListAttributes,
           ChildList);
}
