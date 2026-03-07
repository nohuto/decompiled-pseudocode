__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::UnpinMode(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        __int64 a3)
{
  char v3; // r14
  DMMVIDPNTARGETMODESET *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  DMMVIDPNTARGETMODESET *v9; // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 Container; // rsi
  __int64 v18; // r9
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // rax
  int v25; // [rsp+30h] [rbp-20h] BYREF
  __int64 v26; // [rsp+38h] [rbp-18h]
  char v27; // [rsp+40h] [rbp-10h]
  DXGK_ENUM_PIVOT v28; // [rsp+80h] [rbp+30h] BYREF

  v25 = -1;
  v3 = (char)a2;
  v26 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v27 = 1;
    v25 = 6016;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6016);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 6016);
  v5 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  v9 = v5;
  if ( v5 )
  {
    v10 = DMMVIDPNTARGETMODESET::UnpinMode(v5, v6, v7, v8);
    v15 = v10;
    if ( v10 < 0 )
    {
      v24 = WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
      *(_QWORD *)(v24 + 24) = this;
      *(_QWORD *)(v24 + 32) = v15;
    }
    else
    {
      v16 = *((_QWORD *)v9 + 14);
      if ( !v16 )
        WdLogSingleEntry0(1LL);
      if ( !*(_QWORD *)(v16 + 40) )
        WdLogSingleEntry0(1LL);
      Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v16 + 40) + 64LL);
      LOBYTE(v18) = v3;
      v19 = *(_QWORD *)(Container + 48);
      v28.VidPnSourceId = -1;
      v28.VidPnTargetId = *(_DWORD *)(v16 + 24);
      v20 = VIDPN_MGR::FormalizeVidPnChange(
              v19,
              (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88)),
              6,
              v18,
              &v28);
      LODWORD(v15) = v20;
      if ( v20 < 0 )
        WdLogSingleEntry3(2LL, *(unsigned int *)(v16 + 24), Container, v20);
      else
        LODWORD(v15) = 0;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, this);
    LODWORD(v15) = -1071774967;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 )
  {
    LOBYTE(v21) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v25);
  }
  return (unsigned int)v15;
}
