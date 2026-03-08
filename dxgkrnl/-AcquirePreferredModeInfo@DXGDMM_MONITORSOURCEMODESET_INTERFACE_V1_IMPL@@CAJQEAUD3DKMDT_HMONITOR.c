/*
 * XREFs of ?AcquirePreferredModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C03C1C30
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C00093CC (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ??0?$RESOURCE_LOCK@VMonitorDescriptorState@DxgMonitor@@@@QEAA@PEAVMonitorDescriptorState@DxgMonitor@@_N@Z @ 0x1C001EF9C (--0-$RESOURCE_LOCK@VMonitorDescriptorState@DxgMonitor@@@@QEAA@PEAVMonitorDescriptorState@DxgMoni.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?_AcquirePreferredModeInfo@MonitorModes@DxgMonitor@@QEAAJPEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C03C8540 (-_AcquirePreferredModeInfo@MonitorModes@DxgMonitor@@QEAAJPEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 */

__int64 __fastcall DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::AcquirePreferredModeInfo(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a1,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE **a2,
        __int64 a3)
{
  int MonitorFromHandle; // eax
  unsigned int v6; // edi
  PERESOURCE v7; // rbx
  struct _ERESOURCE *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v12; // [rsp+20h] [rbp-20h] BYREF
  __int64 v13; // [rsp+28h] [rbp-18h]
  char v14; // [rsp+30h] [rbp-10h]
  PERESOURCE Resource; // [rsp+58h] [rbp+18h] BYREF

  v12 = -1;
  v13 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v14 = 1;
    v12 = 6000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 6000);
  }
  else
  {
    v14 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v12, 6000);
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  *a2 = 0LL;
  Resource = 0LL;
  MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, (struct DXGMONITOR **)&Resource);
  if ( MonitorFromHandle == -1073741816 )
  {
    WdLogSingleEntry1(2LL, a1);
    v6 = -1071774943;
  }
  else
  {
    if ( MonitorFromHandle < 0 )
      WdLogSingleEntry0(1LL);
    v7 = Resource;
    if ( !Resource )
      WdLogSingleEntry0(1LL);
    RESOURCE_LOCK<DxgMonitor::MonitorDescriptorState>::RESOURCE_LOCK<DxgMonitor::MonitorDescriptorState>(
      &Resource,
      *(struct _ERESOURCE **)&v7[2].ActiveCount,
      1);
    v8 = Resource;
    v6 = DxgMonitor::MonitorModes::_AcquirePreferredModeInfo((DxgMonitor::MonitorModes *)Resource, a2);
    if ( v8 )
    {
      ExReleaseResourceLite(v8);
      KeLeaveCriticalRegion();
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
  if ( v14 )
  {
    LOBYTE(v9) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v12);
  }
  return v6;
}
