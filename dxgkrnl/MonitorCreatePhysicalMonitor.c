/*
 * XREFs of MonitorCreatePhysicalMonitor @ 0x1C01FA828
 * Callers:
 *     DpiPdoHandleChildConnectionChange @ 0x1C02009DC (DpiPdoHandleChildConnectionChange.c)
 *     DpiPdoAddPdo @ 0x1C0201FA0 (DpiPdoAddPdo.c)
 * Callees:
 *     ??0?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z @ 0x1C0001F08 (--0-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     Feature_EnableIddCx110__private_IsEnabledDeviceUsage @ 0x1C0024584 (Feature_EnableIddCx110__private_IsEnabledDeviceUsage.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0167EEC (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C0176CA0 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C01AAC00 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C01AFE1C (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     _anonymous_namespace_::DetermineIfNeedToChangeActivity @ 0x1C01F8364 (_anonymous_namespace_--DetermineIfNeedToChangeActivity.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C01F83FC (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_GetMonitorDiagInfo@DXGMONITOR@@QEBAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C01F9F6C (-_GetMonitorDiagInfo@DXGMONITOR@@QEBAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FAC68 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4.c)
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
  unsigned __int8 v8; // r13
  __int64 v9; // rdi
  __int64 v12; // rax
  __int64 v13; // r14
  char v14; // si
  __int64 v15; // rax
  MONITOR_MGR *v17; // r15
  unsigned int PhysicalMonitor; // eax
  unsigned int v19; // r12d
  DXGMONITOR *v20; // r14
  bool *v21; // r14
  _OWORD v22[2]; // [rsp+40h] [rbp-20h] BYREF
  DXGMONITOR *v23; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v24; // [rsp+A8h] [rbp+48h] BYREF

  v8 = a4;
  v9 = (unsigned int)a2;
  v12 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v12 + 24) = v9;
  *(_QWORD *)(v12 + 32) = a1;
  if ( !a1 || !a3 || (_DWORD)v9 == -1 )
    return 3221225485LL;
  v13 = (__int64)a8;
  v14 = 1;
  if ( a8 )
  {
    *((_DWORD *)a8 + 9) = v9;
    *(_QWORD *)(v13 + 52) = *(_QWORD *)(a1 + 404);
    *(_DWORD *)(v13 + 40) = 1;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
    WdLogSingleEntry0(1LL);
  v15 = *((_QWORD *)a1 + 365);
  if ( !v15 || (v17 = *(MONITOR_MGR **)(v15 + 112)) == 0LL )
  {
    WdLogSingleEntry1(2LL, a1);
    return 3221225485LL;
  }
  PhysicalMonitor = MONITOR_MGR::_HandleCreatePhysicalMonitor(
                      v17,
                      v9,
                      a3,
                      v8,
                      a5,
                      a6,
                      (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v13);
  v23 = 0LL;
  v19 = PhysicalMonitor;
  memset(v22, 0, sizeof(v22));
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v17, v9, 1, &v23) >= 0 )
  {
    v20 = v23;
    if ( v23 )
    {
      RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v23, (__int64)v23, 0);
      DXGMONITOR::_GetMonitorDiagInfo(v20, (struct _DXGK_DIAG_MONITOR_MGR_EXTRA_INFO *)v22);
      if ( v23 )
      {
        ExReleaseResourceLite((PERESOURCE)((char *)v23 + 24));
        KeLeaveCriticalRegion();
      }
    }
  }
  MONITOR_MGR::_LogMonitorPresentEvent((__int64)v17, 1, v9, v19, v22);
  if ( (unsigned int)Feature_EnableIddCx110__private_IsEnabledDeviceUsage() )
  {
    anonymous_namespace_::DetermineIfNeedToChangeActivity((DXGADAPTER *)a1, v9, a7);
  }
  else
  {
    v21 = a7;
    if ( a7 )
    {
      LOBYTE(v24) = 0;
      if ( !DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)a1)
        || a1[2833]
        || (int)DmmIsTargetForceable((DXGADAPTER *)a1, v9, (bool *)&v24, 0) < 0
        || (_BYTE)v24
        || (int)DmmGetSourceConnectedToTargetInClientVidPn(a1, v9, &v24) < 0 )
      {
        v14 = 0;
      }
      *v21 = v14;
    }
  }
  return v19;
}
