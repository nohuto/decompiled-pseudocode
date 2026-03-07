__int64 __fastcall imp_VfWdfRequestProbeAndLockUserBufferForWrite(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        void *Buffer,
        unsigned __int64 Length,
        WDFMEMORY__ **MemoryObject)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFREQUEST__ *, void *, unsigned __int64, WDFMEMORY__ **))WdfVersion.Functions.pfnWdfRequestProbeAndLockUserBufferForWrite)(
           DriverGlobals,
           Request,
           Buffer,
           Length,
           MemoryObject);
}
