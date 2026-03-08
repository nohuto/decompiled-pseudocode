/*
 * XREFs of imp_VfWdfIoTargetOpen @ 0x1C00B5AF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfIoTargetOpen(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        _WDF_IO_TARGET_OPEN_PARAMS *OpenParams)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIOTARGET__ *, _WDF_IO_TARGET_OPEN_PARAMS *))WdfVersion.Functions.pfnWdfIoTargetOpen)(
           DriverGlobals,
           IoTarget,
           OpenParams);
}
