/*
 * XREFs of PowerOnMonitor @ 0x1C0078C80
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0078210 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00C1188 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     ?DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C0078A98 (-DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C0078C2C (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     EtwTracePowerOnMonitorEnd @ 0x1C0078F80 (EtwTracePowerOnMonitorEnd.c)
 *     PowerUnDimMonitor @ 0x1C0078FA0 (PowerUnDimMonitor.c)
 *     EtwTracPowerOnMonitoreBegin @ 0x1C0079308 (EtwTracPowerOnMonitoreBegin.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0079384 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0079638 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     SqmPowerState @ 0x1C0079F90 (SqmPowerState.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C007A2C4 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     DrvSetMonitorPowerState @ 0x1C00C3910 (DrvSetMonitorPowerState.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00C3ED0 (DrvDxgkLogCodePointPacket.c)
 *     DrvChangeD3RequestsState @ 0x1C00C48C4 (DrvChangeD3RequestsState.c)
 *     DCompositionForceRender @ 0x1C00C4934 (DCompositionForceRender.c)
 *     IsSetPointerSupported @ 0x1C00C4FDC (IsSetPointerSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PowerOnMonitor(enum POWER_MONITOR_REQUEST_REASON a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  BOOL v6; // edi
  int v8; // ebx
  int v9; // r15d
  int v10; // esi
  int v11; // r9d
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  int v16[4]; // [rsp+40h] [rbp-38h] BYREF
  int v17; // [rsp+98h] [rbp+20h] BYREF

  result = gpbInHiberBoot;
  v6 = gPowerTransitionsState == 0;
  v8 = 0;
  v9 = 0;
  if ( !*(_BYTE *)gpbInHiberBoot )
  {
    EtwTracPowerOnMonitoreBegin(a3);
    v10 = -1073741637;
    if ( v6 )
    {
      if ( !gProtocolType )
      {
        if ( !gPowerTransitionsState && !qword_1C02511A4 )
        {
          v17 = 1;
          ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v17, 4LL, 0LL, 0LL, 0, 0);
          v9 = 1;
        }
        DrvChangeD3RequestsState(0LL);
        UserSessionSwitchBlock_Start();
        if ( gptiCurrent )
        {
          v12 = *((_QWORD *)gptiCurrent + 57);
          if ( v12 )
          {
            v13 = *(_QWORD *)(v12 + 8);
            if ( v13 )
            {
              if ( (*(_DWORD *)(*(_QWORD *)v13 + 64LL) & 1) != 0 )
                DCompositionForceRender(1LL, 0LL, 0LL, 0LL);
            }
          }
        }
        DrvDxgkLogCodePointPacket(13LL, 0LL, 0LL);
        if ( grpdeskRitInput && (int)IsSetPointerSupported() >= 0 && qword_1C02565D8 )
          qword_1C02565D8(0LL);
        DisplayRestoreVidPnJournalBegin((unsigned int)a1);
        ArmPowerWatchdog((__int64)gpRequestWorkerWatchdog, 80);
        DrvSetMonitorPowerState(*(_QWORD *)(gpDispInfo + 16), 1LL, 0LL, a2);
        DisarmPowerWatchdog((__int64)gpRequestWorkerWatchdog, 80);
        DisplayRestoreVidPnJournalFinalize(a2);
        if ( qword_1C02565F0 )
          v14 = qword_1C02565F0();
        else
          v14 = -1073741637;
        if ( v14 >= 0 && qword_1C02565F8 )
          qword_1C02565F8();
        if ( grpdeskRitInput && (int)IsSetPointerSupported() >= 0 && qword_1C02565D8 )
          qword_1C02565D8(1LL);
        if ( gSqmIsOptedIn )
          SqmPowerState();
        UserSessionSwitchBlock_End();
        LOBYTE(v15) = 1;
        DrvChangeD3RequestsState(v15);
      }
      v8 = 1;
    }
    PowerUnDimMonitor();
    if ( dword_1C0251210 == 2 )
      v8 = 1;
    if ( v8 )
      UpdateDisplayState(PowerMonitorOn, a1, v6, v11);
    if ( v6 && grpdeskRitInput )
    {
      if ( qword_1C02565E0 )
        v10 = qword_1C02565E0();
      if ( v10 >= 0 && qword_1C02565E8 )
        qword_1C02565E8();
    }
    if ( v9 )
    {
      v16[0] = 3;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, v16, 4LL, 0LL, 0LL, 0, 0);
    }
    return EtwTracePowerOnMonitorEnd(a3);
  }
  return result;
}
