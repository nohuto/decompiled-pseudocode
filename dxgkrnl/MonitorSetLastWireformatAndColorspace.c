/*
 * XREFs of MonitorSetLastWireformatAndColorspace @ 0x1C0168AEC
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C016A260 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAXI_N@Z @ 0x1C0001E2C (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAXI_N@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x1C0004750 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1C00048E4 (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ?reset@?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z @ 0x1C0004938 (-reset@-$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?OnOutputColorspaceUpdated@MonitorColorState@DxgMonitor@@QEAAXXZ @ 0x1C0167C74 (-OnOutputColorspaceUpdated@MonitorColorState@DxgMonitor@@QEAAXXZ.c)
 */

__int64 __fastcall MonitorSetLastWireformatAndColorspace(__int64 a1, unsigned int a2, int a3, int a4)
{
  DXGFASTMUTEX *v6; // rbx
  DxgMonitor::MonitorColorState *v7; // rcx
  __int64 v8; // rdi
  unsigned int v9; // edi
  DxgMonitor::MonitorColorState **v11; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || a2 == -1 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorExclusive(&v11, a1, a2, 0);
  v6 = (DXGFASTMUTEX *)v11;
  if ( v11 )
  {
    v7 = v11[28];
    *((_DWORD *)v11 + 115) = a3;
    *((_DWORD *)v6 + 114) = a4;
    DxgMonitor::MonitorColorState::OnOutputColorspaceUpdated(v7);
    v8 = *((_QWORD *)v6 + 31);
    MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v11, (struct DXGFASTMUTEX *)(v8 + 80));
    auto_rc<DXGK_GAMMA_RAMP>::reset((ReferenceCounted **)(v8 + 128), 0LL);
    MUTEX_LOCK::~MUTEX_LOCK((DXGFASTMUTEX **)&v11);
    v9 = 0;
  }
  else
  {
    v9 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
  }
  if ( v6 )
  {
    ExReleaseResourceLite((PERESOURCE)((char *)v6 + 24));
    KeLeaveCriticalRegion();
  }
  return v9;
}
