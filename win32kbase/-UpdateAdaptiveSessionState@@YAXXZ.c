/*
 * XREFs of ?UpdateAdaptiveSessionState@@YAXXZ @ 0x1C00169A0
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00B4A78 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     UserPowerInfoCallout @ 0x1C00B657C (UserPowerInfoCallout.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C015A9DC (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C015AD80 (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 * Callees:
 *     ?GetAdaptiveSessionContext@@YAXPEAU_PO_ADAPTIVE_SESSION_CONTEXT@@@Z @ 0x1C0016A3C (-GetAdaptiveSessionContext@@YAXPEAU_PO_ADAPTIVE_SESSION_CONTEXT@@@Z.c)
 *     ?ApplyAdaptiveSessionState@@YAXPEAU_PO_ADAPTIVE_SESSION_STATE@@@Z @ 0x1C0016B70 (-ApplyAdaptiveSessionState@@YAXPEAU_PO_ADAPTIVE_SESSION_STATE@@@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void UpdateAdaptiveSessionState(void)
{
  __int128 OutputBuffer; // [rsp+38h] [rbp-50h] BYREF
  _OWORD InputBuffer[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v2; // [rsp+68h] [rbp-20h]

  memset(InputBuffer, 0, sizeof(InputBuffer));
  LODWORD(InputBuffer[0]) = 81;
  OutputBuffer = 0LL;
  v2 = 0LL;
  GetAdaptiveSessionContext((struct _PO_ADAPTIVE_SESSION_CONTEXT *)((char *)InputBuffer + 8));
  if ( ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x28u, &OutputBuffer, 0x10u) < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2843LL);
  ApplyAdaptiveSessionState((struct _PO_ADAPTIVE_SESSION_STATE *)&OutputBuffer);
}
