/*
 * XREFs of ?EnumPaths@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@_KPEAI2@Z @ 0x1C01E5490
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C00023C4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::EnumPaths(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        _DWORD *a3,
        unsigned int *a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // r8d
  __int64 v11; // rdx
  _QWORD *v12; // rdx
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rax
  int v18; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+28h] [rbp-20h]
  char v20; // [rsp+30h] [rbp-18h]

  v18 = -1;
  v19 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v20 = 1;
    v18 = 6061;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6061);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v18, 6061);
  if ( !a4 || !a3 )
  {
    WdLogSingleEntry2(2LL, a2, this);
    v13 = -1073741811;
    goto LABEL_11;
  }
  *a4 = -1;
  *a3 = -1;
  v8 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, this);
    v13 = -1071774976;
    goto LABEL_11;
  }
  v9 = v8 + 24;
  v10 = 0;
  v11 = *(_QWORD *)(v8 + 24);
  if ( v11 == v8 + 24 )
    v12 = 0LL;
  else
    v12 = (_QWORD *)(v11 - 8);
  if ( a2 )
  {
    while ( v12 )
    {
      v17 = v12[1];
      v12 = (_QWORD *)(v17 - 8);
      if ( v17 == v9 )
        v12 = 0LL;
      if ( (struct D3DKMDT_HVIDPNTOPOLOGY__ *const)(unsigned int)++v10 == a2 )
        goto LABEL_9;
    }
    goto LABEL_14;
  }
LABEL_9:
  if ( !v12 )
  {
LABEL_14:
    v13 = 1075708748;
    goto LABEL_11;
  }
  v13 = 0;
  *a4 = *(_DWORD *)(v12[12] + 24LL);
  *a3 = *(_DWORD *)(v12[11] + 24LL);
LABEL_11:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
  if ( v20 )
  {
    LOBYTE(v14) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v18);
  }
  return v13;
}
