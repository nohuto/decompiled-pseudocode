/*
 * XREFs of ?GetTopology@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@PEAPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_DXGK_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C01CF6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::GetTopology(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct D3DKMDT_HVIDPNTOPOLOGY__ **a3,
        const struct _DXGK_VIDPNTOPOLOGY_INTERFACE **a4)
{
  unsigned int v4; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v13; // rcx
  char *v14; // rbx
  char *v15; // rbx
  __int64 v16; // r8
  int v18; // eax
  int v19; // [rsp+20h] [rbp-28h] BYREF
  __int64 v20; // [rsp+28h] [rbp-20h]
  char v21; // [rsp+30h] [rbp-18h]

  v4 = 0;
  v19 = -1;
  v20 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v21 = 1;
    v19 = 7042;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7042);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v19, 7042);
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  v12[3] = this;
  v12[4] = a2;
  v12[5] = a3;
  if ( a2 && a3 )
  {
    *(_QWORD *)a2 = 0LL;
    *a3 = 0LL;
    if ( this && *((_DWORD *)this + 16) == 1833172997 )
    {
      v13 = *(struct D3DKMDT_HVIDPNTOPOLOGY__ **)(*((_QWORD *)this + 6) + 424LL);
      v14 = (char *)this + 289;
      if ( v14 )
        v15 = v14 - 193;
      else
        v15 = 0LL;
      *(_QWORD *)a2 = v15;
      *a3 = v13;
      goto LABEL_10;
    }
    WdLogSingleEntry1(2LL, this);
    v18 = -1071774973;
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    v18 = -1073741811;
  }
  v4 = v18;
LABEL_10:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v16, v19);
  return v4;
}
