/*
 * XREFs of ?AcquireTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C0159E70
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AcquireTargetModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        _QWORD *a3,
        struct D3DKMDT_HVIDPNTARGETMODESET__ **a4)
{
  unsigned int v4; // edi
  __int64 v5; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v13; // rcx
  _QWORD *v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // [rsp+20h] [rbp-38h] BYREF
  __int64 v31; // [rsp+28h] [rbp-30h]
  char v32; // [rsp+30h] [rbp-28h]
  struct D3DKMDT_HVIDPNTARGETMODESET__ *v33; // [rsp+60h] [rbp+8h]

  v4 = 0;
  v5 = (unsigned int)a2;
  v30 = -1;
  v31 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v32 = 1;
    v30 = 7048;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7048);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v30, 7048LL);
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9);
  v11[3] = this;
  v11[4] = v5;
  v11[5] = a3;
  v11[6] = a4;
  if ( !a3 || !a4 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
    v24[3] = 0LL;
    v24[4] = v5;
    v24[5] = this;
    WdLogEvent5_WdError(v24);
    v25 = -1073741811;
LABEL_38:
    v4 = v25;
    goto LABEL_19;
  }
  *a3 = 0LL;
  *a4 = 0LL;
  if ( !this || *((_DWORD *)this + 16) != 1833172997 )
  {
    v29 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v29 + 24) = this;
    WdLogEvent5_WdError(v29);
    v25 = -1071774973;
    goto LABEL_38;
  }
  v14 = (_QWORD *)*((_QWORD *)this + 15);
  if ( v14 == (_QWORD *)((char *)this + 120) || --v14 == 0LL )
  {
LABEL_32:
    v26 = WdLogNewEntry5_WdError(v13, v14);
    *(_QWORD *)(v26 + 24) = v5;
    *(_QWORD *)(v26 + 32) = this;
    WdLogEvent5_WdError(v26);
  }
  else
  {
    while ( *(_DWORD *)(v14[12] + 24LL) != (_DWORD)v5 )
    {
      v13 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)v14[1];
      v14 = (_QWORD *)((char *)v13 - 8);
      if ( v13 == (DXGK_VIDPN_INTERFACE_V1_IMPL *)((char *)this + 120) )
        v14 = 0LL;
      if ( !v14 )
        goto LABEL_32;
    }
  }
  v33 = *(struct D3DKMDT_HVIDPNTARGETMODESET__ **)(*((_QWORD *)this + 6) + 392LL);
  v15 = (_QWORD *)(*((_QWORD *)this + 39) + 24LL);
  if ( (_QWORD *)*v15 == v15 )
  {
    v16 = 0LL;
  }
  else
  {
    v16 = *v15 - 8LL;
    if ( *v15 == 8LL )
    {
LABEL_36:
      v28 = WdLogNewEntry5_WdError(v15, v14);
      *(_QWORD *)(v28 + 24) = v5;
      WdLogEvent5_WdError(v28);
      v25 = -1071774971;
      goto LABEL_38;
    }
    while ( *(_DWORD *)(v16 + 24) != (_DWORD)v5 )
    {
      v23 = *(_QWORD **)(v16 + 8);
      if ( v23 == v15 )
        v16 = 0LL;
      else
        v16 = (__int64)(v23 - 1);
      if ( !v16 )
        goto LABEL_36;
    }
  }
  if ( !v16 )
    goto LABEL_36;
  v17 = *(_QWORD *)(v16 + 104);
  if ( !v17 )
  {
    v18 = 0LL;
    goto LABEL_35;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v17 + 96));
  v18 = *(_QWORD *)(v16 + 104);
  if ( !v18 )
  {
LABEL_35:
    v27 = WdLogNewEntry5_WdAssertion(v17, v14);
    WdLogEvent5_WdAssertion(v27);
  }
  v19 = 0LL;
  if ( v18 != -137 )
    v19 = v18;
  *a3 = v19;
  *a4 = v33;
LABEL_19:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30, (__int64)v14);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v30);
  return v4;
}
