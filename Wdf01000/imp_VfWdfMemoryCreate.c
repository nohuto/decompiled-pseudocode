__int64 __fastcall imp_VfWdfMemoryCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        __int64 PoolType,
        __int64 PoolTag,
        unsigned __int64 BufferSize,
        WDFMEMORY__ **Memory,
        void **Buffer)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, _WDF_OBJECT_ATTRIBUTES *, __int64, __int64, unsigned __int64, WDFMEMORY__ **, void **))WdfVersion.Functions.pfnWdfMemoryCreate)(
           DriverGlobals,
           Attributes,
           PoolType,
           PoolTag,
           BufferSize,
           Memory,
           Buffer);
}
