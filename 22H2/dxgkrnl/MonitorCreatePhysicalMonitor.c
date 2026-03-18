/*
 * XREFs of MonitorCreatePhysicalMonitor @ 0x1C0209A70
 * Callers:
 *     DpiPdoHandleChildConnectionChange @ 0x1C020F55C (DpiPdoHandleChildConnectionChange.c)
 *     DpiPdoAddPdo @ 0x1C0210B20 (DpiPdoAddPdo.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005BA8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z @ 0x1C0014EC8 (--0-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C01AC420 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C01DD878 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     _anonymous_namespace_::DetermineIfNeedToChangeActivity @ 0x1C02072A0 (_anonymous_namespace_--DetermineIfNeedToChangeActivity.c)
 *     ?_GetMonitorDiagInfo@DXGMONITOR@@QEBAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C02091B4 (-_GetMonitorDiagInfo@DXGMONITOR@@QEBAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0209E7C (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4.c)
 */

__int64 __fastcall MonitorCreatePhysicalMonitor(
        char *a1,
        __int64 a2,
        struct _DEVICE_OBJECT *a3,
        __int64 a4,
        char a5,
        struct _DXGK_CONNECTION_USB4_INFO *a6,
        bool *a7,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a8)
{
  unsigned __int8 v8; // r15
  __int64 v9; // rdi
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  MONITOR_MGR *v16; // rbp
  unsigned int PhysicalMonitor; // eax
  unsigned int v18; // r14d
  DXGMONITOR *v19; // rsi
  _OWORD v20[2]; // [rsp+40h] [rbp-38h] BYREF
  DXGMONITOR *v21; // [rsp+80h] [rbp+8h] BYREF

  v8 = a4;
  v9 = (unsigned int)a2;
  v12 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v12 + 24) = v9;
  *(_QWORD *)(v12 + 32) = a1;
  if ( !a1 || !a3 || (_DWORD)v9 == -1 )
    return 3221225485LL;
  v13 = (__int64)a8;
  if ( a8 )
  {
    *((_DWORD *)a8 + 9) = v9;
    *(_QWORD *)(v13 + 52) = *(_QWORD *)(a1 + 404);
    *(_DWORD *)(v13 + 40) = 1;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
    WdLogSingleEntry0(1LL);
  v14 = *((_QWORD *)a1 + 365);
  if ( !v14 || (v16 = *(MONITOR_MGR **)(v14 + 112)) == 0LL )
  {
    WdLogSingleEntry1(2LL, a1);
    return 3221225485LL;
  }
  PhysicalMonitor = MONITOR_MGR::_HandleCreatePhysicalMonitor(
                      v16,
                      v9,
                      a3,
                      v8,
                      a5,
                      a6,
                      (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v13);
  v21 = 0LL;
  memset(v20, 0, sizeof(v20));
  v18 = PhysicalMonitor;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v16, v9, 1, &v21) >= 0 )
  {
    v19 = v21;
    if ( v21 )
    {
      RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v21, (__int64)v21, 0);
      DXGMONITOR::_GetMonitorDiagInfo(v19, (struct _DXGK_DIAG_MONITOR_MGR_EXTRA_INFO *)v20);
      if ( v21 )
      {
        ExReleaseResourceLite((PERESOURCE)((char *)v21 + 24));
        KeLeaveCriticalRegion();
      }
    }
  }
  MONITOR_MGR::_LogMonitorPresentEvent((__int64)v16, 1, v9, v18, v20);
  anonymous_namespace_::DetermineIfNeedToChangeActivity((DXGADAPTER *)a1, v9, a7);
  return v18;
}
