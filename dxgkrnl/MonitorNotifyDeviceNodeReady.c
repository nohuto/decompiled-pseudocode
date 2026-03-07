__int64 __fastcall MonitorNotifyDeviceNodeReady(PERESOURCE *this, unsigned int a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  MONITOR_MGR *Blink; // rsi
  int MonitorInstance; // ebx
  DXGMONITOR *v13; // rbx
  DXGMONITOR *v14; // rdi
  int v15; // r14d
  int v16; // ebx
  DXGMONITOR *v18; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v23[2]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v24[10]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v25[14]; // [rsp+D0h] [rbp-30h] BYREF
  int v26; // [rsp+140h] [rbp+40h]

  v3 = a2;
  memset(v24, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v24[1]);
  v24[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v24[3]) = 8;
  LOBYTE(v24[6]) = -1;
  v10 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  *(_QWORD *)(v10 + 24) = v3;
  *(_QWORD *)(v10 + 32) = this;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
    WdLogSingleEntry0(1LL);
  if ( !this[365] )
    WdLogSingleEntry0(1LL);
  Blink = (MONITOR_MGR *)this[365][1].SystemResourcesList.Blink;
  if ( !Blink )
  {
    WdLogSingleEntry1(2LL, this);
    return 3221225485LL;
  }
  v18 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(Blink, v3, 0, &v18);
  if ( MonitorInstance < 0 )
  {
    if ( v18 )
      WdLogSingleEntry0(1LL);
    if ( MonitorInstance != -1073741275 )
      WdLogSingleEntry0(1LL);
    goto LABEL_31;
  }
  v13 = v18;
  if ( !v18 )
    WdLogSingleEntry0(1LL);
  if ( *((_DWORD *)v13 + 78) == 1 )
  {
    v14 = v13;
    v13 = 0LL;
  }
  else
  {
    v14 = (DXGMONITOR *)*((_QWORD *)v13 + 40);
  }
  if ( !v14 || *(_QWORD *)(*((_QWORD *)v14 + 25) + 8LL) != a3 )
  {
LABEL_31:
    WdLogSingleEntry1(7LL, v3);
    return 3221226021LL;
  }
  v25[0] = &MonitorEventDeferral::`vftable';
  memset(&v25[2], 0, 0x60uLL);
  v26 = 0;
  v25[1] = (char *)Blink + 8;
  RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v19, (__int64)v14, 1);
  v15 = DXGMONITOR::_OnMonitorDeviceNodeReady(
          v14,
          (struct DxgMonitor::IMonitorDeferredEventSource *)v25,
          (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v24);
  if ( v19 )
  {
    ExReleaseResourceLite((PERESOURCE)(v19 + 24));
    KeLeaveCriticalRegion();
  }
  MonitorEventDeferral::FlushEventsWithContext(
    (MonitorEventDeferral *)v25,
    (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v24);
  if ( v15 >= 0 && v13 )
  {
    RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v21, (__int64)v13, 1);
    RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v20, (__int64)v14, 0);
    DXGMONITOR::_CopyMonitorInformation(v13, v14);
    if ( v20 )
    {
      ExReleaseResourceLite((PERESOURCE)(v20 + 24));
      KeLeaveCriticalRegion();
    }
    if ( v21 )
    {
      ExReleaseResourceLite((PERESOURCE)(v21 + 24));
      KeLeaveCriticalRegion();
    }
  }
  v18 = 0LL;
  memset(v23, 0, sizeof(v23));
  v16 = MONITOR_MGR::_GetMonitorInstance(Blink, v3, 1, &v18);
  if ( v16 >= 0 )
  {
    RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v22, (__int64)v18, 0);
    DXGMONITOR::_GetMonitorDiagInfo(v18, (struct _DXGK_DIAG_MONITOR_MGR_EXTRA_INFO *)v23);
    if ( v22 )
    {
      ExReleaseResourceLite((PERESOURCE)(v22 + 24));
      KeLeaveCriticalRegion();
    }
  }
  MONITOR_MGR::_LogMonitorPresentEvent((__int64)Blink, 7, v3, v16, v23);
  MonitorEventDeferral::~MonitorEventDeferral((MonitorEventDeferral *)v25);
  return (unsigned int)v16;
}
