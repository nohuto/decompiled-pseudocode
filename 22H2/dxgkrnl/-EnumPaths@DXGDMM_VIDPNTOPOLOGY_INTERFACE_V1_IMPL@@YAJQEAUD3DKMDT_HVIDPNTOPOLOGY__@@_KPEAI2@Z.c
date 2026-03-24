/*
 * XREFs of ?EnumPaths@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@_KPEAI2@Z @ 0x1C02E33B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0007548 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::EnumPaths(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        _DWORD *a3,
        unsigned int *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rdx
  unsigned int v15; // ebx
  __int64 v16; // rcx
  int v17; // r8d
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  int v24; // [rsp+20h] [rbp-28h] BYREF
  __int64 v25; // [rsp+28h] [rbp-20h]
  char v26; // [rsp+30h] [rbp-18h]

  v24 = -1;
  v25 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v26 = 1;
    v24 = 6061;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6061);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v24, 6061LL);
  if ( !a4 || !a3 )
  {
    v20 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v20 + 24) = a2;
    *(_QWORD *)(v20 + 32) = this;
    WdLogEvent5_WdError(v20);
    v15 = -1073741811;
    goto LABEL_21;
  }
  *a4 = -1;
  *a3 = -1;
  v10 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  if ( v10 )
  {
    v16 = v10 + 24;
    v17 = 0;
    v18 = *(_QWORD *)(v10 + 24);
    if ( v18 == v10 + 24 )
      v14 = 0LL;
    else
      v14 = (_QWORD *)(v18 - 8);
    if ( a2 )
    {
      while ( v14 )
      {
        v19 = v14[1];
        v14 = (_QWORD *)(v19 - 8);
        if ( v19 == v16 )
          v14 = 0LL;
        if ( (struct D3DKMDT_HVIDPNTOPOLOGY__ *const)(unsigned int)++v17 == a2 )
          goto LABEL_17;
      }
    }
    else
    {
LABEL_17:
      if ( v14 )
      {
        v15 = 0;
        *a4 = *(_DWORD *)(v14[12] + 24LL);
        *a3 = *(_DWORD *)(v14[11] + 24LL);
        goto LABEL_21;
      }
    }
    v15 = 1075708748;
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v13 + 24) = this;
    WdLogEvent5_WdError(v13);
    v15 = -1071774976;
  }
LABEL_21:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24, (__int64)v14);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v24);
  return v15;
}
