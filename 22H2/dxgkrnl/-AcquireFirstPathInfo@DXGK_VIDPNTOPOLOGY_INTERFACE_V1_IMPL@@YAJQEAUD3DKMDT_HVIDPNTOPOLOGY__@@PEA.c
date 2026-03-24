/*
 * XREFs of ?AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01589F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C0158B10 (--$AcquireDdiEnumeratorCachedPathInfo@V-$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOL.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquireFirstPathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH **a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  struct DMMVIDPNPRESENTPATH *(__fastcall *v27)(DMMVIDPNTOPOLOGY *); // [rsp+20h] [rbp-38h] BYREF
  int v28; // [rsp+28h] [rbp-30h]
  int v29; // [rsp+30h] [rbp-28h] BYREF
  __int64 v30; // [rsp+38h] [rbp-20h]
  char v31; // [rsp+40h] [rbp-18h]
  __int64 v32; // [rsp+60h] [rbp+8h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 18);
  v7 = 0;
  v29 = -1;
  v30 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v31 = 1;
    v29 = 7036;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerEnter, v6, 7036);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 7036LL);
  v10 = WdLogNewEntry5_WdTrace(v9, v8);
  *(_QWORD *)(v10 + 24) = this;
  *(_QWORD *)(v10 + 32) = a2;
  if ( !a2 )
  {
    v21 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v21 + 24) = 0LL;
    *(_QWORD *)(v21 + 32) = this;
    WdLogEvent5_WdError(v21);
    LODWORD(v16) = -1073741811;
LABEL_21:
    v7 = v16;
    goto LABEL_11;
  }
  *(_QWORD *)a2 = 0LL;
  if ( !this || *((_DWORD *)this + 46) != 1833173002 )
  {
    v26 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v26 + 24) = this;
    WdLogEvent5_WdError(v26);
    LODWORD(v16) = -1071774976;
    goto LABEL_21;
  }
  v28 = 0;
  v27 = DMMVIDPNTOPOLOGY::GetFirstPath;
  v32 = 0LL;
  v13 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::const_mem_fun_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY>>(
          this,
          &v27,
          &v32);
  v16 = v13;
  if ( v13 == -1071774937 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v15, v14) + 24) = this;
    if ( v32 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v22, v14);
      WdLogEvent5_WdAssertion(v23);
    }
    LODWORD(v16) = 1075708747;
    goto LABEL_21;
  }
  if ( v13 < 0 )
  {
    v24 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v24 + 24) = this;
    *(_QWORD *)(v24 + 32) = v16;
    WdLogEvent5_WdError(v24);
    goto LABEL_21;
  }
  v17 = v32;
  if ( !v32 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v15, v14);
    WdLogEvent5_WdAssertion(v25);
  }
  *(_QWORD *)a2 = v17;
LABEL_11:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29, v14);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v29);
  return v7;
}
