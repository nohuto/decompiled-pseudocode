/*
 * XREFs of imp_VfWdfDeviceCreate @ 0x1C00B38C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     AddEventHooksWdfDeviceCreate @ 0x1C00B7C90 (AddEventHooksWdfDeviceCreate.c)
 */

__int64 __fastcall imp_VfWdfDeviceCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT **DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *DeviceAttributes,
        WDFDEVICE__ **Device)
{
  _VF_HOOK_PROCESS_INFO hookInfo; // [rsp+30h] [rbp-18h] BYREF

  hookInfo = 0LL;
  AddEventHooksWdfDeviceCreate(&hookInfo, DriverGlobals, DeviceInit, DeviceAttributes, Device);
  if ( hookInfo.DonotCallKmdfLib )
    return hookInfo.DdiCallStatus;
  else
    return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE_INIT **, _WDF_OBJECT_ATTRIBUTES *, WDFDEVICE__ **))WdfVersion.Functions.pfnWdfDeviceCreate)(
             DriverGlobals,
             DeviceInit,
             DeviceAttributes,
             Device);
}
