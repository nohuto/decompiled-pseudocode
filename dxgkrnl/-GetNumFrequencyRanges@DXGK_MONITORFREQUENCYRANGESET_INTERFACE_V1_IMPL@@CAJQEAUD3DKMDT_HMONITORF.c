/*
 * XREFs of ?GetNumFrequencyRanges@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@QEA_K@Z @ 0x1C03C2160
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C00093CC (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ??0?$RESOURCE_LOCK@VMonitorDescriptorState@DxgMonitor@@@@QEAA@PEAVMonitorDescriptorState@DxgMonitor@@_N@Z @ 0x1C001EF9C (--0-$RESOURCE_LOCK@VMonitorDescriptorState@DxgMonitor@@@@QEAA@PEAVMonitorDescriptorState@DxgMoni.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL::GetNumFrequencyRanges(
        struct D3DKMDT_HMONITORFREQUENCYRANGESET__ *const a1,
        unsigned __int64 *const a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  unsigned int v10; // ebx
  int MonitorFromHandle; // eax
  PERESOURCE v12; // rbx
  struct _ERESOURCE *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v17; // [rsp+20h] [rbp-20h] BYREF
  __int64 v18; // [rsp+28h] [rbp-18h]
  char v19; // [rsp+30h] [rbp-10h]
  PERESOURCE Resource; // [rsp+50h] [rbp+10h] BYREF

  v17 = -1;
  v18 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v19 = 1;
    v17 = 7023;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 7023);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v17, 7023);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 24) = a1;
  *(_QWORD *)(v9 + 32) = a2;
  if ( a2 )
  {
    *a2 = 0LL;
    Resource = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, (struct DXGMONITOR **)&Resource);
    if ( MonitorFromHandle == -1073741816 )
    {
      WdLogSingleEntry1(2LL, a1);
      v10 = -1071774949;
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
        0);
      v13 = Resource;
      v10 = 0;
      *a2 = Resource[1].ActiveEntries;
      ExReleaseResourceLite(v13);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, a1);
    v10 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 )
  {
    LOBYTE(v14) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v17);
  }
  return v10;
}
