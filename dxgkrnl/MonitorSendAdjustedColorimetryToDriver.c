__int64 __fastcall MonitorSendAdjustedColorimetryToDriver(struct HDXGMONITOR__ *a1, int a2)
{
  __int64 v3; // rbx
  bool v4; // r8
  unsigned int v5; // edi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    MONITOR_MGR::AcquireMonitorExclusive(&v7, a1);
    v3 = v7;
    if ( v7 )
    {
      v4 = 0;
      if ( (!a2 || a2 == 30) && (v4 = 1, *(_DWORD *)(*(_QWORD *)(v7 + 224) + 392LL) == 1000) )
        v5 = 0;
      else
        v5 = DxgMonitor::MonitorColorState::SendAdjustedHDRParamsToDriver(
               *(DxgMonitor::MonitorColorState **)(v7 + 224),
               1,
               v4);
    }
    else
    {
      v5 = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
    }
    if ( v3 )
    {
      ExReleaseResourceLite((PERESOURCE)(v3 + 24));
      KeLeaveCriticalRegion();
    }
    return v5;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    return 3221225485LL;
  }
}
