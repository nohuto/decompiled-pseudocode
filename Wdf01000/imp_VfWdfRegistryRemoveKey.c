/*
 * XREFs of imp_VfWdfRegistryRemoveKey @ 0x1C00B6690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfRegistryRemoveKey(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFKEY__ *Key)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFKEY__ *))WdfVersion.Functions.pfnWdfRegistryRemoveKey)(
           DriverGlobals,
           Key);
}
