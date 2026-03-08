/*
 * XREFs of ?IsMonitorConnected@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x1C01E8310
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     MonitorIsMonitorConnected @ 0x1C0167278 (MonitorIsMonitorConnected.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::IsMonitorConnected(
        DXGDMM_INTERFACE_V1_IMPL *this,
        void *const a2,
        _BYTE *a3,
        unsigned __int8 *a4)
{
  unsigned int v5; // esi
  unsigned int IsMonitorConnected; // ebx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v11; // [rsp+50h] [rbp-28h] BYREF
  __int64 v12; // [rsp+58h] [rbp-20h]
  char v13; // [rsp+60h] [rbp-18h]

  v11 = -1;
  v12 = 0LL;
  v5 = (unsigned int)a2;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v13 = 1;
    v11 = 6057;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6057);
  }
  else
  {
    v13 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v11, 6057);
  if ( !a3 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    IsMonitorConnected = -1073741811;
    goto LABEL_9;
  }
  *a3 = 0;
  if ( !this )
  {
    WdLogSingleEntry1(2LL, 0LL);
LABEL_16:
    IsMonitorConnected = -1071775742;
    goto LABEL_9;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    WdLogSingleEntry0(1LL);
  if ( !*((_QWORD *)this + 365) )
  {
    WdLogSingleEntry1(2LL, this);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)this,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_16;
  }
  IsMonitorConnected = MonitorIsMonitorConnected((__int64)this, v5, 0LL, a3);
LABEL_9:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
  if ( v13 )
  {
    LOBYTE(v8) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v8, &EventProfilerExit, v9, v11);
  }
  return IsMonitorConnected;
}
