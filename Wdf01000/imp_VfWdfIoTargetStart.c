/*
 * XREFs of imp_VfWdfIoTargetStart @ 0x1C00B5D70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfIoTargetStart(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIOTARGET__ *IoTarget)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIOTARGET__ *))WdfVersion.Functions.pfnWdfIoTargetStart)(
           DriverGlobals,
           IoTarget);
}
