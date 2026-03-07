__int64 __fastcall MONITOR_MGR::_HandleCreateMonitorStep2(
        MONITOR_MGR *this,
        int a2,
        struct DXGMONITOR *a3,
        struct DXGMONITOR *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  int v5; // ebp
  struct DXGMONITOR *v10; // r14
  bool v11; // r12
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v12; // r15
  __int64 v13; // r9
  unsigned int v14; // edx
  int v16; // eax
  int v17; // eax
  struct DXGMONITOR *v18; // [rsp+70h] [rbp+18h] BYREF

  v5 = 0;
  if ( a2 == -1 )
    WdLogSingleEntry0(1LL);
  v10 = 0LL;
  v11 = 0;
  if ( a3 )
  {
    v16 = *((_DWORD *)a3 + 78);
    if ( *((_DWORD *)a3 + 45) == a2 )
    {
      v11 = v16 == 5;
    }
    else
    {
      if ( v16 != 5 )
        WdLogSingleEntry0(1LL);
      v10 = a3;
      a3 = 0LL;
    }
  }
  v12 = a5;
  if ( a4 )
  {
    *((_QWORD *)a4 + 47) = 0LL;
    v13 = a3 ? 3LL : *(_DWORD *)(*((_QWORD *)a4 + 30) + 16LL) != 0 ? 4LL : 1LL;
    MONITOR_MGR::_IssueMonitorEvent(
      (_QWORD *)this + 1,
      *((_DWORD *)a4 + 45),
      (*((_BYTE *)a4 + 176) & 0x40) != 0 ? 0 : 7,
      v13,
      *((_DWORD *)a4 + 78),
      (__int64)v12);
    if ( *((_BYTE *)a4 + 368) )
    {
      *((_BYTE *)a4 + 368) = 0;
      MONITOR_MGR::_LeaveMonitorPendingState(this);
    }
  }
  if ( a3 )
  {
    if ( *((_DWORD *)a3 + 78) == 1 )
      v17 = MONITOR_MGR::_DestroyPhysicalMonitor(this, a3, v12);
    else
      v17 = MONITOR_MGR::_DestroySimulatedMonitor(this, a3);
    v5 = v17;
  }
  if ( v10 )
  {
    MONITOR_MGR::_IssueMonitorEvent(
      (_QWORD *)this + 1,
      *((_DWORD *)v10 + 45),
      0,
      2LL,
      *((_DWORD *)v10 + 78),
      (__int64)v12);
    v5 = MONITOR_MGR::_DestroySimulatedMonitor(this, v10);
  }
  if ( v5 < 0 )
    WdLogSingleEntry2(2LL, a3, v5);
  if ( a4 )
  {
    v14 = *((_DWORD *)a4 + 45);
    v18 = 0LL;
    if ( (int)MONITOR_MGR::_GetMonitorInstance(this, v14, 0, &v18) >= 0 && MONITOR_MGR::_UsingCCDNameForTTM && v18 == a4 )
      DXGMONITOR::_CreateTtmDevice(a4);
    if ( v11 && (*((_BYTE *)a4 + 176) & 2) != 0 )
      MONITOR_MGR::_CleanUpFromSimulatedMonitor(this, v12);
  }
  return 0LL;
}
