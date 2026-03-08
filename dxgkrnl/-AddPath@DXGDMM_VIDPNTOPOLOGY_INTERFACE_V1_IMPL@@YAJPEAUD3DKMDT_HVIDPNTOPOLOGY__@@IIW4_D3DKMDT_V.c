/*
 * XREFs of ?AddPath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C03B0130
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C00023C4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0014550 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C01829E4 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AddPath(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE a5)
{
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rax
  struct DMMVIDPNTOPOLOGY *v10; // rdi
  __int64 Container; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  int v21; // [rsp+40h] [rbp-28h] BYREF
  __int64 v22; // [rsp+48h] [rbp-20h]
  char v23; // [rsp+50h] [rbp-18h]

  v21 = -1;
  v22 = 0LL;
  v6 = (__int64)this;
  v7 = (unsigned int)a3;
  v8 = (unsigned int)a2;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v23 = 1;
    v21 = 6023;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6023);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v21, 6023);
  v9 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v6);
  v10 = (struct DMMVIDPNTOPOLOGY *)v9;
  if ( v9 )
  {
    Container = ContainedBy<DMMVIDPN>::GetContainer(v9 + 160);
    v12 = VIDPN_MGR::AddPathToVidPnTopology(
            *(VIDPN_MGR **)(Container + 48),
            v10,
            v8,
            v7,
            a4,
            a5,
            1u,
            D3DKMDT_MCC_ENFORCE);
    v6 = v12;
    if ( v12 >= 0 )
    {
      LODWORD(v6) = 0;
    }
    else
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
      v17[3] = v8;
      v17[4] = v7;
      v17[5] = v10;
      v17[6] = v6;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, v6);
    LODWORD(v6) = -1071774976;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( v23 )
  {
    LOBYTE(v18) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v21);
  }
  return (unsigned int)v6;
}
