/*
 * XREFs of ?AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGK_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C03C16B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DpiGetDxgAdapter @ 0x1C000E550 (DpiGetDxgAdapter.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     MonitorGetMonitorHandle @ 0x1C0171B54 (MonitorGetMonitorHandle.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet(
        __int64 a1,
        unsigned int a2,
        struct D3DKMDT_HMONITORSOURCEMODESET__ **a3,
        const struct _DXGK_MONITORSOURCEMODESET_INTERFACE **a4)
{
  __int64 v6; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  unsigned int v13; // ebx
  DXGADAPTER *DxgAdapter; // rax
  __int64 v15; // rdi
  __int64 v16; // r8
  int MonitorHandle; // eax
  struct D3DKMDT_HMONITORSOURCEMODESET__ *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v22; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+38h] [rbp-18h]
  char v24; // [rsp+40h] [rbp-10h]
  struct D3DKMDT_HMONITORSOURCEMODESET__ *v25; // [rsp+80h] [rbp+30h] BYREF

  v22 = -1;
  v23 = 0LL;
  v6 = a2;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v24 = 1;
    v22 = 7052;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 7052);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 7052);
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  v12[3] = a1;
  v12[4] = v6;
  v12[5] = a3;
  v12[6] = a4;
  if ( a3 && (*a3 = 0LL, a4) )
  {
    *a4 = 0LL;
    DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
    v15 = (__int64)DxgAdapter;
    if ( !DxgAdapter )
      goto LABEL_12;
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
      WdLogSingleEntry0(1LL);
    if ( *(_QWORD *)(v15 + 2920) )
    {
      v25 = 0LL;
      LOBYTE(v16) = 1;
      MonitorHandle = MonitorGetMonitorHandle(
                        v15,
                        (unsigned int)v6,
                        v16,
                        DXGK_MONITOR_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet,
                        &v25);
      v13 = MonitorHandle;
      if ( MonitorHandle == -1073741275 )
      {
        WdLogSingleEntry1(3LL, v6);
        v13 = -1071774920;
      }
      else if ( MonitorHandle >= 0 )
      {
        v18 = v25;
        if ( !v25 )
          WdLogSingleEntry0(1LL);
        *a3 = v18;
        *a4 = &DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::DxgMonitorSourceModeSetInterfaceV1;
        v13 = 0;
      }
      else
      {
        WdLogSingleEntry2(2LL, v6, MonitorHandle);
      }
    }
    else
    {
LABEL_12:
      WdLogSingleEntry1(2LL, a1);
      v13 = -1071775742;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, a1);
    v13 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 )
  {
    LOBYTE(v19) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v22);
  }
  return v13;
}
