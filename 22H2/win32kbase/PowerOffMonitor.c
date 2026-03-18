/*
 * XREFs of PowerOffMonitor @ 0x1C0133C60
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C009E7F8 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C009F448 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0010ADC (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0010BBC (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0065068 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     PostWinlogonMessage @ 0x1C0086360 (PostWinlogonMessage.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00BA8D0 (DrvDxgkLogCodePointPacket.c)
 *     DrvSetMonitorPowerState @ 0x1C00C4CB0 (DrvSetMonitorPowerState.c)
 *     ?PowerOffMonitor@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00D0AE4 (-PowerOffMonitor@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ?SetProximityBlocking@@YAXXZ @ 0x1C0132CB0 (-SetProximityBlocking@@YAXXZ.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0132ECC (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 */

void __fastcall PowerOffMonitor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  enum POWER_MONITOR_REQUEST_REASON v6; // edi
  int v7; // esi
  unsigned int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // rcx
  __int64 v36; // rbx
  unsigned int v37; // [rsp+40h] [rbp-10h] BYREF
  __int64 v38; // [rsp+48h] [rbp-8h] BYREF
  int v39; // [rsp+90h] [rbp+40h] BYREF
  int v40; // [rsp+98h] [rbp+48h] BYREF

  v37 = 0;
  v5 = 0;
  v38 = 0LL;
  v6 = (int)a1;
  v40 = 0;
  v7 = 0;
  v8 = *(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 2952);
  if ( *(_DWORD *)(SGDGetUserSessionState(v10, v9, v11, v12) + 2952)
    || *(_DWORD *)(SGDGetUserSessionState(v14, v13, v15, v16) + 2972)
    || *(_DWORD *)(SGDGetUserSessionState(v18, v17, v19, v20) + 2976) )
  {
    InputTraceLogging::Power::PowerOffMonitor(v6);
    if ( !gProtocolType )
    {
      if ( v6 != MonitorRequestReasonGracePeriod && v6 != MonitorRequestReasonNearProximity )
      {
        v39 = 2;
        ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v39, 4LL, 0LL, 0LL);
        v7 = 1;
      }
      UserSessionSwitchBlock_Start();
      if ( gfIsFadingInProgress
        || !grpdeskRitInput
        || (v5 = 1, gfIsFadingInProgress = 1, !qword_1C0295980)
        || (int)qword_1C0295980() < 0
        || qword_1C0295988 && (int)qword_1C0295988(&v37, &v38, &v40) >= 0 )
      {
        v31 = v38;
      }
      else
      {
        v31 = 0LL;
        v38 = 0LL;
      }
      if ( v40 )
      {
        UserSessionSwitchLeaveCrit(v28, v27, v29, v30);
        if ( qword_1C0295990 && (int)qword_1C0295990() >= 0 && qword_1C0295998 )
          qword_1C0295998(v37, v38, 167LL, 0LL);
        DrvDxgkLogCodePointPacket(14LL, v38 != 0, 0, 0);
        LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v39, v32, v33, v34);
      }
      else
      {
        DrvDxgkLogCodePointPacket(14LL, v31 != 0, 0, 0);
      }
      if ( qword_1C02959A0 && (int)qword_1C02959A0() >= 0 && qword_1C02959A8 )
        qword_1C02959A8();
      DrvSetMonitorPowerState(*((_QWORD *)gpDispInfo + 2), 4u, 1, a2);
      if ( v38 && qword_1C02959D0 && (int)qword_1C02959D0() >= 0 && qword_1C02959D8 )
        qword_1C02959D8(v38);
      if ( v5 )
        gfIsFadingInProgress = 0;
      UserSessionSwitchBlock_End();
    }
    if ( v6 != MonitorRequestReasonGracePeriod && v6 != MonitorRequestReasonNearProximity )
    {
      v35 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
      v36 = (v35 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      *(_QWORD *)(SGDGetUserSessionState(v35, v36, v25, v26) + 3040) = v36;
    }
    UpdateDisplayState(0LL, (unsigned int)v6, v8, v26);
    if ( gppiScreenSaver )
      PostWinlogonMessage(0x405u, 0LL);
    if ( v7 )
    {
      v39 = 0;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v39, 4LL, 0LL, 0LL);
    }
  }
  else if ( v6 == MonitorRequestReasonNearProximity )
  {
    SetProximityBlocking(v22, v21, v23, v24);
  }
}
