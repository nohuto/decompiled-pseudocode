/*
 * XREFs of ?AcquireFirstModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C0196D10
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009DB4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01971D4 (-_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::AcquireFirstModeInfo(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a1,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int MonitorFromHandle; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v13; // rbx
  struct _ERESOURCE *p_VideoSignalInfo; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // ebx
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  UINT *p_cy; // rdi
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v34; // rcx
  __int64 v35; // rax
  _QWORD *v36; // rax
  const struct DXGMONITOR::_DMMMONITORSOURCEMODE *v37; // rdx
  __int64 v38; // rax
  int v39; // [rsp+20h] [rbp-20h] BYREF
  __int64 v40; // [rsp+28h] [rbp-18h]
  char v41; // [rsp+30h] [rbp-10h]
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v42; // [rsp+60h] [rbp+20h] BYREF

  v39 = -1;
  v40 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v41 = 1;
    v39 = 7018;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 7018);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v39, 7018LL);
  v7 = WdLogNewEntry5_WdTrace(v6, v5);
  *(_QWORD *)(v7 + 24) = a1;
  *(_QWORD *)(v7 + 32) = a2;
  if ( a2 )
  {
    *a2 = 0LL;
    v42 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, (struct DXGMONITOR **)&v42);
    if ( MonitorFromHandle == -1073741816 )
    {
      v27 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v27 + 24) = a1;
      WdLogEvent5_WdError(v27);
      v20 = -1071774943;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v12, v11);
        WdLogEvent5_WdAssertion(v28);
      }
      v13 = v42;
      if ( !v42 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v12, v11);
        WdLogEvent5_WdAssertion(v29);
        v32 = WdLogNewEntry5_WdAssertion(v31, v30);
        WdLogEvent5_WdAssertion(v32);
      }
      p_VideoSignalInfo = (struct _ERESOURCE *)&v13[3].VideoSignalInfo;
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)&v13[3].VideoSignalInfo, 1u);
      if ( v13[2].VideoSignalInfo.TotalSize.cy )
      {
        p_cy = &v13[2].VideoSignalInfo.ActiveSize.cy;
        v42 = 0LL;
        v34 = *(struct _D3DKMDT_MONITOR_SOURCE_MODE **)&v13[2].VideoSignalInfo.ActiveSize.cy;
        if ( v34 == (struct _D3DKMDT_MONITOR_SOURCE_MODE *)&v13[2].VideoSignalInfo.ActiveSize.cy )
          goto LABEL_28;
        v17 = v34 - 1;
        if ( !v34 )
          v17 = 0LL;
        if ( !v17 )
        {
LABEL_28:
          v35 = WdLogNewEntry5_WdAssertion(v34, v15);
          WdLogEvent5_WdAssertion(v35);
        }
        v36 = *(_QWORD **)p_cy;
        if ( *(UINT **)p_cy == p_cy )
        {
          v37 = 0LL;
        }
        else
        {
          v37 = (const struct DXGMONITOR::_DMMMONITORSOURCEMODE *)(v36 - 12);
          if ( !v36 )
            v37 = 0LL;
        }
        v20 = DXGMONITOR::_CreateMonitorModeEnumerator((DXGMONITOR *)v13, v37, &v42);
        if ( !v20 )
        {
          v21 = v42;
          if ( !v42 )
          {
            v38 = WdLogNewEntry5_WdAssertion(v19, v18);
            WdLogEvent5_WdAssertion(v38);
          }
          *a2 = v21;
        }
      }
      else
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v16, v15) + 24) = v13;
        v20 = 1075708747;
      }
      ExReleaseResourceLite(p_VideoSignalInfo);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v26 + 24) = 0LL;
    *(_QWORD *)(v26 + 32) = a1;
    WdLogEvent5_WdError(v26);
    v20 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v22);
  if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v39);
  return v20;
}
