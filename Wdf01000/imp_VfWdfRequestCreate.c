/*
 * XREFs of imp_VfWdfRequestCreate @ 0x1C00B6B70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfRequestCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ **Request)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, _WDF_OBJECT_ATTRIBUTES *, WDFIOTARGET__ *, WDFREQUEST__ **))WdfVersion.Functions.pfnWdfRequestCreate)(
           DriverGlobals,
           RequestAttributes,
           IoTarget,
           Request);
}
