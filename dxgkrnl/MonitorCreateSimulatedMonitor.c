/*
 * XREFs of MonitorCreateSimulatedMonitor @ 0x1C03BF180
 * Callers:
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01670E0 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F4F24 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C02F7E30 (DxgkHandleForceProjectionMonitor.c)
 *     MonitorDRTTest @ 0x1C03BF2F0 (MonitorDRTTest.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0167EEC (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C01F83FC (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03C343C (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 */

__int64 __fastcall MonitorCreateSimulatedMonitor(
        PERESOURCE *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // rbp
  __int64 v10; // rdi
  _QWORD *v11; // rax
  PERESOURCE v12; // rax
  __int64 Blink; // r14
  int IsTargetForceable; // eax
  unsigned int v16; // ebx
  bool v17; // [rsp+58h] [rbp+10h] BYREF
  __int64 v18; // [rsp+68h] [rbp+20h] BYREF

  v18 = a4;
  v8 = (int)a3;
  v10 = (unsigned int)a2;
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v11[3] = v8;
  v11[4] = v10;
  v11[5] = this;
  if ( !this || (_DWORD)v10 == -1 || (_DWORD)v8 == 1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
    WdLogSingleEntry0(1LL);
  v12 = this[365];
  if ( !v12 || (Blink = (__int64)v12[1].SystemResourcesList.Blink) == 0 )
  {
    WdLogSingleEntry1(2LL, this);
    return 3221225485LL;
  }
  if ( a6 )
    goto LABEL_16;
  v17 = 0;
  IsTargetForceable = DmmIsTargetForceable((DXGADAPTER *)this, v10, &v17, v8);
  v16 = IsTargetForceable;
  if ( IsTargetForceable < 0 )
  {
    WdLogSingleEntry2(2LL, v10, IsTargetForceable);
    return v16;
  }
  if ( v17 )
  {
LABEL_16:
    v18 = 0LL;
    v16 = MONITOR_MGR::_HandleCreateSimulatedMonitor(Blink, (unsigned int)v10, (unsigned int)v8, 0LL, &v18, a8);
    MONITOR_MGR::_LogMonitorPresentEvent(Blink, 1073741825, v10, v16, 0LL);
    return v16;
  }
  WdLogSingleEntry1(3LL, v10);
  return 3221225659LL;
}
