/*
 * XREFs of imp_VfWdfRequestProbeAndLockUserBufferForWrite @ 0x1C00B6DF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

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
