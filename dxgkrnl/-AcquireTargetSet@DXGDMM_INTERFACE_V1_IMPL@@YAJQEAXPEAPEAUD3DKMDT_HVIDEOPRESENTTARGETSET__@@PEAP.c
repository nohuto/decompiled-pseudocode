/*
 * XREFs of ?AcquireTargetSet@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEAPEBU_DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE@@@Z @ 0x1C03AFF70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::AcquireTargetSet(
        DXGDMM_INTERFACE_V1_IMPL *this,
        __int64 *a2,
        struct D3DKMDT_HVIDEOPRESENTTARGETSET__ **a3,
        const struct _DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE **a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rdx
  struct D3DKMDT_HVIDEOPRESENTTARGETSET__ *v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  int v14; // [rsp+50h] [rbp-28h] BYREF
  __int64 v15; // [rsp+58h] [rbp-20h]
  char v16; // [rsp+60h] [rbp-18h]

  v14 = -1;
  v15 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v16 = 1;
    v14 = 6050;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6050);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v14, 6050);
  if ( a2 && a3 )
  {
    *a2 = 0LL;
    *a3 = 0LL;
    if ( this )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
        WdLogSingleEntry0(1LL);
      v8 = *((_QWORD *)this + 365);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 104);
        v10 = *(struct D3DKMDT_HVIDEOPRESENTTARGETSET__ **)(v9 + 472);
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 120) + 72LL));
        *a2 = *(_QWORD *)(v9 + 120) & -(__int64)(*(_QWORD *)(v9 + 120) != -112LL);
        v7 = 0;
        *a3 = v10;
        goto LABEL_16;
      }
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
    }
    else
    {
      WdLogSingleEntry1(2LL, 0LL);
    }
    v7 = -1071775742;
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    v7 = -1073741811;
  }
LABEL_16:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
  if ( v16 )
  {
    LOBYTE(v11) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v14);
  }
  return v7;
}
