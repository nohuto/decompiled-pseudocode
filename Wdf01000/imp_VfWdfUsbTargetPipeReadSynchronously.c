/*
 * XREFs of imp_VfWdfUsbTargetPipeReadSynchronously @ 0x1C00B78A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfUsbTargetPipeReadSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        _WDF_MEMORY_DESCRIPTOR *MemoryDescriptor,
        unsigned int *BytesRead)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBPIPE__ *, WDFREQUEST__ *, _WDF_REQUEST_SEND_OPTIONS *, _WDF_MEMORY_DESCRIPTOR *, unsigned int *))WdfVersion.Functions.pfnWdfUsbTargetPipeReadSynchronously)(
           DriverGlobals,
           Pipe,
           Request,
           RequestOptions,
           MemoryDescriptor,
           BytesRead);
}
