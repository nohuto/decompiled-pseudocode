/*
 * XREFs of HUBFDO_EvtPostPoFxRegisterDevice @ 0x1C000EF70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     TUNNEL_RegisterForPnPNotifications @ 0x1C008E8E4 (TUNNEL_RegisterForPnPNotifications.c)
 */

__int64 __fastcall HUBFDO_EvtPostPoFxRegisterDevice(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  bool v4; // zf
  __int64 v5; // rax
  __int64 v6; // r8

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C006A198);
  v4 = *(_BYTE *)(v3 + 240) == 0;
  *(_QWORD *)(v3 + 2608) = a2;
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *))(WdfFunctions_01015 + 944))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver);
    LOBYTE(v6) = 1;
    PoFxRegisterDripsWatchdogCallback(a2, HUBPDO_PoFxDripsWatchdogCallback, v6, v5);
  }
  if ( (*(_DWORD *)(v3 + 44) & 0x20) != 0 )
    TUNNEL_RegisterForPnPNotifications(v3);
  return 0LL;
}
