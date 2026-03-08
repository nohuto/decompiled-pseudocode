/*
 * XREFs of ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0168BB8
 * Callers:
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01670E0 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FAA30 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 * Callees:
 *     ??0?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z @ 0x1C0001F08 (--0-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x1C0004750 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1C00048E4 (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEA_N@Z @ 0x1C0167CF4 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 */

void __fastcall MONITOR_MGR::_CleanUpFromSimulatedMonitor(MONITOR_MGR *this, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  int v4; // edi
  MONITOR_MGR *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r8
  int v8; // ecx
  MONITOR_MGR *v9; // rax
  DXGFASTMUTEX *v10; // [rsp+70h] [rbp+8h] BYREF
  DXGFASTMUTEX *v11; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0;
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v10, (MONITOR_MGR *)((char *)this + 80));
  v5 = (MONITOR_MGR *)*((_QWORD *)this + 5);
  if ( v5 == (MONITOR_MGR *)((char *)this + 40) )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = (__int64)v5 - 152;
    if ( !v5 )
      v6 = 0LL;
  }
  MUTEX_LOCK::~MUTEX_LOCK(&v10);
  if ( !v6 )
    goto LABEL_13;
  do
  {
    RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v10, v6, 0);
    v8 = v4 + 1;
    if ( *(_DWORD *)(v6 + 316) != 5 )
      v8 = v4;
    v4 = v8;
    if ( v10 )
    {
      ExReleaseResourceLite((PERESOURCE)((char *)v10 + 24));
      KeLeaveCriticalRegion();
    }
    MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v11, (MONITOR_MGR *)((char *)this + 80));
    v9 = *(MONITOR_MGR **)(v6 + 152);
    if ( v9 == (MONITOR_MGR *)((char *)this + 40) )
    {
      v6 = 0LL;
    }
    else
    {
      v6 = (__int64)v9 - 152;
      if ( !v9 )
        v6 = 0LL;
    }
    MUTEX_LOCK::~MUTEX_LOCK(&v11);
  }
  while ( v6 );
  if ( !v4 )
  {
LABEL_13:
    LOBYTE(v7) = 1;
    MONITOR_MGR::_EnableDisableMonitor((__int64)this, 0xFFFFFFFFLL, v7, 8, 0LL, (__int64)a2, 0LL);
  }
}
