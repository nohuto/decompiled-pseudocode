__int64 __fastcall DXGK_MONITOR_INTERFACE_V1_IMPL::GetMonitorDescriptorSet(
        __int64 a1,
        unsigned int a2,
        struct D3DKMDT_HMONITORDESCRIPTORSET__ **a3,
        const struct _DXGK_MONITORDESCRIPTORSET_INTERFACE **a4)
{
  __int64 v6; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  DXGADAPTER *DxgAdapter; // rax
  __int64 v14; // rdi
  __int64 v15; // r8
  int MonitorHandle; // eax
  __int64 v17; // r9
  unsigned int v18; // ebx
  struct D3DKMDT_HMONITORDESCRIPTORSET__ *v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v23; // [rsp+30h] [rbp-20h] BYREF
  __int64 v24; // [rsp+38h] [rbp-18h]
  char v25; // [rsp+40h] [rbp-10h]
  struct D3DKMDT_HMONITORDESCRIPTORSET__ *v26; // [rsp+80h] [rbp+30h] BYREF

  v23 = -1;
  v24 = 0LL;
  v6 = a2;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v25 = 1;
    v23 = 7055;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 7055);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v23, 7055);
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  v12[3] = a1;
  v12[4] = v6;
  v12[5] = a3;
  v12[6] = a4;
  if ( !a3 )
  {
    WdLogSingleEntry2(2LL, 0LL, a1);
LABEL_20:
    v18 = -1073741811;
    goto LABEL_14;
  }
  *a3 = 0LL;
  if ( !a4 )
  {
    WdLogSingleEntry2(2LL, 0LL, v6);
    goto LABEL_20;
  }
  *a4 = 0LL;
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  v14 = (__int64)DxgAdapter;
  if ( !DxgAdapter )
    goto LABEL_21;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
    WdLogSingleEntry0(1LL);
  if ( *(_QWORD *)(v14 + 2920) )
  {
    v26 = 0LL;
    LOBYTE(v15) = 1;
    MonitorHandle = MonitorGetMonitorHandle(
                      v14,
                      (unsigned int)v6,
                      v15,
                      DXGK_MONITOR_INTERFACE_V1_IMPL::GetMonitorDescriptorSet,
                      &v26);
    v18 = MonitorHandle;
    if ( MonitorHandle == -1073741275 )
    {
      WdLogSingleEntry1(3LL, v6);
      v18 = -1071774920;
    }
    else if ( MonitorHandle < 0 )
    {
      WdLogSingleEntry2(2LL, v6, MonitorHandle);
    }
    else
    {
      v19 = v26;
      if ( !v26 )
        WdLogSingleEntry0(1LL);
      *a3 = v19;
      *a4 = &DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL::DxgMonitorDescriptorSetInterfaceV1;
      MonitorReleaseMonitorHandle(v14, (__int64)v19, DXGK_MONITOR_INTERFACE_V1_IMPL::GetMonitorDescriptorSet, v17);
      v18 = 0;
    }
  }
  else
  {
LABEL_21:
    WdLogSingleEntry1(2LL, a1);
    v18 = -1071775742;
  }
LABEL_14:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 )
  {
    LOBYTE(v20) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v23);
  }
  return v18;
}
