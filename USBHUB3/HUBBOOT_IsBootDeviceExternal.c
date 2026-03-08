/*
 * XREFs of HUBBOOT_IsBootDeviceExternal @ 0x1C003FAF4
 * Callers:
 *     HUBPDO_EvtDeviceUsageNotificationEx @ 0x1C001CA80 (HUBPDO_EvtDeviceUsageNotificationEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall HUBBOOT_IsBootDeviceExternal(__int64 a1)
{
  char v1; // bl
  struct _DEVICE_OBJECT *v2; // rax
  char Data; // [rsp+58h] [rbp+10h] BYREF
  ULONG Type; // [rsp+60h] [rbp+18h] BYREF
  ULONG RequiredSize; // [rsp+68h] [rbp+20h] BYREF

  RequiredSize = 0;
  v1 = 1;
  Type = 0;
  Data = 0;
  v2 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(
                                  WdfDriverGlobals,
                                  a1);
  if ( IoGetDevicePropertyData(v2, &DEVPKEY_Device_InLocalMachineContainer, 0, 0, 1u, &Data, &RequiredSize, &Type) >= 0 )
    return Data == 0;
  return v1;
}
