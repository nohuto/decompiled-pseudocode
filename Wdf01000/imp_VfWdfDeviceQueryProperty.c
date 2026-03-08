/*
 * XREFs of imp_VfWdfDeviceQueryProperty @ 0x1C00B3F70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfDeviceQueryProperty(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        __int64 DeviceProperty,
        __int64 BufferLength,
        void *PropertyBuffer,
        unsigned int *ResultLength)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, __int64, __int64, void *, unsigned int *))WdfVersion.Functions.pfnWdfDeviceQueryProperty)(
           DriverGlobals,
           Device,
           DeviceProperty,
           BufferLength,
           PropertyBuffer,
           ResultLength);
}
