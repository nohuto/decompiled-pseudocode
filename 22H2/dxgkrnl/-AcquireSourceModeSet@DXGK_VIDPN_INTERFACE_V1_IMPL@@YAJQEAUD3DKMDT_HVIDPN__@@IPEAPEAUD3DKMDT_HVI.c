/*
 * XREFs of ?AcquireSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C015A1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AcquireSourceModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        __int64 *a3,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ **a4)
{
  __int64 v6; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v13; // rdi
  char *v14; // r8
  DXGK_VIDPN_INTERFACE_V1_IMPL *v15; // rcx
  _QWORD *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rcx
  unsigned int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // r8
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // [rsp+20h] [rbp-48h] BYREF
  __int64 v32; // [rsp+28h] [rbp-40h]
  char v33; // [rsp+30h] [rbp-38h]
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v34; // [rsp+70h] [rbp+8h]

  v31 = -1;
  v6 = (unsigned int)a2;
  v32 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v33 = 1;
    v31 = 7043;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7043);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v31, 7043LL);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
  v10[3] = this;
  v10[4] = v6;
  v10[5] = a3;
  v10[6] = a4;
  if ( !a3 || !a4 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
    v26[3] = 0LL;
    v26[4] = v6;
    v26[5] = this;
    WdLogEvent5_WdError(v26);
    v21 = -1073741811;
    goto LABEL_20;
  }
  *a3 = 0LL;
  *a4 = 0LL;
  if ( !this || (v13 = this, *((_DWORD *)this + 16) != 1833172997) )
    v13 = 0LL;
  if ( !v13 )
  {
    v27 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v27 + 24) = this;
    WdLogEvent5_WdError(v27);
    v21 = -1071774973;
    goto LABEL_20;
  }
  v14 = 0LL;
  v15 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)*((_QWORD *)v13 + 15);
  if ( v15 != (DXGK_VIDPN_INTERFACE_V1_IMPL *)((char *)v13 + 120) )
    v14 = (char *)v15 - 8;
  if ( !v14 )
    goto LABEL_35;
  do
  {
    if ( *(_DWORD *)(*((_QWORD *)v14 + 11) + 24LL) == (_DWORD)v6 )
      break;
    v15 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)*((_QWORD *)v14 + 1);
    v14 = (char *)v15 - 8;
    if ( v15 == (DXGK_VIDPN_INTERFACE_V1_IMPL *)((char *)v13 + 120) )
      v14 = 0LL;
  }
  while ( v14 );
  if ( !v14 )
  {
LABEL_35:
    v28 = WdLogNewEntry5_WdError(v15, (char *)v13 + 120);
    *(_QWORD *)(v28 + 24) = v6;
    *(_QWORD *)(v28 + 32) = v13;
    WdLogEvent5_WdError(v28);
  }
  v16 = (_QWORD *)(*((_QWORD *)v13 + 38) + 24LL);
  v34 = *(struct D3DKMDT_HVIDPNSOURCEMODESET__ **)(*((_QWORD *)v13 + 6) + 384LL);
  if ( (_QWORD *)*v16 == v16 )
  {
    v17 = 0LL;
  }
  else
  {
    v17 = *v16 - 8LL;
    if ( *v16 == 8LL )
    {
LABEL_39:
      v30 = WdLogNewEntry5_WdError(v17, v16);
      *(_QWORD *)(v30 + 24) = v6;
      WdLogEvent5_WdError(v30);
      v21 = -1071774972;
      goto LABEL_20;
    }
    do
    {
      if ( *(_DWORD *)(v17 + 24) == (_DWORD)v6 )
        break;
      v25 = *(_QWORD **)(v17 + 8);
      v17 = (__int64)(v25 - 1);
      if ( v25 == v16 )
        v17 = 0LL;
    }
    while ( v17 );
  }
  if ( !v17 )
    goto LABEL_39;
  v18 = *(_QWORD *)(v17 + 104);
  if ( !v18 )
  {
    v19 = 0LL;
    goto LABEL_38;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v18 + 96));
  v19 = *(_QWORD *)(v17 + 104);
  if ( !v19 )
  {
LABEL_38:
    v29 = WdLogNewEntry5_WdAssertion(v17, v16);
    WdLogEvent5_WdAssertion(v29);
  }
  v20 = v19 & -(__int64)(v19 != -137);
  v21 = 0;
  *a3 = v20;
  *a4 = v34;
LABEL_20:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31, (__int64)v16);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v31);
  return v21;
}
