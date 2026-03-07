__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::ReleaseModeInfo(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL **this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *const a3)
{
  unsigned int v3; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  struct D3DKMDT_HVIDPNTARGETMODESET__ *v11; // rdx
  char *v12; // rcx
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v13; // rax
  char *v14; // rax
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v15; // rax
  __int64 v16; // r8
  int v18; // eax
  int v19; // [rsp+20h] [rbp-28h] BYREF
  __int64 v20; // [rsp+28h] [rbp-20h]
  char v21; // [rsp+30h] [rbp-18h]

  v3 = 0;
  v19 = -1;
  v20 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v21 = 1;
    v19 = 7012;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7012);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v19, 7012);
  v10 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  *(_QWORD *)(v10 + 24) = a2;
  *(_QWORD *)(v10 + 32) = this;
  if ( !a2 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    v18 = -1071774959;
LABEL_23:
    v3 = v18;
    goto LABEL_15;
  }
  if ( !this || *((_DWORD *)this + 32) != 1833173005 )
  {
    WdLogSingleEntry1(2LL, this);
    v18 = -1071774967;
    goto LABEL_23;
  }
  v11 = a2 - 4;
  if ( *((_DWORD *)a2 - 4) != 305419896 )
  {
    WdLogSingleEntry1(2LL, v11);
    v3 = -1071774959;
    goto LABEL_15;
  }
  v12 = (char *)*((_QWORD *)v11 + 1);
  if ( v12 )
  {
    v13 = this[6];
    if ( v13 == (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)(this + 6) || (v14 = (char *)v13 - 8) == 0LL )
    {
LABEL_20:
      WdLogSingleEntry2(2LL, v11, this);
      v3 = -1071774928;
      goto LABEL_15;
    }
    while ( v14 != v12 )
    {
      v15 = (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)v14 + 1);
      if ( v15 != (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)(this + 6) )
      {
        v14 = (char *)v15 - 8;
        if ( v14 )
          continue;
      }
      goto LABEL_20;
    }
  }
  operator delete(a2 - 4);
LABEL_15:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v16, v19);
  return v3;
}
