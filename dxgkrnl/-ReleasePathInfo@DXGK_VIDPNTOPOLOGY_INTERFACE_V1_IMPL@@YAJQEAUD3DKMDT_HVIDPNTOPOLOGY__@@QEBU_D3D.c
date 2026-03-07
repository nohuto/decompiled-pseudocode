__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::ReleasePathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL **this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *const a3)
{
  unsigned int v3; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v11; // rdi
  char *v12; // rcx
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v13; // rax
  char *v14; // r8
  __int64 v15; // r8
  int v17; // eax
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v18; // rax
  int v19; // [rsp+20h] [rbp-28h] BYREF
  __int64 v20; // [rsp+28h] [rbp-20h]
  char v21; // [rsp+30h] [rbp-18h]

  v3 = 0;
  v19 = -1;
  v20 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v21 = 1;
    v19 = 7039;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7039);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v19, 7039);
  v10 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  *(_QWORD *)(v10 + 24) = a2;
  *(_QWORD *)(v10 + 32) = this;
  if ( !a2 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    v17 = -1071774951;
LABEL_23:
    v3 = v17;
    goto LABEL_12;
  }
  if ( !this || *((_DWORD *)this + 46) != 1833173002 )
  {
    WdLogSingleEntry1(2LL, this);
    v17 = -1071774976;
    goto LABEL_23;
  }
  v11 = a2 - 4;
  if ( *(_DWORD *)v11 != 305419896 )
  {
    WdLogSingleEntry1(2LL, v11);
    v3 = -1071774951;
    goto LABEL_12;
  }
  v12 = (char *)*((_QWORD *)v11 + 1);
  if ( v12 )
  {
    v13 = this[3];
    if ( v13 == (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)(this + 3)
      || (v14 = (char *)v13 - 8, v13 == (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)8) )
    {
LABEL_20:
      WdLogSingleEntry2(2LL, v11, this);
      v3 = -1071774928;
      goto LABEL_12;
    }
    while ( v14 != v12 )
    {
      v18 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)*((_QWORD *)v14 + 1);
      v14 = (char *)v18 - 8;
      if ( v18 == (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)(this + 3) )
        v14 = 0LL;
      if ( !v14 )
        goto LABEL_20;
    }
  }
  operator delete(*((void **)v11 + 46));
  operator delete(v11);
LABEL_12:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v15, v19);
  return v3;
}
