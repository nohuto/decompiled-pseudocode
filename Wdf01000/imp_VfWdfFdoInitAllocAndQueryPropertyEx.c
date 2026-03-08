/*
 * XREFs of imp_VfWdfFdoInitAllocAndQueryPropertyEx @ 0x1C00B4AF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfFdoInitAllocAndQueryPropertyEx(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_DEVICE_PROPERTY_DATA *DeviceProperty,
        __int64 PoolType,
        _WDF_OBJECT_ATTRIBUTES *PropertyMemoryAttributes,
        WDFMEMORY__ **PropertyMemory,
        unsigned int *Type)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE_INIT *, _WDF_DEVICE_PROPERTY_DATA *, __int64, _WDF_OBJECT_ATTRIBUTES *, WDFMEMORY__ **, unsigned int *))WdfVersion.Functions.pfnWdfFdoInitAllocAndQueryPropertyEx)(
           DriverGlobals,
           DeviceInit,
           DeviceProperty,
           PoolType,
           PropertyMemoryAttributes,
           PropertyMemory,
           Type);
}
