/*
 * XREFs of ?ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXQEAUD3DKMDT_HMONITORSOURCEMODESET__@@@Z @ 0x1C03C2800
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DpiGetDxgAdapter @ 0x1C000E550 (DpiGetDxgAdapter.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     MonitorReleaseMonitorHandle @ 0x1C01AE14C (MonitorReleaseMonitorHandle.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V1_IMPL::ReleaseMonitorSourceModeSet(
        __int64 a1,
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  DXGADAPTER *DxgAdapter; // rax
  __int64 v11; // rdi
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+28h] [rbp-20h]
  char v19; // [rsp+30h] [rbp-18h]

  v17 = -1;
  v18 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v19 = 1;
    v17 = 7053;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 7053);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v17, 7053);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 24) = a2;
  *(_QWORD *)(v9 + 32) = a1;
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  v11 = (__int64)DxgAdapter;
  if ( !DxgAdapter )
    goto LABEL_9;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
    WdLogSingleEntry0(1LL);
  if ( *(_QWORD *)(v11 + 2920) )
  {
    if ( a2 )
    {
      v13 = MonitorReleaseMonitorHandle(
              v11,
              (__int64)a2,
              DXGK_MONITOR_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet,
              v12);
    }
    else
    {
      WdLogSingleEntry1(2LL, 0LL);
      v13 = -1071774943;
    }
  }
  else
  {
LABEL_9:
    WdLogSingleEntry1(2LL, a1);
    v13 = -1071775742;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 )
  {
    LOBYTE(v14) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v17);
  }
  return v13;
}
