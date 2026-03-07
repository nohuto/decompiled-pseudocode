__int64 __fastcall DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::AcquireFirstSourceInfo(
        DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDEOPRESENTSOURCESET__ *const a2,
        const struct _D3DKMDT_VIDEO_PRESENT_SOURCE **a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct DMMVIDEOPRESENTTARGET *(__fastcall *v12)(DMMVIDEOPRESENTTARGETSET *); // [rsp+20h] [rbp-30h] BYREF
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
    v14 = 6041;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6041);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v14, 6041);
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v6 = ExposedViaHandle<DMMVIDEOPRESENTSOURCESET,D3DKMDT_HVIDEOPRESENTSOURCESET__ *>::GetFromHandle((__int64)this);
    if ( v6 )
    {
      v13 = 0;
      v17 = 0LL;
      v12 = DMMVIDEOPRESENTTARGETSET::GetFirstTarget;
      v7 = DMMVIDEOPRESENTSOURCESET::AcquireDdiEnumeratorCachedSourceInfo<KM_STL::mem_fun_t<DMMVIDEOPRESENTSOURCE *,DMMVIDEOPRESENTSOURCESET>>(
             v6,
             &v12,
             &v17);
      v5 = v7;
      if ( v7 == -1071774972 )
      {
        WdLogSingleEntry1(3LL, v6);
        if ( v17 )
          WdLogSingleEntry0(1LL);
        v5 = 1075708747;
      }
      else if ( v7 >= 0 )
      {
        v8 = v17;
        if ( !v17 )
          WdLogSingleEntry0(1LL);
        *(_QWORD *)a2 = v8;
        v5 = 0;
      }
      else
      {
        WdLogSingleEntry1(2LL, v6);
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      v5 = -1071774955;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    v5 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
  if ( v16 )
  {
    LOBYTE(v9) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v14);
  }
  return v5;
}
