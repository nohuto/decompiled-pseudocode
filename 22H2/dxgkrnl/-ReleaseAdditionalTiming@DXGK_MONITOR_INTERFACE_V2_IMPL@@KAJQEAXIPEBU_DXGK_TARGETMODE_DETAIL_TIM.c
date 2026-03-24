/*
 * XREFs of ?ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C019D310
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DpiGetDxgAdapter @ 0x1C0013A20 (DpiGetDxgAdapter.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0133648 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V2_IMPL::ReleaseAdditionalTiming(
        __int64 a1,
        unsigned int a2,
        const struct _DXGK_TARGETMODE_DETAIL_TIMING *a3)
{
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  DXGADAPTER *DxgAdapter; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  DXGADAPTER *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  struct _FAST_MUTEX *v18; // rsi
  int MonitorInstance; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // ebx
  unsigned int v23; // edi
  struct DXGMONITOR *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  struct _ERESOURCE *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // [rsp+20h] [rbp-20h] BYREF
  __int64 v43; // [rsp+28h] [rbp-18h]
  char v44; // [rsp+30h] [rbp-10h]
  struct DXGMONITOR *v45; // [rsp+60h] [rbp+20h] BYREF

  v42 = -1;
  v43 = 0LL;
  v5 = a2;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v44 = 1;
    v42 = 7060;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 7060);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v42, 7060LL);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
  v8[3] = a3;
  v8[4] = a1;
  v8[5] = v5;
  if ( !a3 )
  {
    v33 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v33 + 24) = 0LL;
LABEL_23:
    WdLogEvent5_WdError(v33);
    v22 = -1073741811;
    goto LABEL_15;
  }
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1, v9);
  v14 = DxgAdapter;
  if ( !DxgAdapter )
  {
    v34 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v34 + 24) = a1;
    WdLogEvent5_WdError(v34);
    v22 = -1071775742;
    goto LABEL_15;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) || (v17 = *((_QWORD *)v14 + 337)) == 0 )
  {
    v33 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v33 + 24) = a1;
    goto LABEL_23;
  }
  v18 = *(struct _FAST_MUTEX **)(v17 + 96);
  if ( !v18 )
  {
    v33 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v33 + 24) = v14;
    goto LABEL_23;
  }
  v45 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v18, (unsigned int)v5, 0, &v45);
  v22 = -1073741275;
  v23 = MonitorInstance;
  if ( MonitorInstance == -1073741275 )
  {
    v35 = WdLogNewEntry5_WdDmmEvent(v21);
    *(_QWORD *)(v35 + 24) = v5;
    *(_QWORD *)(v35 + 32) = v18;
    WdLogEvent5_WdDmmEvent(v35);
  }
  else if ( MonitorInstance < 0 )
  {
    v36 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v36 + 24) = v5;
    *(_QWORD *)(v36 + 32) = v18;
    WdLogEvent5_WdError(v36);
    v22 = v23;
  }
  else
  {
    v24 = v45;
    if ( !v45 )
    {
      v37 = WdLogNewEntry5_WdAssertion(v21, v20);
      WdLogEvent5_WdAssertion(v37);
      v40 = WdLogNewEntry5_WdAssertion(v39, v38);
      WdLogEvent5_WdAssertion(v40);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v24 + 296), 1u);
    v27 = *((_DWORD *)v24 + 128);
    if ( v27 )
    {
      *((_DWORD *)v24 + 128) = v27 - 1;
    }
    else
    {
      v41 = WdLogNewEntry5_WdError(v26, v25);
      WdLogEvent5_WdError(v41);
    }
    v28 = (struct _ERESOURCE *)((char *)v24 + 296);
    v22 = 0;
    ExReleaseResourceLite(v28);
    KeLeaveCriticalRegion();
  }
LABEL_15:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v29);
  if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v42);
  return v22;
}
