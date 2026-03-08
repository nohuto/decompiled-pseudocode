/*
 * XREFs of imp_VfWdfRegistryOpenKey @ 0x1C00B6530
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfRegistryOpenKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *ParentKey,
        const _UNICODE_STRING *KeyName,
        __int64 DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFKEY__ *, const _UNICODE_STRING *, __int64, _WDF_OBJECT_ATTRIBUTES *, WDFKEY__ **))WdfVersion.Functions.pfnWdfRegistryOpenKey)(
           DriverGlobals,
           ParentKey,
           KeyName,
           DesiredAccess,
           KeyAttributes,
           Key);
}
