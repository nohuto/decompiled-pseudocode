/*
 * XREFs of imp_VfWdfRegistryQueryMemory @ 0x1C00B6570
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfRegistryQueryMemory(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        const _UNICODE_STRING *ValueName,
        __int64 PoolType,
        _WDF_OBJECT_ATTRIBUTES *MemoryAttributes,
        WDFMEMORY__ **Memory,
        unsigned int *ValueType)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFKEY__ *, const _UNICODE_STRING *, __int64, _WDF_OBJECT_ATTRIBUTES *, WDFMEMORY__ **, unsigned int *))WdfVersion.Functions.pfnWdfRegistryQueryMemory)(
           DriverGlobals,
           Key,
           ValueName,
           PoolType,
           MemoryAttributes,
           Memory,
           ValueType);
}
