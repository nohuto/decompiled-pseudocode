/*
 * XREFs of ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F27C8
 * Callers:
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01843AC (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C02F3754 (MonitorCreateSimulatedMonitor.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0133648 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179C8C (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0184D30 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0184DCC (-_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z @ 0x1C0185500 (-_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C0185724 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C02F2040 (-_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F2184 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C02F26E4 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C02F3044 (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3.c)
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C02F930C (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleCreateSimulatedMonitor(
        struct _FAST_MUTEX *a1,
        __int64 a2,
        unsigned int a3,
        struct DXGMONITOR *a4,
        struct DXGMONITOR *a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  struct DXGMONITOR *v6; // r12
  unsigned int v9; // r15d
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  struct DXGMONITOR *v14; // rdi
  int MonitorInstance; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct DXGMONITOR *v18; // rbp
  int v19; // r13d
  __int64 v20; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // ebx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  int EmergencySimulatedMonitor; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // r13d
  struct DXGMONITOR *v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // edx
  __int64 v40; // r9
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v41; // rbp
  __int64 v42; // rdx
  struct DXGMONITOR *v43; // [rsp+30h] [rbp-38h] BYREF

  v6 = a5;
  v9 = a2;
  if ( !a5 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( v9 == -1 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v12);
  }
  if ( a3 == 1 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v13);
  }
  a5 = 0LL;
  v14 = 0LL;
  v43 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(a1, v9, 0, &a5);
  v18 = a5;
  v19 = MonitorInstance;
  if ( MonitorInstance < 0 )
  {
    if ( a5 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v17, v16);
      WdLogEvent5_WdAssertion(v26);
    }
    if ( v19 != -1073741275 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v17, v16);
      WdLogEvent5_WdAssertion(v27);
    }
    EmergencySimulatedMonitor = MONITOR_MGR::_GetEmergencySimulatedMonitor(a1, &v43);
    if ( EmergencySimulatedMonitor < 0 )
    {
      if ( EmergencySimulatedMonitor != -1073741275 )
      {
        v31 = WdLogNewEntry5_WdAssertion(v30, v29);
        WdLogEvent5_WdAssertion(v31);
      }
      v14 = v43;
      if ( !v43 )
        goto LABEL_30;
    }
    else
    {
      v14 = v43;
      if ( v43 )
        goto LABEL_30;
    }
    v32 = WdLogNewEntry5_WdAssertion(v30, v29);
    WdLogEvent5_WdAssertion(v32);
    goto LABEL_30;
  }
  if ( !a5 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v17, v16);
    WdLogEvent5_WdAssertion(v20);
  }
  if ( a3 == 5 )
    return 3223192973LL;
  if ( *((_DWORD *)v18 + 108) != 1 )
  {
    v24 = MONITOR_MGR::_MigrateSimulatedMonitor(a1, v9, a3, a4, v6);
    if ( v24 >= 0 )
    {
      if ( !*(_QWORD *)v6 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v23, v22);
        WdLogEvent5_WdAssertion(v25);
      }
      MONITOR_MGR::_IssueMonitorEvent(a1, v9, 0, 3LL, a3, (__int64)a6);
    }
    return (unsigned int)v24;
  }
  MONITOR_MGR::_RemoveMonitorFromList(a1, (struct DXGMONITOR ***)v18);
LABEL_30:
  a5 = 0LL;
  if ( !a4 )
    a4 = v18;
  v35 = MONITOR_MGR::_CreateSimulatedMonitor((__int64)a1, v9, a3, a4, &a5, a6);
  if ( v35 >= 0 )
  {
    v36 = a5;
    if ( !a5 )
    {
      v37 = WdLogNewEntry5_WdAssertion(v34, v33);
      WdLogEvent5_WdAssertion(v37);
    }
    if ( v18 )
    {
      if ( *((_DWORD *)v18 + 108) != 1 )
      {
        v38 = WdLogNewEntry5_WdAssertion(v34, v33);
        WdLogEvent5_WdAssertion(v38);
      }
      *((_DWORD *)v36 + 10) ^= (*((_DWORD *)v18 + 10) ^ *((_DWORD *)v36 + 10)) & 2;
      v39 = *((_DWORD *)v36 + 10) ^ (*((_DWORD *)v18 + 10) ^ *((_DWORD *)v36 + 10)) & 4;
      *((_DWORD *)v36 + 10) = v39;
      *((_DWORD *)v36 + 10) = v39 ^ (*((_DWORD *)v18 + 10) ^ v39) & 0x20;
      *((_QWORD *)v36 + 55) = v18;
      DXGMONITOR::_DestroyTtmDevice(v18);
    }
    if ( v14 )
      MONITOR_MGR::_RemoveMonitorFromList(a1, (struct DXGMONITOR ***)v14);
    MONITOR_MGR::_InsertMonitorToList(a1, v36);
    if ( a3 == 2 )
      v35 = MONITOR_MGR::_AddTargetIntoPersistencyRegistry((MONITOR_MGR *)a1, v9);
    if ( *((_QWORD *)v36 + 55) )
      v40 = 3LL;
    else
      v40 = *((_DWORD *)v36 + 148) != 0 ? 4LL : 1LL;
    v41 = a6;
    MONITOR_MGR::_IssueMonitorEvent(
      a1,
      *((unsigned int *)v36 + 11),
      (*((_DWORD *)v36 + 10) & 0x40) == 0 ? 7 : 0,
      v40,
      *((_DWORD *)v36 + 108),
      (__int64)a6);
    if ( v14 )
    {
      MONITOR_MGR::_IssueMonitorEvent(a1, *((unsigned int *)v14 + 11), 0, 2LL, *((_DWORD *)v14 + 108), (__int64)v41);
      MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)a1, v14);
    }
    DXGMONITOR::_CreateTtmDevice(v36, v42);
    *(_QWORD *)v6 = v36;
  }
  return (unsigned int)v35;
}
