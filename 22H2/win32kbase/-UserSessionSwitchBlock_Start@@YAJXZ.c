/*
 * XREFs of ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0010ADC
 * Callers:
 *     UserPowerInfoCallout @ 0x1C000FBD4 (UserPowerInfoCallout.c)
 *     UserPowerStateCallout @ 0x1C0010460 (UserPowerStateCallout.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C009F448 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOffMonitor @ 0x1C0133C60 (PowerOffMonitor.c)
 *     PowerOnMonitor @ 0x1C0133F80 (PowerOnMonitor.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00385C4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 UserSessionSwitchBlock_Start(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // edi
  int v6; // edi
  char v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+38h] [rbp+10h]

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v7);
  if ( v7 && HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
  {
    v8 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 228LL);
  }
  if ( gnPoSessionSwitchBlockCount > 0 )
  {
    ++gnPoSessionSwitchBlockCount;
LABEL_4:
    v4 = 0;
    goto LABEL_5;
  }
  if ( !HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
  {
    v6 = *(_DWORD *)SGDGetUserSessionState(v1, v0, v2, v3);
    if ( (unsigned int)RtlGetActiveConsoleId() == v6 && !gfSessionSwitchBlock )
    {
      ++gnPoSessionSwitchBlockCount;
      gfSessionSwitchBlock = 1;
      goto LABEL_4;
    }
  }
  v4 = -1073086428;
LABEL_5:
  if ( !v7 )
    UserSessionSwitchLeaveCrit();
  return v4;
}
