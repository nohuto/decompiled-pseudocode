/*
 * XREFs of imp_VfWdfRegistryCreateKey @ 0x1C00B64E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfRegistryCreateKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *ParentKey,
        const _UNICODE_STRING *KeyName,
        __int64 DesiredAccess,
        unsigned int CreateOptions,
        unsigned int *CreateDisposition,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFKEY__ *, const _UNICODE_STRING *, __int64, unsigned int, unsigned int *, _WDF_OBJECT_ATTRIBUTES *, WDFKEY__ **))WdfVersion.Functions.pfnWdfRegistryCreateKey)(
           DriverGlobals,
           ParentKey,
           KeyName,
           DesiredAccess,
           CreateOptions,
           CreateDisposition,
           KeyAttributes,
           Key);
}
