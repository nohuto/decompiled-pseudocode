/*
 * XREFs of imp_VfWdfDeviceOpenDevicemapKey @ 0x1C00B3EF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfDeviceOpenDevicemapKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _UNICODE_STRING *KeyName,
        __int64 DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, const _UNICODE_STRING *, __int64, _WDF_OBJECT_ATTRIBUTES *, WDFKEY__ **))WdfVersion.Functions.pfnWdfDeviceOpenDevicemapKey)(
           DriverGlobals,
           Device,
           KeyName,
           DesiredAccess,
           KeyAttributes,
           Key);
}
