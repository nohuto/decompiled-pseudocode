/*
 * XREFs of imp_VfWdfUsbTargetPipeFormatRequestForUrb @ 0x1C00B77C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfUsbTargetPipeFormatRequestForUrb(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *PIPE,
        WDFREQUEST__ *Request,
        WDFMEMORY__ *UrbMemory,
        _WDFMEMORY_OFFSET *UrbMemoryOffset)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBPIPE__ *, WDFREQUEST__ *, WDFMEMORY__ *, _WDFMEMORY_OFFSET *))WdfVersion.Functions.pfnWdfUsbTargetPipeFormatRequestForUrb)(
           DriverGlobals,
           PIPE,
           Request,
           UrbMemory,
           UrbMemoryOffset);
}
