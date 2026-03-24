/*
 * XREFs of ?AcquireNextPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEBU3@@Z @ 0x1C0117980
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C0117B40 (--$AcquireDdiEnumeratorCachedPathInfo@V-$binder2nd@V-$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquireNextPathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *const a3,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH **a4)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v15; // rsi
  _QWORD *v16; // rdx
  _QWORD *v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbp
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int128 v36; // [rsp+20h] [rbp-68h]
  __int64 v37; // [rsp+30h] [rbp-58h]
  int v38; // [rsp+38h] [rbp-50h] BYREF
  __int64 v39; // [rsp+40h] [rbp-48h]
  char v40; // [rsp+48h] [rbp-40h]
  __int128 v41; // [rsp+50h] [rbp-38h] BYREF
  __int64 v42; // [rsp+60h] [rbp-28h]
  __int64 v43; // [rsp+90h] [rbp+8h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 19);
  v9 = 0;
  v38 = -1;
  v39 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v40 = 1;
    v38 = 7037;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerEnter, v8, 7037);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v38, 7037LL);
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10);
  v12[3] = a2;
  v12[4] = this;
  v12[5] = a3;
  if ( !a3 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
    v26[3] = 0LL;
    v26[4] = a2;
    v26[5] = this;
    WdLogEvent5_WdError(v26);
    LODWORD(v21) = -1073741811;
LABEL_18:
    v9 = v21;
    goto LABEL_19;
  }
  *(_QWORD *)&a3->VidPnSourceId = 0LL;
  if ( !this || *((_DWORD *)this + 46) != 1833173002 )
  {
    v35 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v35 + 24) = this;
    WdLogEvent5_WdError(v35);
    LODWORD(v21) = -1071774976;
    goto LABEL_18;
  }
  if ( !a2 )
  {
    v15 = 0LL;
LABEL_36:
    v34 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v34 + 24) = v15;
    WdLogEvent5_WdError(v34);
    LODWORD(v21) = -1071774951;
    goto LABEL_18;
  }
  v15 = a2 - 4;
  if ( !v15 || *(_DWORD *)v15 != 305419896 )
    goto LABEL_36;
  v16 = (_QWORD *)*((_QWORD *)v15 + 1);
  if ( !v16 )
  {
    v27 = WdLogNewEntry5_WdAssertion(v14, 0LL);
    WdLogEvent5_WdAssertion(v27);
LABEL_25:
    v28 = WdLogNewEntry5_WdError(v17, v16);
    *(_QWORD *)(v28 + 24) = v15;
    *(_QWORD *)(v28 + 32) = this;
    WdLogEvent5_WdError(v28);
    LODWORD(v21) = -1071774928;
    goto LABEL_18;
  }
  v17 = (_QWORD *)*((_QWORD *)this + 3);
  if ( v17 == (_QWORD *)((char *)this + 24) )
    goto LABEL_25;
  if ( !--v17 )
    goto LABEL_25;
  do
  {
    if ( v17 == v16 )
      break;
    v29 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)v17[1];
    v17 = (_QWORD *)((char *)v29 - 8);
    if ( v29 == (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)((char *)this + 24) )
      v17 = 0LL;
  }
  while ( v17 );
  if ( !v17 )
    goto LABEL_25;
  v37 = *((_QWORD *)v15 + 1);
  *(_QWORD *)&v36 = DMMVIDPNTOPOLOGY::GetNextPath;
  DWORD2(v36) = 0;
  v43 = 0LL;
  v41 = v36;
  v42 = v37;
  v18 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
          this,
          &v41,
          &v43,
          1LL,
          DMMVIDPNTOPOLOGY::GetNextPath,
          0,
          v37,
          v38,
          v39);
  v21 = v18;
  if ( v18 == -1071774937 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v20, v19) + 24) = this;
    if ( v43 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v22, v19);
      WdLogEvent5_WdAssertion(v30);
    }
    LODWORD(v21) = 1075708748;
    goto LABEL_18;
  }
  if ( v18 < 0 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19);
    v31[3] = v15;
    v31[4] = this;
    v31[5] = v21;
    WdLogEvent5_WdError(v31);
    goto LABEL_18;
  }
  v32 = v43;
  if ( !v43 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v20, v19);
    WdLogEvent5_WdAssertion(v33);
  }
  *(_QWORD *)&a3->VidPnSourceId = v32;
LABEL_19:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38, v19);
  if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v38);
  return v9;
}
