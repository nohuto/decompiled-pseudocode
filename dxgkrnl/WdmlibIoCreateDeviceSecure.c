/*
 * XREFs of WdmlibIoCreateDeviceSecure @ 0x1C0203154
 * Callers:
 *     DpiPdoAddPdo @ 0x1C0201FA0 (DpiPdoAddPdo.c)
 *     DpiGdoCreateGdiObjects @ 0x1C0202D20 (DpiGdoCreateGdiObjects.c)
 *     DriverEntry @ 0x1C03D9E6C (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     WdmlibInit @ 0x1C0200958 (WdmlibInit.c)
 */

NTSTATUS __stdcall WdmlibIoCreateDeviceSecure(
        PDRIVER_OBJECT DriverObject,
        ULONG DeviceExtensionSize,
        PUNICODE_STRING DeviceName,
        ULONG DeviceType,
        ULONG DeviceCharacteristics,
        BOOLEAN Exclusive,
        PCUNICODE_STRING DefaultSDDLString,
        LPCGUID DeviceClassGuid,
        PDEVICE_OBJECT *DeviceObject)
{
  if ( !WdmlibInitialized )
    WdmlibInit();
  return ((__int64 (__fastcall *)(PDRIVER_OBJECT, _QWORD, PUNICODE_STRING, _QWORD, ULONG, _BYTE, PCUNICODE_STRING, LPCGUID, PDEVICE_OBJECT *))PfnIoCreateDeviceSecure)(
           DriverObject,
           DeviceExtensionSize,
           DeviceName,
           DeviceType,
           DeviceCharacteristics,
           0,
           DefaultSDDLString,
           DeviceClassGuid,
           DeviceObject);
}
