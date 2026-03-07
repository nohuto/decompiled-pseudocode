__int64 __fastcall DXGK_MONITOR_INTERFACE_V2_IMPL::ReleaseAdditionalTiming(
        __int64 a1,
        unsigned int a2,
        const struct _DXGK_TARGETMODE_DETAIL_TIMING *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // r14
  DXGADAPTER *DxgAdapter; // rax
  DXGADAPTER *v13; // rdi
  unsigned int v14; // edi
  __int64 v15; // rax
  MONITOR_MGR *v16; // rbx
  int MonitorInstance; // esi
  PERESOURCE v18; // rbx
  struct _ERESOURCE *v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v23; // [rsp+20h] [rbp-20h] BYREF
  __int64 v24; // [rsp+28h] [rbp-18h]
  char v25; // [rsp+30h] [rbp-10h]
  PERESOURCE Resource; // [rsp+70h] [rbp+30h] BYREF

  v23 = -1;
  v24 = 0LL;
  v5 = a2;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v25 = 1;
    v23 = 7060;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 7060);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v23, 7060);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  v11 = v5;
  v10[3] = a3;
  v10[4] = a1;
  v10[5] = v5;
  if ( !a3 )
  {
    WdLogSingleEntry1(2LL, 0LL);
LABEL_14:
    v14 = -1073741811;
    goto LABEL_23;
  }
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  v13 = DxgAdapter;
  if ( DxgAdapter )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) || (v15 = *((_QWORD *)v13 + 365)) == 0 )
    {
      WdLogSingleEntry1(2LL, a1);
      goto LABEL_14;
    }
    v16 = *(MONITOR_MGR **)(v15 + 112);
    if ( !v16 )
    {
      WdLogSingleEntry1(2LL, v13);
      goto LABEL_14;
    }
    Resource = 0LL;
    v14 = -1073741275;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v16, v5, 0, (struct DXGMONITOR **)&Resource);
    if ( MonitorInstance == -1073741275 )
    {
      WdLogSingleEntry2(7LL, v11, v16);
    }
    else if ( MonitorInstance >= 0 )
    {
      v18 = Resource;
      if ( !Resource )
        WdLogSingleEntry0(1LL);
      RESOURCE_LOCK<DxgMonitor::MonitorDescriptorState>::RESOURCE_LOCK<DxgMonitor::MonitorDescriptorState>(
        &Resource,
        *(struct _ERESOURCE **)&v18[2].ActiveCount,
        1);
      v19 = Resource;
      v14 = DxgMonitor::MonitorModes::_ReleaseAdditionalTiming((DxgMonitor::MonitorModes *)Resource, a3);
      if ( v19 )
      {
        ExReleaseResourceLite(v19);
        KeLeaveCriticalRegion();
      }
    }
    else
    {
      WdLogSingleEntry2(2LL, v11, v16);
      v14 = MonitorInstance;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    v14 = -1071775742;
  }
LABEL_23:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 )
  {
    LOBYTE(v20) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v23);
  }
  return v14;
}
