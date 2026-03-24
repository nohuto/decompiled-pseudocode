/*
 * XREFs of ?AcquirePreferredModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C02F7970
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009DB4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01971D4 (-_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::AcquirePreferredModeInfo(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a1,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  int MonitorFromHandle; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // ebx
  __int64 v14; // rax
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  struct _ERESOURCE *p_VideoSignalInfo; // r14
  __int64 v21; // rcx
  const struct DXGMONITOR::_DMMMONITORSOURCEMODE *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  int v30; // [rsp+20h] [rbp-20h] BYREF
  __int64 v31; // [rsp+28h] [rbp-18h]
  char v32; // [rsp+30h] [rbp-10h]
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v33; // [rsp+68h] [rbp+28h] BYREF

  v30 = -1;
  v31 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v32 = 1;
    v30 = 6000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 6000);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v30, 6000LL);
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6, v5);
    WdLogEvent5_WdAssertion(v7);
  }
  *a2 = 0LL;
  v33 = 0LL;
  MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, (struct DXGMONITOR **)&v33);
  if ( MonitorFromHandle == -1073741816 )
  {
    v11 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v11 + 24) = a1;
    WdLogEvent5_WdError(v11);
    v13 = -1071774943;
  }
  else
  {
    if ( MonitorFromHandle < 0 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v10, v9);
      WdLogEvent5_WdAssertion(v14);
    }
    v15 = v33;
    if ( !v33 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v10, v9);
      WdLogEvent5_WdAssertion(v16);
      v19 = WdLogNewEntry5_WdAssertion(v18, v17);
      WdLogEvent5_WdAssertion(v19);
    }
    p_VideoSignalInfo = (struct _ERESOURCE *)&v15[3].VideoSignalInfo;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)&v15[3].VideoSignalInfo, 1u);
    v22 = *(const struct DXGMONITOR::_DMMMONITORSOURCEMODE **)&v15[2].VideoSignalInfo.HSyncFreq.Denominator;
    if ( v22 )
    {
      v33 = 0LL;
      v13 = DXGMONITOR::_CreateMonitorModeEnumerator((DXGMONITOR ***)v15, v22, &v33);
      if ( !v13 )
      {
        v25 = v33;
        if ( !v33 )
        {
          v26 = WdLogNewEntry5_WdAssertion(v24, v23);
          WdLogEvent5_WdAssertion(v26);
        }
        *a2 = v25;
      }
    }
    else
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v21, 0LL) + 24) = v15;
      v13 = 1075708702;
    }
    ExReleaseResourceLite(p_VideoSignalInfo);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30, v12);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v30);
  return v13;
}
