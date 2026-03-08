/*
 * XREFs of ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C00B809C
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00B4A78 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     UserPowerInfoCallout @ 0x1C00B657C (UserPowerInfoCallout.c)
 *     UserPowerStateCallout @ 0x1C00B7A1C (UserPowerStateCallout.c)
 *     PowerOffMonitor @ 0x1C015BA60 (PowerOffMonitor.c)
 *     PowerOnMonitor @ 0x1C015BD90 (PowerOnMonitor.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0070484 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall UserSessionSwitchBlock_Start(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // edi
  int v10; // edi
  char v11; // [rsp+30h] [rbp+8h] BYREF
  int v12; // [rsp+38h] [rbp+10h]

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v11, a2, a3, a4);
  if ( v11 && HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
  {
    v12 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 230LL);
  }
  if ( gnPoSessionSwitchBlockCount > 0 )
  {
    ++gnPoSessionSwitchBlockCount;
LABEL_4:
    v8 = 0;
    goto LABEL_5;
  }
  if ( !HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
  {
    v10 = *(_DWORD *)SGDGetUserSessionState(v5, v4, v6, v7);
    if ( (unsigned int)RtlGetActiveConsoleId() == v10 && !gfSessionSwitchBlock )
    {
      ++gnPoSessionSwitchBlockCount;
      gfSessionSwitchBlock = 1;
      goto LABEL_4;
    }
  }
  v8 = -1073086428;
LABEL_5:
  if ( !v11 )
    UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v8;
}
