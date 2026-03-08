/*
 * XREFs of TUNNEL_RegisterForPnPNotifications @ 0x1C008E8E4
 * Callers:
 *     HUBFDO_EvtPostPoFxRegisterDevice @ 0x1C000EF70 (HUBFDO_EvtPostPoFxRegisterDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall TUNNEL_RegisterForPnPNotifications(__int64 a1)
{
  __int64 v2; // rax
  struct _DRIVER_OBJECT *v3; // rax
  NTSTATUS result; // eax
  PVOID Context; // [rsp+28h] [rbp-20h]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 312))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  v3 = (struct _DRIVER_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 944))(
                                  WdfDriverGlobals,
                                  v2);
  result = IoRegisterPlugPlayNotification(
             EventCategoryDeviceInterfaceChange,
             1u,
             (PVOID)&GUID_DEVINTERFACE_USB4_VIRTUAL_POWER_PDO,
             v3,
             (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)TUNNEL_EvtInterfaceChange,
             *(PVOID *)(a1 + 16),
             (PVOID *)(a1 + 2752));
  if ( result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(Context) = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(a1 + 2520),
             2u,
             3u,
             0x23u,
             (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
             Context);
  }
  return result;
}
