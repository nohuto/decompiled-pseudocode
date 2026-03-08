/*
 * XREFs of imp_VfWdfFdoInitOpenRegistryKey @ 0x1C00B4B30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfFdoInitOpenRegistryKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        __int64 DeviceInstanceKeyType,
        __int64 DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE_INIT *, __int64, __int64, _WDF_OBJECT_ATTRIBUTES *, WDFKEY__ **))WdfVersion.Functions.pfnWdfFdoInitOpenRegistryKey)(
           DriverGlobals,
           DeviceInit,
           DeviceInstanceKeyType,
           DesiredAccess,
           KeyAttributes,
           Key);
}
