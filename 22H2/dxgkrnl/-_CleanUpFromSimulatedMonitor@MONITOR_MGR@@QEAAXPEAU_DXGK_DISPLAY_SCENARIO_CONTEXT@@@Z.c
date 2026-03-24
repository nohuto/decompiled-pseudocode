/*
 * XREFs of ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0149638
 * Callers:
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00EA400 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01853E8 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 * Callees:
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0148E90 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 */

void __fastcall MONITOR_MGR::_CleanUpFromSimulatedMonitor(MONITOR_MGR *this, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  struct _FAST_MUTEX *v2; // rbx
  int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  MONITOR_MGR *v7; // rax
  char *v8; // rdi
  struct _ERESOURCE *v9; // r15
  int v10; // ecx
  MONITOR_MGR *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  v2 = (struct _FAST_MUTEX *)((char *)this + 168);
  v4 = 0;
  if ( this == (MONITOR_MGR *)-168LL )
  {
    v12 = WdLogNewEntry5_WdAssertion(-168LL, a2);
    WdLogEvent5_WdAssertion(v12);
  }
  KeAcquireGuardedMutex(v2);
  v7 = (MONITOR_MGR *)*((_QWORD *)this + 16);
  if ( v7 != (MONITOR_MGR *)((char *)this + 128) )
  {
    v8 = (char *)v7 - 16;
    if ( !v7 )
      v8 = 0LL;
    while ( v8 )
    {
      v9 = (struct _ERESOURCE *)(v8 + 296);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(v8 + 296), 1u);
      v10 = v4 + 1;
      v11 = (MONITOR_MGR *)*((_QWORD *)v8 + 2);
      if ( *((_DWORD *)v8 + 109) != 5 )
        v10 = v4;
      v4 = v10;
      if ( v11 == (MONITOR_MGR *)((char *)this + 128) )
      {
        v8 = 0LL;
      }
      else
      {
        v8 = (char *)v11 - 16;
        if ( !v11 )
          v8 = 0LL;
      }
      ExReleaseResourceLite(v9);
      KeLeaveCriticalRegion();
    }
  }
  if ( !v2 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v6, v5);
    WdLogEvent5_WdAssertion(v13);
  }
  KeReleaseGuardedMutex(v2);
  if ( !v4 )
    MONITOR_MGR::_EnableDisableMonitor((__int64)this, 0xFFFFFFFFLL, 1, 8, 0LL);
}
