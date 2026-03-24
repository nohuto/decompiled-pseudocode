/*
 * XREFs of ?AcquireNextModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C0196FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009DB4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?_GetNextMonitorModeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU2@@Z @ 0x1C01970D8 (-_GetNextMonitorModeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU2@@Z.c)
 */

__int64 __fastcall DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a1,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int MonitorFromHandle; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGMONITOR *v14; // rbx
  struct _ERESOURCE *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int NextMonitorModeEnumerator; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // [rsp+20h] [rbp-20h] BYREF
  __int64 v33; // [rsp+28h] [rbp-18h]
  char v34; // [rsp+30h] [rbp-10h]
  struct DXGMONITOR *v35; // [rsp+60h] [rbp+20h] BYREF

  v32 = -1;
  v33 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 7019;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 7019);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 7019LL);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
  v8[3] = a2;
  v8[4] = a1;
  v8[5] = a3;
  if ( a3 )
  {
    *a3 = 0LL;
    if ( a2 )
    {
      v35 = 0LL;
      MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v35);
      if ( MonitorFromHandle == -1073741816 )
      {
        v25 = WdLogNewEntry5_WdError(v13, v12);
        *(_QWORD *)(v25 + 24) = a1;
        WdLogEvent5_WdError(v25);
        NextMonitorModeEnumerator = -1071774943;
      }
      else
      {
        if ( MonitorFromHandle < 0 )
        {
          v26 = WdLogNewEntry5_WdAssertion(v13, v12);
          WdLogEvent5_WdAssertion(v26);
        }
        v14 = v35;
        if ( !v35 )
        {
          v27 = WdLogNewEntry5_WdAssertion(v13, v12);
          WdLogEvent5_WdAssertion(v27);
          v30 = WdLogNewEntry5_WdAssertion(v29, v28);
          WdLogEvent5_WdAssertion(v30);
        }
        v15 = (struct _ERESOURCE *)((char *)v14 + 296);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v14 + 296), 1u);
        NextMonitorModeEnumerator = DXGMONITOR::_GetNextMonitorModeEnumerator(v14, a2, a3);
        if ( !NextMonitorModeEnumerator && !*a3 )
        {
          v31 = WdLogNewEntry5_WdAssertion(v17, v16);
          WdLogEvent5_WdAssertion(v31);
        }
        ExReleaseResourceLite(v15);
        KeLeaveCriticalRegion();
      }
    }
    else
    {
      v24 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v24 + 24) = 0LL;
      WdLogEvent5_WdError(v24);
      NextMonitorModeEnumerator = -1071774942;
    }
  }
  else
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
    v23[3] = 0LL;
    v23[4] = a2;
    v23[5] = a1;
    WdLogEvent5_WdError(v23);
    NextMonitorModeEnumerator = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v19);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v32);
  return NextMonitorModeEnumerator;
}
