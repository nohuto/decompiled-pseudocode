/*
 * XREFs of ?_MonitorTelemetry@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03C3D88
 * Callers:
 *     ?AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0308370 (-AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ??0?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z @ 0x1C0001F08 (--0-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x1C0004750 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1C00048E4 (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0210E00 (-TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU.c)
 */

void __fastcall MONITOR_MGR::_MonitorTelemetry(MONITOR_MGR *this, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  struct DXGFASTMUTEX *v4; // rbp
  char *v5; // rsi
  MONITOR_MGR *v6; // rax
  char *v7; // rbx
  DXGFASTMUTEX **i; // rcx
  __int64 v9; // rdi
  char *v10; // rax
  __int64 v11; // [rsp+80h] [rbp+8h] BYREF
  char v12; // [rsp+90h] [rbp+18h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 3) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 4867LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"_GetAdapter()->IsCoreResourceSharedOwner()",
      4867LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = (MONITOR_MGR *)((char *)this + 80);
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v11, (MONITOR_MGR *)((char *)this + 80));
  v5 = (char *)this + 40;
  v6 = (MONITOR_MGR *)*((_QWORD *)this + 5);
  if ( v6 == (MONITOR_MGR *)((char *)this + 40) )
  {
    v7 = 0LL;
  }
  else
  {
    v7 = (char *)v6 - 152;
    if ( !v6 )
      v7 = 0LL;
  }
  for ( i = (DXGFASTMUTEX **)&v11; ; i = (DXGFASTMUTEX **)&v12 )
  {
    MUTEX_LOCK::~MUTEX_LOCK(i);
    if ( !v7 )
      break;
    v9 = (__int64)v7;
    if ( *((_DWORD *)v7 + 78) != 1 && *((_QWORD *)v7 + 40) )
      v9 = *((_QWORD *)v7 + 40);
    RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v11, v9, 0);
    DXGMONITOR::TriggerMonitorTelemetry(v9, 2, (__int64)a2);
    if ( v11 )
    {
      ExReleaseResourceLite((PERESOURCE)(v11 + 24));
      KeLeaveCriticalRegion();
    }
    MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v12, v4);
    v10 = (char *)*((_QWORD *)v7 + 19);
    if ( v10 == v5 )
    {
      v7 = 0LL;
    }
    else
    {
      v7 = v10 - 152;
      if ( !v10 )
        v7 = 0LL;
    }
  }
}
