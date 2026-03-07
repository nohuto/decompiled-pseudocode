__int64 __fastcall MonitorIsMonitorAndLinkHDRCapable(__int64 a1, union MONITOR_AND_LINK_HDR_CAPS *a2)
{
  DXGMONITOR *v3; // rbx
  unsigned int v4; // edi
  int LinkInfo; // eax
  struct _DXGK_MONITORLINKINFO v7; // [rsp+20h] [rbp-18h] BYREF
  DXGMONITOR *v8; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  *(_DWORD *)a2 = 0;
  MONITOR_MGR::AcquireMonitorShared(&v8, a1);
  v3 = v8;
  if ( v8 )
  {
    *(_QWORD *)&v7.UsageHints.0 = 0LL;
    v7.DitheringSupport.Value = 0;
    LinkInfo = DXGMONITOR::_GetLinkInfo(v8, &v7);
    if ( LinkInfo != -1073741275 )
    {
      if ( LinkInfo < 0 )
      {
        v4 = LinkInfo;
        goto LABEL_10;
      }
      DxgMonitor::MonitorColorState::GetMonitorAndLinkHdrCapable(*((DxgMonitor::MonitorColorState **)v3 + 28), &v7, a2);
    }
    v4 = 0;
    goto LABEL_10;
  }
  v4 = -1073741275;
  WdLogSingleEntry1(2LL, -1073741275LL);
LABEL_10:
  if ( v3 )
  {
    ExReleaseResourceLite((PERESOURCE)((char *)v3 + 24));
    KeLeaveCriticalRegion();
  }
  return v4;
}
