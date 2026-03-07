__int64 __fastcall MonitorDRTTest(
        DXGADAPTER *this,
        struct _D3DKMT_DRT_MONITOR *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3,
        __int64 a4)
{
  unsigned int v7; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // ebx
  unsigned int SimulatedMonitor; // eax
  __int64 v13; // r9
  MONITOR_MGR *v14; // rcx
  int v15; // [rsp+20h] [rbp-28h]
  int v16; // [rsp+30h] [rbp-18h]

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( !this || !a2 )
    return 3221225485LL;
  v7 = *((_DWORD *)a2 + 1);
  if ( v7 < 0x20 )
  {
    WdLogSingleEntry2(3LL, a2, v7);
    return 3221225485LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    WdLogSingleEntry0(1LL);
  v9 = *((_QWORD *)this + 365);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, this);
    return 3221225659LL;
  }
  v10 = *((unsigned int *)a2 + 3);
  switch ( (_DWORD)v10 )
  {
    case 0:
      v14 = *(MONITOR_MGR **)(v9 + 112);
      if ( !v14 )
      {
        WdLogSingleEntry1(2LL, this);
        return 3221225485LL;
      }
      return (unsigned int)MONITOR_MGR::_DRTGetTargetInformation(v14, a2);
    case 1:
      if ( (int)DmmEnableModeResetOnMonitorEvent((PERESOURCE *)this, 0) < 0 )
        WdLogSingleEntry0(1LL);
      SimulatedMonitor = MonitorCreateSimulatedMonitor(
                           (PERESOURCE *)this,
                           *((unsigned int *)a2 + 4),
                           *((unsigned int *)a2 + 5),
                           v13,
                           v15,
                           0,
                           v16,
                           (__int64)a3);
      goto LABEL_20;
    case 2:
      if ( (int)DmmEnableModeResetOnMonitorEvent((PERESOURCE *)this, 0) < 0 )
        WdLogSingleEntry0(1LL);
      SimulatedMonitor = MonitorDestroySimulatedMonitor(this, *((_DWORD *)a2 + 4), a3);
LABEL_20:
      v11 = SimulatedMonitor;
      DmmEnableModeResetOnMonitorEvent((PERESOURCE *)this, 1);
      return v11;
  }
  WdLogSingleEntry2(3LL, v10, a2);
  return (unsigned int)-1073741811;
}
