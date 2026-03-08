/*
 * XREFs of ?AcquireNextModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C01FE2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C00093CC (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ??0?$RESOURCE_LOCK@VMonitorDescriptorState@DxgMonitor@@@@QEAA@PEAVMonitorDescriptorState@DxgMonitor@@_N@Z @ 0x1C001EF9C (--0-$RESOURCE_LOCK@VMonitorDescriptorState@DxgMonitor@@@@QEAA@PEAVMonitorDescriptorState@DxgMoni.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?_GetNextMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C01FE588 (-_GetNextMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@P.c)
 */

__int64 __fastcall DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a1,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  int MonitorFromHandle; // eax
  PERESOURCE v12; // rbx
  struct _ERESOURCE *v13; // rbx
  unsigned int NextMonitorModeEnumerator; // edi
  __int64 v15; // rcx
  __int64 v16; // r8
  int v18; // [rsp+20h] [rbp-20h] BYREF
  __int64 v19; // [rsp+28h] [rbp-18h]
  char v20; // [rsp+30h] [rbp-10h]
  PERESOURCE Resource; // [rsp+50h] [rbp+10h] BYREF

  v18 = -1;
  v19 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v20 = 1;
    v18 = 7019;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 7019);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v18, 7019);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  v10[3] = a2;
  v10[4] = a1;
  v10[5] = a3;
  if ( a3 )
  {
    *a3 = 0LL;
    if ( a2 )
    {
      Resource = 0LL;
      MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle(
                            (struct HDXGMONITOR__ *)a1,
                            (struct DXGMONITOR **)&Resource);
      if ( MonitorFromHandle == -1073741816 )
      {
        WdLogSingleEntry1(2LL, a1);
        NextMonitorModeEnumerator = -1071774943;
      }
      else
      {
        if ( MonitorFromHandle < 0 )
          WdLogSingleEntry0(1LL);
        v12 = Resource;
        if ( !Resource )
          WdLogSingleEntry0(1LL);
        RESOURCE_LOCK<DxgMonitor::MonitorDescriptorState>::RESOURCE_LOCK<DxgMonitor::MonitorDescriptorState>(
          &Resource,
          *(struct _ERESOURCE **)&v12[2].ActiveCount,
          1);
        v13 = Resource;
        NextMonitorModeEnumerator = DxgMonitor::MonitorModes::_GetNextMonitorModeEnumerator(
                                      (DxgMonitor::MonitorModes *)Resource,
                                      a2,
                                      a3);
        if ( !NextMonitorModeEnumerator && !*a3 )
          WdLogSingleEntry0(1LL);
        if ( v13 )
        {
          ExReleaseResourceLite(v13);
          KeLeaveCriticalRegion();
        }
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, 0LL);
      NextMonitorModeEnumerator = -1071774942;
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, 0LL, a2, a1);
    NextMonitorModeEnumerator = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
  if ( v20 )
  {
    LOBYTE(v15) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v18);
  }
  return NextMonitorModeEnumerator;
}
