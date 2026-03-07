__int64 __fastcall MonitorEnableDisableAdvancedColor(struct HDXGMONITOR__ *a1, char a2)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    MONITOR_MGR::AcquireMonitorExclusive(&v6, a1);
    v4 = v6;
    if ( v6 )
    {
      if ( (DxgMonitor::MonitorColorState::IsAdvancedColorEnabled(*(DxgMonitor::MonitorColorState **)(v6 + 224)) || !a2)
        && (!DxgMonitor::MonitorColorState::IsAdvancedColorEnabled(*(DxgMonitor::MonitorColorState **)(v4 + 224)) || a2) )
      {
        v5 = 255;
      }
      else
      {
        v5 = DxgMonitor::MonitorColorState::SetAdvancedColorEnabled(
               *(DxgMonitor::MonitorColorState **)(v4 + 224),
               a2 != 0);
      }
    }
    else
    {
      v5 = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
    }
    if ( v4 )
    {
      ExReleaseResourceLite((PERESOURCE)(v4 + 24));
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
