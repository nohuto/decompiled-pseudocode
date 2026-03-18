/*
 * XREFs of ?UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@_N@Z @ 0x1C0225470
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0001B98 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0014680 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ @ 0x1C002304C (-UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C01AF928 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::UnpinMode(
        DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        __int64 a3)
{
  char v3; // r14
  DMMVIDPNSOURCEMODESET *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  DMMVIDPNSOURCEMODESET *v9; // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 Container; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v18; // edx
  __int64 v19; // rsi
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v25; // rax
  int v26; // [rsp+30h] [rbp-20h] BYREF
  __int64 v27; // [rsp+38h] [rbp-18h]
  char v28; // [rsp+40h] [rbp-10h]
  DXGK_ENUM_PIVOT v29; // [rsp+80h] [rbp+30h] BYREF

  v26 = -1;
  v3 = (char)a2;
  v27 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v28 = 1;
    v26 = 6008;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6008);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 6008);
  v5 = (DMMVIDPNSOURCEMODESET *)ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
  v9 = v5;
  if ( v5 )
  {
    v10 = DMMVIDPNSOURCEMODESET::UnpinMode(v5, v6, v7, v8);
    v15 = v10;
    if ( v10 < 0 )
    {
      v25 = WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
      *(_QWORD *)(v25 + 24) = this;
      *(_QWORD *)(v25 + 32) = v15;
    }
    else
    {
      v16 = *((_QWORD *)v9 + 14);
      if ( !v16 )
        WdLogSingleEntry0(1LL);
      if ( !*(_QWORD *)(v16 + 40) )
        WdLogSingleEntry0(1LL);
      Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v16 + 40) + 64LL);
      v18 = *(_DWORD *)(v16 + 24);
      v19 = Container;
      v20 = *(_QWORD *)(Container + 48);
      v29.VidPnTargetId = -1;
      v29.VidPnSourceId = v18;
      v21 = VIDPN_MGR::FormalizeVidPnChange(
              v20,
              (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88)),
              4LL,
              v3,
              &v29);
      LODWORD(v15) = v21;
      if ( v21 < 0 )
        WdLogSingleEntry3(2LL, *(unsigned int *)(v16 + 24), v19, v21);
      else
        LODWORD(v15) = 0;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, this);
    LODWORD(v15) = -1071774968;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 )
  {
    LOBYTE(v22) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v26);
  }
  return (unsigned int)v15;
}
