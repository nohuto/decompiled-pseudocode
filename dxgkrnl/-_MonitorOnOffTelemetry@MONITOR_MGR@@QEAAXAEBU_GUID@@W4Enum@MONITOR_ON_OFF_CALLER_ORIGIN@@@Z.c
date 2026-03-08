/*
 * XREFs of ?_MonitorOnOffTelemetry@MONITOR_MGR@@QEAAXAEBU_GUID@@W4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1C01E7FF0
 * Callers:
 *     LogMonitorOnOffTelemetry @ 0x1C01E7F70 (LogMonitorOnOffTelemetry.c)
 * Callees:
 *     ??0?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z @ 0x1C0001F08 (--0-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x1C0004750 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1C00048E4 (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ?LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1C01691C4 (-LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z.c)
 */

void __fastcall MONITOR_MGR::_MonitorOnOffTelemetry(__int64 a1, __int64 a2, char a3)
{
  struct DXGFASTMUTEX *v3; // rbp
  _QWORD *v5; // rsi
  _QWORD *v7; // rax
  __int64 v8; // rbx
  DXGFASTMUTEX **i; // rcx
  _QWORD *v10; // rax
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  char v12; // [rsp+68h] [rbp+20h] BYREF

  v3 = (struct DXGFASTMUTEX *)(a1 + 80);
  v5 = (_QWORD *)(a1 + 40);
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v11, (struct DXGFASTMUTEX *)(a1 + 80));
  v7 = (_QWORD *)*v5;
  if ( (_QWORD *)*v5 == v5 )
  {
    v8 = 0LL;
  }
  else
  {
    v8 = (__int64)(v7 - 19);
    if ( !v7 )
      v8 = 0LL;
  }
  for ( i = (DXGFASTMUTEX **)&v11; ; i = (DXGFASTMUTEX **)&v12 )
  {
    MUTEX_LOCK::~MUTEX_LOCK(i);
    if ( !v8 )
      break;
    RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v11, v8, 0);
    DXGMONITOR::LogMonitorObjectOnOffState(v8, a2, 0, a3);
    if ( v11 )
    {
      ExReleaseResourceLite((PERESOURCE)(v11 + 24));
      KeLeaveCriticalRegion();
    }
    MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v12, v3);
    v10 = *(_QWORD **)(v8 + 152);
    if ( v10 == v5 )
    {
      v8 = 0LL;
    }
    else
    {
      v8 = (__int64)(v10 - 19);
      if ( !v10 )
        v8 = 0LL;
    }
  }
}
