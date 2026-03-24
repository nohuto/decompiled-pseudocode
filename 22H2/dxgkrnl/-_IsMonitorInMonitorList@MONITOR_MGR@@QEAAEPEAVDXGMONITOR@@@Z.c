/*
 * XREFs of ?_IsMonitorInMonitorList@MONITOR_MGR@@QEAAEPEAVDXGMONITOR@@@Z @ 0x1C02F2F80
 * Callers:
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F2604 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C02F26E4 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall MONITOR_MGR::_IsMonitorInMonitorList(MONITOR_MGR *this, struct DXGMONITOR *a2)
{
  struct _FAST_MUTEX *v2; // rbx
  __int64 v5; // rax
  char *v6; // rdx
  char **v7; // rcx
  char *v8; // rax
  char v9; // di
  __int64 v10; // rax

  v2 = (struct _FAST_MUTEX *)((char *)this + 168);
  if ( this == (MONITOR_MGR *)-168LL )
  {
    v5 = WdLogNewEntry5_WdAssertion(-168LL, a2);
    WdLogEvent5_WdAssertion(v5);
  }
  KeAcquireGuardedMutex(v2);
  v7 = (char **)((char *)this + 128);
  if ( !a2 || (v8 = *v7, *v7 == (char *)v7) )
  {
LABEL_10:
    v9 = 0;
  }
  else
  {
    v6 = (char *)a2 + 16;
    while ( v8 != v6 )
    {
      if ( v7 == (char **)v8 )
        goto LABEL_10;
      v8 = *(char **)v8;
    }
    v9 = 1;
  }
  if ( !v2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v10);
  }
  KeReleaseGuardedMutex(v2);
  return v9;
}
