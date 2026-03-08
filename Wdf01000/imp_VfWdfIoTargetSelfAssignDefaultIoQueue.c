/*
 * XREFs of imp_VfWdfIoTargetSelfAssignDefaultIoQueue @ 0x1C00B5BC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfIoTargetSelfAssignDefaultIoQueue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFQUEUE__ *Queue)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIOTARGET__ *, WDFQUEUE__ *))WdfVersion.Functions.pfnWdfIoTargetSelfAssignDefaultIoQueue)(
           DriverGlobals,
           IoTarget,
           Queue);
}
