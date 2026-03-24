/*
 * XREFs of ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F2D80
 * Callers:
 *     MonitorDestroySimulatedMonitor @ 0x1C02F3ABC (MonitorDestroySimulatedMonitor.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0133648 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179C8C (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0184D30 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0184DCC (-_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C0185724 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C02F24D4 (-_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C02F26E4 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleRemoveSimulatedMonitor(
        struct _FAST_MUTEX *this,
        __int64 a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 v3; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int MonitorInstance; // ebx
  unsigned int *v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // ebp
  __int64 v13; // rax
  __int64 v14; // rcx
  struct DXGMONITOR *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  v3 = (unsigned int)a2;
  if ( (_DWORD)a2 == -1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v6);
  }
  P = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, (unsigned int)v3, 0, (struct DXGMONITOR **)&P);
  if ( MonitorInstance < 0 )
  {
    if ( P )
    {
      v19 = WdLogNewEntry5_WdAssertion(v8, v7);
      WdLogEvent5_WdAssertion(v19);
    }
    if ( MonitorInstance != -1073741275 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v8, v7);
      WdLogEvent5_WdAssertion(v20);
    }
    v21 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v21 + 24) = v3;
    *(_QWORD *)(v21 + 32) = this;
    WdLogEvent5_WdError(v21);
  }
  else
  {
    v10 = (unsigned int *)P;
    if ( !P )
    {
      v11 = WdLogNewEntry5_WdAssertion(v8, v7);
      WdLogEvent5_WdAssertion(v11);
    }
    v12 = v10[108];
    if ( v12 == 1 )
    {
      v13 = WdLogNewEntry5_WdError(v8, v7);
      *(_QWORD *)(v13 + 24) = v3;
      WdLogEvent5_WdError(v13);
      return (unsigned int)-1073741275;
    }
    else
    {
      MONITOR_MGR::_RemoveMonitorFromList(this, (struct DXGMONITOR ***)v10);
      v15 = (struct DXGMONITOR *)*((_QWORD *)v10 + 55);
      if ( v15 )
      {
        if ( *((_DWORD *)v15 + 108) != 1 )
        {
          v16 = WdLogNewEntry5_WdAssertion(v14, v15);
          WdLogEvent5_WdAssertion(v16);
          v15 = (struct DXGMONITOR *)*((_QWORD *)v10 + 55);
        }
        MONITOR_MGR::_InsertMonitorToList(this, v15);
        if ( MONITOR_MGR::_UsingCCDNameForTTM || *((_QWORD *)v10 + 10) )
          DXGMONITOR::_CreateTtmDevice(*((DXGMONITOR **)v10 + 55), v17);
      }
      if ( *((_QWORD *)v10 + 55) )
      {
        v12 = v10[108];
        v18 = 3LL;
      }
      else
      {
        v18 = 2LL;
      }
      MONITOR_MGR::_IssueMonitorEvent(this, v10[11], 0, v18, v12, (__int64)a3);
      *((_QWORD *)v10 + 55) = 0LL;
      if ( v10[108] == 2 )
        MONITOR_MGR::_DeleteTargetFromPersistencyRegistry((MONITOR_MGR *)this, (unsigned int)v3);
      return (unsigned int)MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)this, v10);
    }
  }
  return (unsigned int)MonitorInstance;
}
