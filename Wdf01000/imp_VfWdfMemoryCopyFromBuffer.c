__int64 __fastcall imp_VfWdfMemoryCopyFromBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFMEMORY__ *DestinationMemory,
        unsigned __int64 DestinationOffset,
        void *Buffer,
        unsigned __int64 NumBytesToCopyFrom)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFMEMORY__ *, unsigned __int64, void *, unsigned __int64))WdfVersion.Functions.pfnWdfMemoryCopyFromBuffer)(
           DriverGlobals,
           DestinationMemory,
           DestinationOffset,
           Buffer,
           NumBytesToCopyFrom);
}
