/*
 * XREFs of ?UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@_N@Z @ 0x1C016A690
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C00098BC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0018EB8 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C0019488 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C011C7C4 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::UnpinMode(
        DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        __int64 a3)
{
  char v3; // r14
  DMMVIDPNTARGETMODESET *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  DMMVIDPNTARGETMODESET *v8; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 Container; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v16; // edx
  __int64 v17; // rsi
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  int v30; // [rsp+30h] [rbp-20h] BYREF
  __int64 v31; // [rsp+38h] [rbp-18h]
  char v32; // [rsp+40h] [rbp-10h]
  DXGK_ENUM_PIVOT v33; // [rsp+80h] [rbp+30h] BYREF

  v30 = -1;
  v3 = (char)a2;
  v31 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v32 = 1;
    v30 = 6008;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6008);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v30, 6008LL);
  v5 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
  v8 = v5;
  if ( v5 )
  {
    v9 = DMMVIDPNTARGETMODESET::UnpinMode(v5, v6);
    v12 = v9;
    if ( v9 < 0 )
    {
      v26 = WdLogNewEntry5_WdTrace(v11, v10);
      *(_QWORD *)(v26 + 24) = this;
      *(_QWORD *)(v26 + 32) = v12;
    }
    else
    {
      v13 = *((_QWORD *)v8 + 14);
      if ( !v13 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v11, v10);
        WdLogEvent5_WdAssertion(v27);
      }
      v14 = *(_QWORD *)(v13 + 40);
      if ( !v14 )
      {
        v28 = WdLogNewEntry5_WdAssertion(0LL, v10);
        WdLogEvent5_WdAssertion(v28);
        v14 = *(_QWORD *)(v13 + 40);
      }
      Container = ContainedBy<DMMVIDPN>::GetContainer(v14 + 64, v10);
      v16 = *(_DWORD *)(v13 + 24);
      v17 = Container;
      v18 = *(_QWORD *)(Container + 48);
      v33.VidPnTargetId = -1;
      v33.VidPnSourceId = v16;
      v19 = VIDPN_MGR::FormalizeVidPnChange(
              v18,
              (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88)),
              4LL,
              v3,
              &v33);
      v12 = v19;
      if ( v19 < 0 )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
        v29[3] = *(unsigned int *)(v13 + 24);
        v29[4] = v17;
        v29[5] = v12;
        WdLogEvent5_WdError(v29);
      }
      else
      {
        LODWORD(v12) = 0;
      }
    }
  }
  else
  {
    v25 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v25 + 24) = this;
    WdLogEvent5_WdError(v25);
    LODWORD(v12) = -1071774968;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30, v20);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v30);
  return (unsigned int)v12;
}
