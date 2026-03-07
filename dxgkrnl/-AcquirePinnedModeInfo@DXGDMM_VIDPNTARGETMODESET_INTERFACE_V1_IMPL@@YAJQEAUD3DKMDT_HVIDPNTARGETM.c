__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquirePinnedModeInfo(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a3,
        struct _D3DDDI_RATIONAL *a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rsi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // ebx
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v25; // rax
  bool v26; // zf
  struct DMMVIDPNTARGETMODE *(__fastcall *v27)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-30h] BYREF
  int v28; // [rsp+28h] [rbp-28h]
  int v29; // [rsp+30h] [rbp-20h] BYREF
  __int64 v30; // [rsp+38h] [rbp-18h]
  char v31; // [rsp+40h] [rbp-10h]
  __int64 v32; // [rsp+88h] [rbp+38h] BYREF

  v29 = -1;
  v30 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v31 = 1;
    v29 = 6005;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6005);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 6005);
  if ( !a2 )
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    v20 = -1073741811;
    goto LABEL_11;
  }
  *(_QWORD *)a2 = 0LL;
  v8 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  v13 = v8;
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, this);
    v20 = -1071774967;
    goto LABEL_11;
  }
  v14 = *(_QWORD *)(v8 + 144);
  if ( !v14 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9, v11, v12) + 24) = v8;
LABEL_20:
    v20 = 1075708679;
    goto LABEL_11;
  }
  v28 = 0;
  v32 = 0LL;
  v27 = DMMVIDPNTARGETMODESET::GetPinnedMode;
  v15 = DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::mem_fun_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET>>(
          v8,
          (__int64)&v27,
          &v32);
  v20 = v15;
  if ( v15 == -1071774902 )
  {
    v25 = WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
    v26 = v32 == 0;
    *(_QWORD *)(v25 + 24) = v13;
    if ( !v26 )
      WdLogSingleEntry0(1LL);
    goto LABEL_20;
  }
  if ( v15 < 0 )
  {
    WdLogSingleEntry1(7LL, v13);
  }
  else
  {
    v21 = v32;
    if ( !v32 )
      WdLogSingleEntry0(1LL);
    *(_QWORD *)a2 = v21;
    v20 = 0;
    *a3 = *(const struct _D3DKMDT_VIDPN_TARGET_MODE **)(v14 + 152);
    a4->Numerator = *(_DWORD *)(v14 + 160);
  }
LABEL_11:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
  if ( v31 )
  {
    LOBYTE(v22) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v29);
  }
  return v20;
}
