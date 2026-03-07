__int64 __fastcall MONITOR_MGR::_HandleCreateSimulatedMonitor(
        MONITOR_MGR *a1,
        unsigned int a2,
        unsigned int a3,
        struct DXGMONITOR *a4,
        struct DXGMONITOR *a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  struct DXGMONITOR *v6; // r12
  struct DXGMONITOR *v11; // rdi
  int MonitorInstance; // eax
  struct DXGMONITOR *v13; // rbp
  int v14; // r13d
  int v16; // ebx
  int EmergencySimulatedMonitor; // eax
  int v18; // r13d
  struct DXGMONITOR *v19; // rbx
  char v20; // dl
  char v21; // r8
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r9
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v25; // r14
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  struct DXGMONITOR *v29; // [rsp+30h] [rbp-38h] BYREF

  v6 = a5;
  if ( !a5 )
    WdLogSingleEntry0(1LL);
  if ( a2 == -1 )
    WdLogSingleEntry0(1LL);
  if ( a3 == 1 )
    WdLogSingleEntry0(1LL);
  a5 = 0LL;
  v11 = 0LL;
  v29 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(a1, a2, 0, &a5);
  v13 = a5;
  v14 = MonitorInstance;
  if ( MonitorInstance < 0 )
  {
    if ( a5 )
      WdLogSingleEntry0(1LL);
    if ( v14 != -1073741275 )
      WdLogSingleEntry0(1LL);
    EmergencySimulatedMonitor = MONITOR_MGR::_GetEmergencySimulatedMonitor(a1, &v29);
    if ( EmergencySimulatedMonitor < 0 )
    {
      if ( EmergencySimulatedMonitor != -1073741275 )
        WdLogSingleEntry0(1LL);
      v11 = v29;
      if ( !v29 )
        goto LABEL_30;
    }
    else
    {
      v11 = v29;
      if ( v29 )
        goto LABEL_30;
    }
    WdLogSingleEntry0(1LL);
    goto LABEL_30;
  }
  if ( !a5 )
    WdLogSingleEntry0(1LL);
  if ( a3 == 5 )
    return 3223192973LL;
  if ( *((_DWORD *)v13 + 78) != 1 )
  {
    v16 = MONITOR_MGR::_MigrateSimulatedMonitor(a1, a2, a3, a4, v6);
    if ( v16 >= 0 )
    {
      if ( !*(_QWORD *)v6 )
        WdLogSingleEntry0(1LL);
      MONITOR_MGR::_IssueMonitorEvent((_QWORD *)a1 + 1, a2, 0, 3LL, a3, (__int64)a6);
    }
    return (unsigned int)v16;
  }
  MONITOR_MGR::_RemoveMonitorFromList(a1, v13);
LABEL_30:
  a5 = 0LL;
  if ( !a4 )
    a4 = v13;
  v18 = MONITOR_MGR::_CreateSimulatedMonitor((__int64)a1, a2, a3, a4, &a5, a6);
  if ( v18 >= 0 )
  {
    v19 = a5;
    if ( !a5 )
      WdLogSingleEntry0(1LL);
    if ( v13 )
    {
      if ( *((_DWORD *)v13 + 78) != 1 )
        WdLogSingleEntry0(1LL);
      v20 = *((_BYTE *)v19 + 176) ^ (*((_BYTE *)v13 + 176) ^ *((_BYTE *)v19 + 176)) & 2;
      *((_BYTE *)v19 + 176) = v20;
      v21 = v20 ^ (*((_BYTE *)v13 + 176) ^ v20) & 4;
      *((_BYTE *)v19 + 176) = v21;
      *((_BYTE *)v19 + 176) = v21 ^ (*((_BYTE *)v13 + 176) ^ v21) & 0x20;
      DXGMONITOR::_SetAttachedPhysicalMonitor(v19, v13);
      DXGMONITOR::_DestroyTtmDevice(v13);
    }
    if ( v11 )
      MONITOR_MGR::_RemoveMonitorFromList(a1, v11);
    MONITOR_MGR::_InsertMonitorToList(a1, v19);
    if ( a3 == 2 )
      v18 = MONITOR_MGR::_AddTargetIntoPersistencyRegistry(a1, a2, v22, v23);
    if ( *((_QWORD *)v19 + 40) )
      v24 = 3LL;
    else
      v24 = *(_DWORD *)(*((_QWORD *)v19 + 30) + 16LL) != 0 ? 4LL : 1LL;
    v25 = a6;
    MONITOR_MGR::_IssueMonitorEvent(
      (_QWORD *)a1 + 1,
      *((_DWORD *)v19 + 45),
      (*((_BYTE *)v19 + 176) & 0x40) != 0 ? 0 : 7,
      v24,
      *((_DWORD *)v19 + 78),
      (__int64)a6);
    if ( v11 )
    {
      MONITOR_MGR::_IssueMonitorEvent(
        (_QWORD *)a1 + 1,
        *((_DWORD *)v11 + 45),
        0,
        2LL,
        *((_DWORD *)v11 + 78),
        (__int64)v25);
      MONITOR_MGR::_DestroySimulatedMonitor(a1, v11);
    }
    DXGMONITOR::_CreateTtmDevice(v19, v26, v27, v28);
    *(_QWORD *)v6 = v19;
  }
  return (unsigned int)v18;
}
