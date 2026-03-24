/*
 * XREFs of ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C019A190
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DpiGetDxgAdapter @ 0x1C0013A20 (DpiGetDxgAdapter.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0133648 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetAdditionalTiming@DXGMONITOR@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C019A310 (-_GetAdditionalTiming@DXGMONITOR@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V2_IMPL::GetAdditionalTiming(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        struct _DXGK_TARGETMODE_DETAIL_TIMING **a4)
{
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r14
  DXGADAPTER *DxgAdapter; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  DXGADAPTER *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  struct _FAST_MUTEX *v21; // rbx
  int MonitorInstance; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // edi
  unsigned int v26; // esi
  struct DXGMONITOR *v27; // rdi
  unsigned int AdditionalTiming; // eax
  struct _ERESOURCE *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  int v42; // [rsp+20h] [rbp-20h] BYREF
  __int64 v43; // [rsp+28h] [rbp-18h]
  char v44; // [rsp+30h] [rbp-10h]
  struct DXGMONITOR *v45; // [rsp+70h] [rbp+30h] BYREF

  v42 = -1;
  v43 = 0LL;
  v7 = a2;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v44 = 1;
    v42 = 7059;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 7059);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v42, 7059LL);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
  v13 = v7;
  v10[3] = a1;
  v10[4] = v7;
  v10[5] = a3;
  v10[6] = a4;
  if ( !a3 || !a4 )
  {
    v34 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v34 + 24) = 0LL;
LABEL_22:
    WdLogEvent5_WdError(v34);
    v25 = -1073741811;
    goto LABEL_14;
  }
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1, v11);
  v17 = DxgAdapter;
  if ( !DxgAdapter )
  {
    v35 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v35 + 24) = a1;
    WdLogEvent5_WdError(v35);
    v25 = -1071775742;
    goto LABEL_14;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) || (v20 = *((_QWORD *)v17 + 337)) == 0 )
  {
    v34 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v34 + 24) = a1;
    goto LABEL_22;
  }
  v21 = *(struct _FAST_MUTEX **)(v20 + 96);
  if ( !v21 )
  {
    v34 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v34 + 24) = v17;
    goto LABEL_22;
  }
  v45 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v21, (unsigned int)v7, 0, &v45);
  v25 = -1073741275;
  v26 = MonitorInstance;
  if ( MonitorInstance == -1073741275 )
  {
    v36 = WdLogNewEntry5_WdDmmEvent(v24);
    *(_QWORD *)(v36 + 24) = v13;
    *(_QWORD *)(v36 + 32) = v21;
    WdLogEvent5_WdDmmEvent(v36);
  }
  else if ( MonitorInstance < 0 )
  {
    v37 = WdLogNewEntry5_WdError(v24, v23);
    *(_QWORD *)(v37 + 24) = v13;
    *(_QWORD *)(v37 + 32) = v21;
    WdLogEvent5_WdError(v37);
    v25 = v26;
  }
  else
  {
    v27 = v45;
    if ( !v45 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v24, v23);
      WdLogEvent5_WdAssertion(v38);
      v41 = WdLogNewEntry5_WdAssertion(v40, v39);
      WdLogEvent5_WdAssertion(v41);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v27 + 296), 1u);
    AdditionalTiming = DXGMONITOR::_GetAdditionalTiming(v27, a3, a4);
    v29 = (struct _ERESOURCE *)((char *)v27 + 296);
    v25 = AdditionalTiming;
    ExReleaseResourceLite(v29);
    KeLeaveCriticalRegion();
  }
LABEL_14:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v30);
  if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v42);
  return v25;
}
