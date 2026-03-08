/*
 * XREFs of ?AcquireSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C01CEF00
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AcquireSourceModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL **this,
        struct D3DKMDT_HVIDPN__ *const a2,
        _QWORD *a3,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ **a4)
{
  unsigned int v4; // edi
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  DXGK_VIDPN_INTERFACE_V1_IMPL *v14; // rcx
  char *v15; // rdx
  _QWORD *v16; // rdx
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v17; // r15
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // r8
  _QWORD *v24; // rax
  int v25; // eax
  DXGK_VIDPN_INTERFACE_V1_IMPL *v26; // rcx
  int v27; // [rsp+20h] [rbp-38h] BYREF
  __int64 v28; // [rsp+28h] [rbp-30h]
  char v29; // [rsp+30h] [rbp-28h]

  v4 = 0;
  v8 = (unsigned int)a2;
  v27 = -1;
  v28 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v29 = 1;
    v27 = 7043;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7043);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v27, 7043);
  v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
  v13[3] = this;
  v13[4] = v8;
  v13[5] = a3;
  v13[6] = a4;
  if ( !a3 || !a4 )
  {
    WdLogSingleEntry3(2LL, 0LL, v8, this);
    v25 = -1073741811;
LABEL_35:
    v4 = v25;
    goto LABEL_18;
  }
  *a3 = 0LL;
  *a4 = 0LL;
  if ( !this || *((_DWORD *)this + 16) != 1833172997 )
  {
    WdLogSingleEntry1(2LL, this);
    v25 = -1071774973;
    goto LABEL_35;
  }
  v14 = this[15];
  if ( v14 == (DXGK_VIDPN_INTERFACE_V1_IMPL *)(this + 15)
    || (v15 = (char *)v14 - 8, v14 == (DXGK_VIDPN_INTERFACE_V1_IMPL *)8) )
  {
LABEL_30:
    WdLogSingleEntry2(2LL, v8, this);
  }
  else
  {
    while ( *(_DWORD *)(*((_QWORD *)v15 + 11) + 24LL) != (_DWORD)v8 )
    {
      v26 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)*((_QWORD *)v15 + 1);
      v15 = (char *)v26 - 8;
      if ( v26 == (DXGK_VIDPN_INTERFACE_V1_IMPL *)(this + 15) )
        v15 = 0LL;
      if ( !v15 )
        goto LABEL_30;
    }
  }
  v16 = (_QWORD *)((char *)this[38] + 24);
  v17 = (struct D3DKMDT_HVIDPNSOURCEMODESET__ *)*((_QWORD *)this[6] + 54);
  if ( (_QWORD *)*v16 == v16 || (v18 = *v16 - 8LL, *v16 == 8LL) )
  {
LABEL_33:
    WdLogSingleEntry1(2LL, v8);
    v25 = -1071774972;
    goto LABEL_35;
  }
  while ( *(_DWORD *)(v18 + 24) != (_DWORD)v8 )
  {
    v24 = *(_QWORD **)(v18 + 8);
    v18 = (__int64)(v24 - 1);
    if ( v24 == v16 )
      v18 = 0LL;
    if ( !v18 )
      goto LABEL_33;
  }
  v19 = *(_QWORD *)(v18 + 104);
  if ( !v19 )
  {
    v20 = 0LL;
    goto LABEL_32;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v19 + 96));
  v20 = *(_QWORD *)(v18 + 104);
  if ( !v20 )
LABEL_32:
    WdLogSingleEntry0(1LL);
  v21 = 0LL;
  if ( v20 != -137 )
    v21 = v20;
  *a3 = v21;
  *a4 = v17;
LABEL_18:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v22, v27);
  return v4;
}
