/*
 * XREFs of HUBFDO_EvtPrePoFxUnregisterDevice @ 0x1C000EEF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044B40 (_guard_dispatch_icall_nop.c)
 *     TUNNEL_UnregisterForPnPNotifications @ 0x1C008D9F8 (TUNNEL_UnregisterForPnPNotifications.c)
 */

__int64 __fastcall HUBFDO_EvtPrePoFxUnregisterDevice(__int64 a1)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0069198);
  *(_QWORD *)(v1 + 2608) = 0LL;
  return TUNNEL_UnregisterForPnPNotifications(v1);
}
