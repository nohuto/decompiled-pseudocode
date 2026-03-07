__int64 __fastcall imp_VfWdfIoTargetAllocAndQueryTargetProperty(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        __int64 DeviceProperty,
        __int64 PoolType,
        _WDF_OBJECT_ATTRIBUTES *PropertyMemoryAttributes,
        WDFMEMORY__ **PropertyMemory)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIOTARGET__ *, __int64, __int64, _WDF_OBJECT_ATTRIBUTES *, WDFMEMORY__ **))WdfVersion.Functions.pfnWdfIoTargetAllocAndQueryTargetProperty)(
           DriverGlobals,
           IoTarget,
           DeviceProperty,
           PoolType,
           PropertyMemoryAttributes,
           PropertyMemory);
}
