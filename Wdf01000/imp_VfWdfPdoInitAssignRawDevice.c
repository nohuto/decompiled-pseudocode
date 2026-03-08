/*
 * XREFs of imp_VfWdfPdoInitAssignRawDevice @ 0x1C00B6280
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfPdoInitAssignRawDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _GUID *DeviceClassGuid)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE_INIT *, const _GUID *))WdfVersion.Functions.pfnWdfPdoInitAssignRawDevice)(
           DriverGlobals,
           DeviceInit,
           DeviceClassGuid);
}
