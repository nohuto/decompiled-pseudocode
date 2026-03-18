/*
 * XREFs of PowerConnectionEvent @ 0x1C007AD94
 * Callers:
 *     SetConnectCompletedState @ 0x1C007AD40 (SetConnectCompletedState.c)
 *     xxxRemoteConnect @ 0x1C007EDC0 (xxxRemoteConnect.c)
 *     SetConnectedState @ 0x1C00C5A50 (SetConnectedState.c)
 * Callees:
 *     ?ApplyAdaptiveSessionState@@YAXPEAU_PO_ADAPTIVE_SESSION_STATE@@@Z @ 0x1C007D0A4 (-ApplyAdaptiveSessionState@@YAXPEAU_PO_ADAPTIVE_SESSION_STATE@@@Z.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C007DB30 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0147258 (-SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void PowerConnectionEvent()
{
  int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  _BYTE InputBuffer[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 OutputBuffer; // [rsp+38h] [rbp-20h] BYREF
  int v6; // [rsp+40h] [rbp-18h]

  OutputBuffer = 0LL;
  v0 = gbConnected != 0;
  v6 = 0;
  if ( dword_1C02950FC != v0 )
  {
    dword_1C02950FC = gbConnected != 0;
    CInputGlobals::UpdateLastInputTime(
      gpInputGlobals,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      15LL);
    InputBuffer[0] = v0;
    InputBuffer[1] = gProtocolType == 0;
    if ( ZwPowerInformation(PowerInformationLevelMaximum|SystemReserveHiberFile, InputBuffer, 2u, &OutputBuffer, 0xCu) < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v1, v3);
    if ( !v0 )
    {
      if ( (_DWORD)OutputBuffer )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v1, v3);
      if ( HIDWORD(OutputBuffer) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v1, v3);
      if ( (_BYTE)v6 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v1, v3);
    }
    ApplyAdaptiveSessionState((struct _PO_ADAPTIVE_SESSION_STATE *)&OutputBuffer);
    if ( v0 )
    {
      if ( gSystemIsAoAc )
        SetInputModeWithCrit(0LL);
    }
  }
}
