__int64 __fastcall DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquireFirstModeInfo(
        DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE **a3)
{
  __int64 v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct DMMVIDPNSOURCEMODE *(__fastcall *v12)(DMMVIDPNSOURCEMODESET *); // [rsp+20h] [rbp-30h] BYREF
  int v13; // [rsp+28h] [rbp-28h]
  int v14; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+38h] [rbp-18h]
  char v16; // [rsp+40h] [rbp-10h]
  __int64 v17; // [rsp+68h] [rbp+18h] BYREF

  v14 = -1;
  v15 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v16 = 1;
    v14 = 6003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6003);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v14, 6003);
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v5 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
    if ( v5 )
    {
      v13 = 0;
      v17 = 0LL;
      v12 = DMMVIDPNSOURCEMODESET::GetFirstMode;
      v6 = DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::mem_fun_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET>>(
             v5,
             (__int64)&v12,
             &v17);
      v7 = v6;
      if ( v6 == -1071774902 )
      {
        WdLogSingleEntry1(3LL, v5);
        if ( v17 )
          WdLogSingleEntry0(1LL);
        v7 = 1075708747;
      }
      else if ( v6 < 0 )
      {
        WdLogSingleEntry1(7LL, v5);
      }
      else
      {
        v8 = v17;
        if ( !v17 )
          WdLogSingleEntry0(1LL);
        *(_QWORD *)a2 = v8;
        v7 = 0;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      v7 = -1071774968;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    v7 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
  if ( v16 )
  {
    LOBYTE(v9) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v14);
  }
  return v7;
}
