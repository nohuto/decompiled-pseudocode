__int64 __fastcall imp_VfWdfMemoryAssignBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFMEMORY__ *Memory,
        void *Buffer,
        unsigned __int64 BufferSize)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFMEMORY__ *, void *, unsigned __int64))WdfVersion.Functions.pfnWdfMemoryAssignBuffer)(
           DriverGlobals,
           Memory,
           Buffer,
           BufferSize);
}
