__int64 __fastcall MONITOR_MGR::_MigrateSimulatedMonitor(
        MONITOR_MGR *a1,
        unsigned int a2,
        int a3,
        const struct DXGMONITOR *a4,
        struct DXGMONITOR **a5)
{
  __int64 v5; // rbp
  __int64 v7; // rsi
  int MonitorInstance; // ebx
  struct DXGMONITOR *v10; // rdi
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGMONITOR *v15; // [rsp+20h] [rbp-28h] BYREF

  v5 = a3;
  v7 = a2;
  if ( a2 == -1 )
    WdLogSingleEntry0(1LL);
  v15 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(a1, v7, 0, &v15);
  if ( MonitorInstance < 0 )
    goto LABEL_18;
  v10 = v15;
  if ( !v15 )
    WdLogSingleEntry0(1LL);
  v11 = *((_DWORD *)v10 + 78);
  if ( v11 == 1 )
  {
    WdLogSingleEntry1(2LL, v7);
    MonitorInstance = -1073741637;
LABEL_18:
    *a5 = 0LL;
    return (unsigned int)MonitorInstance;
  }
  if ( v11 == (_DWORD)v5 )
  {
    WdLogSingleEntry2(7LL, v7, v5);
    MonitorInstance = 0;
  }
  else
  {
    WdLogSingleEntry2(7LL, v7, v5);
    if ( *((_DWORD *)v10 + 78) == 2 )
      MONITOR_MGR::_DeleteTargetFromPersistencyRegistry(a1, (unsigned int)v7, v12, v13);
    *((_DWORD *)v10 + 78) = v5;
    if ( (_DWORD)v5 == 2 )
      MONITOR_MGR::_AddTargetIntoPersistencyRegistry(a1, (unsigned int)v7, v12, v13);
  }
  if ( a4 )
    MonitorInstance = DXGMONITOR::_CopyMonitorInformation(v10, a4);
  if ( MonitorInstance < 0 )
    goto LABEL_18;
  *a5 = v10;
  return (unsigned int)MonitorInstance;
}
