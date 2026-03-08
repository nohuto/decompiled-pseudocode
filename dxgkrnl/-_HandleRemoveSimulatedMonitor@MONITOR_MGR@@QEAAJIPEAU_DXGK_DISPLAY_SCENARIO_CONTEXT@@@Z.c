/*
 * XREFs of ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03C3A14
 * Callers:
 *     MonitorDestroySimulatedMonitor @ 0x1C03BF480 (MonitorDestroySimulatedMonitor.c)
 * Callees:
 *     ??$?9V?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@0@$$T@Z @ 0x1C00092F8 (--$-9V-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@det.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C01AAC00 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E77F0 (-_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C01FBCA0 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C01FBE38 (-_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C02019C0 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C03C3130 (-_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C03C323C (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_SetAttachedPhysicalMonitor@DXGMONITOR@@QEAAXPEAV1@@Z @ 0x1C03C5474 (-_SetAttachedPhysicalMonitor@DXGMONITOR@@QEAAXPEAV1@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleRemoveSimulatedMonitor(
        MONITOR_MGR *this,
        unsigned int a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 v3; // rsi
  int MonitorInstance; // ebx
  struct DXGMONITOR **v7; // rbx
  int v8; // ebp
  struct DXGMONITOR *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r9
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  v3 = a2;
  if ( a2 == -1 )
    WdLogSingleEntry0(1LL);
  P = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v3, 0, (struct DXGMONITOR **)&P);
  if ( MonitorInstance < 0 )
  {
    if ( P )
      WdLogSingleEntry0(1LL);
    if ( MonitorInstance != -1073741275 )
      WdLogSingleEntry0(1LL);
    WdLogSingleEntry2(2LL, v3, this);
  }
  else
  {
    v7 = (struct DXGMONITOR **)P;
    if ( !P )
      WdLogSingleEntry0(1LL);
    v8 = *((_DWORD *)v7 + 78);
    if ( v8 == 1 )
    {
      WdLogSingleEntry1(2LL, v3);
      return (unsigned int)-1073741275;
    }
    else
    {
      MONITOR_MGR::_RemoveMonitorFromList(this, (struct DXGMONITOR *)v7);
      v9 = v7[40];
      if ( v9 )
      {
        if ( *((_DWORD *)v9 + 78) != 1 )
          WdLogSingleEntry0(1LL);
        MONITOR_MGR::_InsertMonitorToList(this, v7[40]);
        if ( MONITOR_MGR::_UsingCCDNameForTTM
          || wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>((_QWORD *)v7[25] + 5) )
        {
          DXGMONITOR::_CreateTtmDevice(v7[40], v10, v11, v12);
        }
      }
      if ( v7[40] )
      {
        v8 = *((_DWORD *)v7 + 78);
        v13 = 3LL;
      }
      else
      {
        v13 = 2LL;
      }
      MONITOR_MGR::_IssueMonitorEvent((_QWORD *)this + 1, *((_DWORD *)v7 + 45), 0, v13, v8, (__int64)a3);
      DXGMONITOR::_SetAttachedPhysicalMonitor((DXGMONITOR *)v7, 0LL);
      if ( *((_DWORD *)v7 + 78) == 2 )
        MONITOR_MGR::_DeleteTargetFromPersistencyRegistry(this, (unsigned int)v3, v14, v15);
      return (unsigned int)MONITOR_MGR::_DestroySimulatedMonitor(this, v7);
    }
  }
  return (unsigned int)MonitorInstance;
}
