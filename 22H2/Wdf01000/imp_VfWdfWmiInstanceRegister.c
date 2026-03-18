/*
 * XREFs of imp_VfWdfWmiInstanceRegister @ 0x1C00C3B60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfWmiInstanceRegister(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFWMIINSTANCE__ *WmiInstance)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFWMIINSTANCE__ *))WdfVersion.Functions.pfnWdfWmiInstanceRegister)(
           DriverGlobals,
           WmiInstance);
}
