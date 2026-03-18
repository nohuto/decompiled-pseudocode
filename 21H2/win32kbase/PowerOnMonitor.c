/*
 * XREFs of PowerOnMonitor @ 0x1C007D2B0
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C007C7B0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00D0E68 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     ?DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C007CF38 (-DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C007D260 (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     EtwTracePowerOnMonitorEnd @ 0x1C007D59C (EtwTracePowerOnMonitorEnd.c)
 *     PowerUnDimMonitor @ 0x1C007D5BC (PowerUnDimMonitor.c)
 *     EtwTracPowerOnMonitoreBegin @ 0x1C007D9E8 (EtwTracPowerOnMonitoreBegin.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C007E114 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C007E314 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00D05E0 (DrvDxgkLogCodePointPacket.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00D0788 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     DCompositionForceRender @ 0x1C00D27C0 (DCompositionForceRender.c)
 *     DrvSetMonitorPowerState @ 0x1C00D2E20 (DrvSetMonitorPowerState.c)
 *     DrvChangeD3RequestsState @ 0x1C00D3DB0 (DrvChangeD3RequestsState.c)
 *     IsSetPointerSupported @ 0x1C00D440C (IsSetPointerSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     SqmPowerState @ 0x1C0147FA0 (SqmPowerState.c)
 */

__int64 __fastcall PowerOnMonitor(enum POWER_MONITOR_REQUEST_REASON a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  BOOL v6; // edi
  int v8; // ebx
  int v9; // ebp
  int v10; // r9d
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // [rsp+88h] [rbp+20h] BYREF

  result = gpbInHiberBoot;
  v6 = gPowerTransitionsState == 0;
  v8 = 0;
  v9 = 0;
  if ( !*(_BYTE *)gpbInHiberBoot )
  {
    EtwTracPowerOnMonitoreBegin(a3);
    if ( v6 )
    {
      if ( !gProtocolType )
      {
        if ( !gPowerTransitionsState && !qword_1C0296FD4 )
        {
          v14 = 1;
          ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v14, 4LL, 0LL, 0LL);
          v9 = 1;
        }
        DrvChangeD3RequestsState(0LL);
        UserSessionSwitchBlock_Start();
        if ( gptiCurrent )
        {
          v11 = *((_QWORD *)gptiCurrent + 57);
          if ( v11 )
          {
            v12 = *(_QWORD *)(v11 + 8);
            if ( v12 )
            {
              if ( (*(_DWORD *)(*(_QWORD *)v12 + 64LL) & 1) != 0 )
                DCompositionForceRender(1LL, 0LL, 0LL, 0LL);
            }
          }
        }
        DrvDxgkLogCodePointPacket(13LL, 0LL, 0LL, 0LL);
        if ( grpdeskRitInput && (int)IsSetPointerSupported() >= 0 && qword_1C029C318 )
          qword_1C029C318(0LL);
        DisplayRestoreVidPnJournalBegin((unsigned int)a1);
        ArmPowerWatchdog((__int64)gpRequestWorkerWatchdog, 80);
        DrvSetMonitorPowerState(*((_QWORD *)gpDispInfo + 2), 1LL, 0LL, a2);
        DisarmPowerWatchdog((__int64)gpRequestWorkerWatchdog, 80);
        DisplayRestoreVidPnJournalFinalize(a2);
        if ( qword_1C029C330 && (int)qword_1C029C330() >= 0 && qword_1C029C338 )
          qword_1C029C338();
        if ( grpdeskRitInput && (int)IsSetPointerSupported() >= 0 && qword_1C029C318 )
          qword_1C029C318(1LL);
        if ( gSqmIsOptedIn )
          SqmPowerState();
        UserSessionSwitchBlock_End();
        LOBYTE(v13) = 1;
        DrvChangeD3RequestsState(v13);
      }
      v8 = 1;
    }
    PowerUnDimMonitor();
    if ( dword_1C0296F70 == 2 || v8 )
      UpdateDisplayState(PowerMonitorOn, a1, v6, v10);
    if ( v6 && grpdeskRitInput && qword_1C029C320 && (int)qword_1C029C320() >= 0 && qword_1C029C328 )
      qword_1C029C328();
    if ( v9 )
    {
      v14 = 3;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v14, 4LL, 0LL, 0LL);
    }
    return EtwTracePowerOnMonitorEnd(a3);
  }
  return result;
}
