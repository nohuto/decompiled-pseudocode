/*
 * XREFs of HUBMISC_DbgBreak @ 0x1C0032E3C
 * Callers:
 *     HUBSM_LogUnhandledEvent @ 0x1C000A75C (HUBSM_LogUnhandledEvent.c)
 *     HUBSM_FindAndSetTargetState @ 0x1C000A96C (HUBSM_FindAndSetTargetState.c)
 *     HUBSM_RunStateMachine @ 0x1C000BDDC (HUBSM_RunStateMachine.c)
 *     HUBMUX_ReleaseInterruptReference @ 0x1C0010CC8 (HUBMUX_ReleaseInterruptReference.c)
 *     HUBPDO_EvtDeviceUsageNotificationEx @ 0x1C001C970 (HUBPDO_EvtDeviceUsageNotificationEx.c)
 *     HUBIDLE_AddEvent @ 0x1C003E9A4 (HUBIDLE_AddEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C002E408 (WPP_RECORDER_SF_s.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044B40 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBMISC_DbgBreak(const char *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  char result; // al
  int v7; // [rsp+20h] [rbp-18h]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C00691E8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_s(*(_QWORD *)(v2 + 64), v3, v4, v5, v7, a1);
  result = KdRefreshDebuggerNotPresent();
  if ( !result )
  {
    result = DbgPrint("Breaking due to %s. For more details run: !rcdrlogdump usbhub3\n", a1);
    __debugbreak();
  }
  return result;
}
