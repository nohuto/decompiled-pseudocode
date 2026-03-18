/*
 * XREFs of HUBPDO_EvtDeviceReportedMissing @ 0x1C007F3B0
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddDsmEvent @ 0x1C000A740 (HUBSM_AddDsmEvent.c)
 *     EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Cleanup @ 0x1C001D11C (EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Cleanup.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044B40 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall HUBPDO_EvtDeviceReportedMissing(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00690F8);
  HUBSM_AddDsmEvent(*(_QWORD *)(v1 + 24), 4083LL);
  return EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Cleanup(*(_QWORD *)(v1 + 24), v2);
}
