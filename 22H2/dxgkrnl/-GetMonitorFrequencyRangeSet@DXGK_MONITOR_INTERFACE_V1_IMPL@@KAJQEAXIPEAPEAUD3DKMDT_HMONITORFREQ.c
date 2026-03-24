/*
 * XREFs of ?GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_DXGK_MONITORFREQUENCYRANGESET_INTERFACE@@@Z @ 0x1C02F8000
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DpiGetDxgAdapter @ 0x1C0013A20 (DpiGetDxgAdapter.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     MonitorGetMonitorHandle @ 0x1C0133530 (MonitorGetMonitorHandle.c)
 *     MonitorReleaseMonitorHandle @ 0x1C0139140 (MonitorReleaseMonitorHandle.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V1_IMPL::GetMonitorFrequencyRangeSet(
        __int64 a1,
        unsigned int a2,
        struct D3DKMDT_HMONITORFREQUENCYRANGESET__ **a3,
        const struct _DXGK_MONITORFREQUENCYRANGESET_INTERFACE **a4)
{
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  DXGADAPTER *DxgAdapter; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  int MonitorHandle; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  int v31; // [rsp+30h] [rbp-20h] BYREF
  __int64 v32; // [rsp+38h] [rbp-18h]
  char v33; // [rsp+40h] [rbp-10h]
  struct HDXGMONITOR__ *v34; // [rsp+80h] [rbp+30h] BYREF

  v31 = -1;
  v32 = 0LL;
  v6 = a1;
  v7 = a2;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v33 = 1;
    v31 = 7054;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 7054);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v31, 7054LL);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
  v10[3] = v6;
  v10[4] = v7;
  v10[5] = a3;
  v10[6] = a4;
  if ( !a3 )
  {
    v13 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v13 + 32) = v6;
LABEL_9:
    *(_QWORD *)(v13 + 24) = 0LL;
    WdLogEvent5_WdError(v13);
    LODWORD(v6) = -1073741811;
    goto LABEL_22;
  }
  *a3 = 0LL;
  if ( !a4 )
  {
    v13 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v13 + 32) = v7;
    goto LABEL_9;
  }
  *a4 = 0LL;
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(v6, v11);
  v18 = (__int64)DxgAdapter;
  if ( !DxgAdapter )
    goto LABEL_14;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v17, v16);
    WdLogEvent5_WdAssertion(v19);
  }
  if ( *(_QWORD *)(v18 + 2696) )
  {
    v34 = 0LL;
    MonitorHandle = MonitorGetMonitorHandle(
                      v18,
                      (unsigned int)v7,
                      1u,
                      DXGK_MONITOR_INTERFACE_V1_IMPL::GetMonitorFrequencyRangeSet,
                      &v34);
    v6 = MonitorHandle;
    if ( MonitorHandle == -1073741275 )
    {
      v25 = WdLogNewEntry5_WdWarning(v23, v22, v24);
      *(_QWORD *)(v25 + 24) = v7;
      WdLogEvent5_WdWarning(v25);
      LODWORD(v6) = -1071774920;
    }
    else if ( MonitorHandle >= 0 )
    {
      v6 = (__int64)v34;
      if ( !v34 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v23, v22);
        WdLogEvent5_WdAssertion(v27);
      }
      *a3 = (struct D3DKMDT_HMONITORFREQUENCYRANGESET__ *)v6;
      *a4 = &DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL::DxgMonitorFrequencyRangeSetInterfaceV1;
      MonitorReleaseMonitorHandle(v18, v6, DXGK_MONITOR_INTERFACE_V1_IMPL::GetMonitorFrequencyRangeSet);
      LODWORD(v6) = 0;
    }
    else
    {
      v26 = WdLogNewEntry5_WdError(v23, v22);
      *(_QWORD *)(v26 + 24) = v7;
      *(_QWORD *)(v26 + 32) = v6;
      WdLogEvent5_WdError(v26);
    }
  }
  else
  {
LABEL_14:
    v20 = WdLogNewEntry5_WdError(v17, v16);
    *(_QWORD *)(v20 + 24) = v6;
    WdLogEvent5_WdError(v20);
    LODWORD(v6) = -1071775742;
  }
LABEL_22:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31, v14);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v31);
  return (unsigned int)v6;
}
