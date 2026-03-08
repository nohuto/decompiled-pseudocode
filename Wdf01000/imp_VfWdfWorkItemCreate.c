/*
 * XREFs of imp_VfWdfWorkItemCreate @ 0x1C00B7C10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfWorkItemCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_WORKITEM_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFWORKITEM__ **WorkItem)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, _WDF_WORKITEM_CONFIG *, _WDF_OBJECT_ATTRIBUTES *, WDFWORKITEM__ **))WdfVersion.Functions.pfnWdfWorkItemCreate)(
           DriverGlobals,
           Config,
           Attributes,
           WorkItem);
}
