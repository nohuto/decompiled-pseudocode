/*
 * XREFs of imp_VfWdfFdoRetrieveNextStaticChild @ 0x1C00B4CE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

WDFDEVICE__ *__fastcall imp_VfWdfFdoRetrieveNextStaticChild(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Fdo,
        WDFDEVICE__ *PreviousChild,
        __int64 Flags)
{
  return WdfVersion.Functions.pfnWdfFdoRetrieveNextStaticChild(DriverGlobals, Fdo, PreviousChild, Flags);
}
