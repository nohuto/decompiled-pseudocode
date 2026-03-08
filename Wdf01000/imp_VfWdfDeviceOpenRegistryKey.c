/*
 * XREFs of imp_VfWdfDeviceOpenRegistryKey @ 0x1C00B3F30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfDeviceOpenRegistryKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        __int64 DeviceInstanceKeyType,
        __int64 DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, __int64, __int64, _WDF_OBJECT_ATTRIBUTES *, WDFKEY__ **))WdfVersion.Functions.pfnWdfDeviceOpenRegistryKey)(
           DriverGlobals,
           Device,
           DeviceInstanceKeyType,
           DesiredAccess,
           KeyAttributes,
           Key);
}
