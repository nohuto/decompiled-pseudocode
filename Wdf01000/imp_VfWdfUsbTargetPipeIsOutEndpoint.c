/*
 * XREFs of imp_VfWdfUsbTargetPipeIsOutEndpoint @ 0x1C00B7880
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfUsbTargetPipeIsOutEndpoint(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFUSBPIPE__ *Pipe)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBPIPE__ *))WdfVersion.Functions.pfnWdfUsbTargetPipeIsOutEndpoint)(
           DriverGlobals,
           Pipe);
}
