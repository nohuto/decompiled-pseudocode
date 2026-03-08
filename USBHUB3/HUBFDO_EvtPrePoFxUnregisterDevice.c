/*
 * XREFs of HUBFDO_EvtPrePoFxUnregisterDevice @ 0x1C000F020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     TUNNEL_UnregisterForPnPNotifications @ 0x1C008E9B8 (TUNNEL_UnregisterForPnPNotifications.c)
 */

__int64 __fastcall HUBFDO_EvtPrePoFxUnregisterDevice(__int64 a1)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C006A198);
  *(_QWORD *)(v1 + 2608) = 0LL;
  return TUNNEL_UnregisterForPnPNotifications(v1);
}
