/*
 * XREFs of PowerOffMonitor @ 0x1C015BA60
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00B3E28 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00B4A78 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0085FBC (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     PostWinlogonMessage @ 0x1C0090D50 (PostWinlogonMessage.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C00B809C (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C00B817C (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00CA680 (DrvDxgkLogCodePointPacket.c)
 *     DrvSetMonitorPowerState @ 0x1C00D41A0 (DrvSetMonitorPowerState.c)
 *     ?PowerOffMonitor@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00DD3BC (-PowerOffMonitor@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledDeviceUsage @ 0x1C00DD67C (Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ?SetProximityBlocking@@YAXXZ @ 0x1C015A7C0 (-SetProximityBlocking@@YAXXZ.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C015A9DC (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 */

void __fastcall PowerOffMonitor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  enum POWER_MONITOR_REQUEST_REASON v6; // edi
  int v7; // esi
  int v8; // r15d
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
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned __int64 v41; // rcx
  __int64 v42; // rbx
  unsigned int v43; // [rsp+40h] [rbp-10h] BYREF
  __int64 v44; // [rsp+48h] [rbp-8h] BYREF
  int v45; // [rsp+90h] [rbp+40h] BYREF
  int v46; // [rsp+98h] [rbp+48h] BYREF

  v43 = 0;
  v5 = 0;
  v44 = 0LL;
  v6 = (int)a1;
  v46 = 0;
  v7 = 0;
  v8 = *(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 2952);
  if ( *(_DWORD *)(SGDGetUserSessionState(v10, v9, v11, v12) + 2952)
    || *(_DWORD *)(SGDGetUserSessionState(v14, v13, v15, v16) + 2972)
    || *(_DWORD *)(SGDGetUserSessionState(v18, v17, v19, v20) + 2976) )
  {
    if ( (unsigned int)Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledDeviceUsage() )
      InputTraceLogging::Power::PowerOffMonitor(v6);
    if ( !gProtocolType )
    {
      if ( v6 != MonitorRequestReasonGracePeriod && v6 != MonitorRequestReasonNearProximity )
      {
        v45 = 2;
        ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v45, 4LL, 0LL, 0LL);
        v7 = 1;
      }
      UserSessionSwitchBlock_Start(v26, v25, v27, v28);
      if ( gfIsFadingInProgress
        || !grpdeskRitInput
        || (v5 = 1, gfIsFadingInProgress = 1, !qword_1C02D6AF8)
        || (int)qword_1C02D6AF8() < 0
        || qword_1C02D6B00 && (int)qword_1C02D6B00(&v43, &v44, &v46) >= 0 )
      {
        v33 = v44;
      }
      else
      {
        v33 = 0LL;
        v44 = 0LL;
      }
      if ( v46 )
      {
        UserSessionSwitchLeaveCrit(v30, v29, v31, v32);
        if ( qword_1C02D6B08 && (int)qword_1C02D6B08() >= 0 && qword_1C02D6B10 )
          qword_1C02D6B10(v43, v44, 167LL, 0LL);
        DrvDxgkLogCodePointPacket(14LL, v44 != 0, 0, 0);
        LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v45, v34, v35, v36);
      }
      else
      {
        DrvDxgkLogCodePointPacket(14LL, v33 != 0, 0, 0);
      }
      if ( qword_1C02D6B18 && (int)qword_1C02D6B18() >= 0 && qword_1C02D6B20 )
        qword_1C02D6B20();
      DrvSetMonitorPowerState(*((_QWORD *)gpDispInfo + 2), 4u, 1, a2);
      if ( v44 && qword_1C02D6B48 && (int)qword_1C02D6B48() >= 0 && qword_1C02D6B50 )
        qword_1C02D6B50(v44);
      if ( v5 )
        gfIsFadingInProgress = 0;
      UserSessionSwitchBlock_End(v38, v37, v39, v40);
    }
    if ( v6 != MonitorRequestReasonGracePeriod && v6 != MonitorRequestReasonNearProximity )
    {
      v41 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
      v42 = (v41 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      *(_QWORD *)(SGDGetUserSessionState(v41, v42, v27, v28) + 3040) = v42;
    }
    UpdateDisplayState(PowerMonitorOff, v6, v8);
    if ( gppiScreenSaver )
      PostWinlogonMessage(1029LL, 0);
    if ( v7 )
    {
      v45 = 0;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v45, 4LL, 0LL, 0LL);
    }
  }
  else if ( v6 == MonitorRequestReasonNearProximity )
  {
    SetProximityBlocking(v22, v21, v23, v24);
  }
}
