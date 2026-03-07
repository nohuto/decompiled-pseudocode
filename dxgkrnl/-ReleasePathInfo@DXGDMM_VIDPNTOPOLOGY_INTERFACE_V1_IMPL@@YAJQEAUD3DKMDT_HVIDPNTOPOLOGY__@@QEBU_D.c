__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::ReleasePathInfo(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL **this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *const a3)
{
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v5; // rdi
  char *v6; // r8
  DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v7; // rcx
  char *v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // r8
  DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v13; // rax
  int v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+28h] [rbp-20h]
  char v16; // [rsp+30h] [rbp-18h]

  v14 = -1;
  v15 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v16 = 1;
    v14 = 6022;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6022);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v14, 6022);
  if ( !a2 )
  {
    WdLogSingleEntry1(2LL, 0LL);
LABEL_18:
    v9 = -1071774951;
    goto LABEL_12;
  }
  if ( !this || *((_DWORD *)this + 46) != 1833173002 )
  {
    WdLogSingleEntry1(2LL, this);
    v9 = -1071774976;
    goto LABEL_12;
  }
  v5 = a2 - 4;
  if ( *(_DWORD *)v5 != 305419896 )
  {
    WdLogSingleEntry1(2LL, v5);
    goto LABEL_18;
  }
  v6 = (char *)*((_QWORD *)v5 + 1);
  if ( v6 )
  {
    v7 = this[3];
    if ( v7 == (DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)(this + 3) || (v8 = (char *)v7 - 8) == 0LL )
    {
LABEL_22:
      WdLogSingleEntry2(2LL, v5, this);
      v9 = -1071774928;
      goto LABEL_12;
    }
    while ( v8 != v6 )
    {
      v13 = (DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)*((_QWORD *)v8 + 1);
      v8 = (char *)v13 - 8;
      if ( v13 == (DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)(this + 3) )
        v8 = 0LL;
      if ( !v8 )
        goto LABEL_22;
    }
  }
  operator delete(*((void **)v5 + 46));
  operator delete(v5);
  v9 = 0;
LABEL_12:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
  if ( v16 )
  {
    LOBYTE(v10) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v14);
  }
  return v9;
}
