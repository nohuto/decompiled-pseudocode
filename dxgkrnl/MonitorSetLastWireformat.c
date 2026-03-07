__int64 __fastcall MonitorSetLastWireformat(__int64 a1, unsigned int a2, int a3)
{
  DXGFASTMUTEX *v4; // rbx
  unsigned int v5; // edi
  DxgMonitor::MonitorColorState *v6; // rcx
  __int64 v7; // rdi
  DxgMonitor::MonitorColorState **v9; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || a2 == -1 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorExclusive(&v9, a1, a2, 0);
  v4 = (DXGFASTMUTEX *)v9;
  if ( v9 )
  {
    v6 = v9[28];
    *((_DWORD *)v9 + 115) = a3;
    DxgMonitor::MonitorColorState::OnOutputColorspaceUpdated(v6);
    v7 = *((_QWORD *)v4 + 31);
    MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v9, (struct DXGFASTMUTEX *)(v7 + 80));
    auto_rc<DXGK_GAMMA_RAMP>::reset((ReferenceCounted **)(v7 + 128), 0LL);
    MUTEX_LOCK::~MUTEX_LOCK((DXGFASTMUTEX **)&v9);
    v5 = 0;
  }
  else
  {
    v5 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
  }
  if ( v4 )
  {
    ExReleaseResourceLite((PERESOURCE)((char *)v4 + 24));
    KeLeaveCriticalRegion();
  }
  return v5;
}
