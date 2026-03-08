/*
 * XREFs of ?GetTopology@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@PEAPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C016B900
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0007F3C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::GetTopology(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct D3DKMDT_HVIDPNTOPOLOGY__ **a3,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **a4)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v9; // rdx
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+28h] [rbp-20h]
  char v16; // [rsp+30h] [rbp-18h]

  v14 = -1;
  v15 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v16 = 1;
    v14 = 6033;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6033);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v14, 6033);
  if ( a2 && a3 )
  {
    *(_QWORD *)a2 = 0LL;
    *a3 = 0LL;
    v7 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 48);
      if ( *(_QWORD *)(v8 + 128) == v7 )
      {
        WdLogSingleEntry1(2LL, v7);
        v10 = -1071774909;
      }
      else
      {
        v9 = *(struct D3DKMDT_HVIDPNTOPOLOGY__ **)(v8 + 488);
        *(_QWORD *)a2 = (v7 + 96) & -(__int64)(v7 != -289);
        v10 = 0;
        *a3 = v9;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      v10 = -1071774973;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    v10 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
  if ( v16 )
  {
    LOBYTE(v11) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v14);
  }
  return v10;
}
