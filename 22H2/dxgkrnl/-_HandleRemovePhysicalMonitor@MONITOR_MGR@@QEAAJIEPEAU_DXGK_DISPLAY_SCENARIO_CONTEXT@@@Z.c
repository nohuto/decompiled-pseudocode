/*
 * XREFs of ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F2BA8
 * Callers:
 *     MonitorRemovePhysicalMonitor @ 0x1C02F4814 (MonitorRemovePhysicalMonitor.c)
 * Callees:
 *     ?_ChangeLIDStatus@DXGMONITOR@@QEAAXE@Z @ 0x1C005DE44 (-_ChangeLIDStatus@DXGMONITOR@@QEAAXE@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0133648 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179C8C (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0184D30 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F2604 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleRemovePhysicalMonitor(
        struct _FAST_MUTEX *this,
        __int64 a2,
        char a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  char v4; // r15
  __int64 v5; // rdi
  __int64 v8; // rax
  unsigned int v9; // r12d
  __int64 v10; // rdx
  __int64 v11; // rcx
  int MonitorInstance; // ebp
  __int64 v13; // rax
  DXGMONITOR *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r14
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  DXGMONITOR *v21; // [rsp+30h] [rbp-38h] BYREF

  v4 = 0;
  v5 = (unsigned int)a2;
  if ( (_DWORD)a2 == -1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v8);
  }
  v21 = 0LL;
  v9 = 0;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, (unsigned int)v5, 0, &v21);
  if ( MonitorInstance < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v13 + 24) = v5;
    *(_QWORD *)(v13 + 32) = this;
    WdLogEvent5_WdError(v13);
    return (unsigned int)MonitorInstance;
  }
  v15 = v21;
  if ( !v21 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v16);
  }
  v17 = 2LL;
  if ( (*((_DWORD *)v15 + 10) & 2) != 0 )
  {
    DXGMONITOR::_ChangeLIDStatus(v15, 0LL);
    if ( a3 )
      return 0LL;
  }
  if ( *((_DWORD *)v15 + 108) == 1 )
  {
    MonitorInstance = MONITOR_MGR::_RemoveMonitorFromList(this, (struct DXGMONITOR ***)v15);
  }
  else
  {
    v9 = *((_DWORD *)v15 + 108);
    v18 = (_QWORD *)((char *)v15 + 440);
    v15 = (DXGMONITOR *)*((_QWORD *)v15 + 55);
    *v18 = 0LL;
    if ( !v15 )
    {
      v19 = WdLogNewEntry5_WdError(v11, v10);
      *(_QWORD *)(v19 + 24) = v5;
      *(_QWORD *)(v19 + 32) = this;
      WdLogEvent5_WdError(v19);
      return 3221226021LL;
    }
    v4 = 1;
  }
  if ( MonitorInstance < 0 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v20);
  }
  if ( v4 )
  {
    v17 = 3LL;
  }
  else if ( *((_DWORD *)v15 + 148) )
  {
    v17 = 5LL;
    goto LABEL_20;
  }
  if ( !v4 )
LABEL_20:
    v9 = 1;
  MONITOR_MGR::_IssueMonitorEvent(this, *((unsigned int *)v15 + 11), 0, v17, v9, (__int64)a4);
  return MONITOR_MGR::_DestroyPhysicalMonitor(this, v15, a4);
}
