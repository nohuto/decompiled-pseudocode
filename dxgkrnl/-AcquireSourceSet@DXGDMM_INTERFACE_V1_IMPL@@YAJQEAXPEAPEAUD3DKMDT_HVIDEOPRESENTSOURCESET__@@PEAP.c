__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::AcquireSourceSet(
        DXGDMM_INTERFACE_V1_IMPL *this,
        __int64 *a2,
        struct D3DKMDT_HVIDEOPRESENTSOURCESET__ **a3,
        const struct _DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE **a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rdx
  struct D3DKMDT_HVIDEOPRESENTSOURCESET__ *v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  int v14; // [rsp+50h] [rbp-28h] BYREF
  __int64 v15; // [rsp+58h] [rbp-20h]
  char v16; // [rsp+60h] [rbp-18h]

  v14 = -1;
  v15 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v16 = 1;
    v14 = 6048;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6048);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v14, 6048);
  if ( a2 && a3 )
  {
    *a2 = 0LL;
    *a3 = 0LL;
    if ( this )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
        WdLogSingleEntry0(1LL);
      v8 = *((_QWORD *)this + 365);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 104);
        v10 = *(struct D3DKMDT_HVIDEOPRESENTSOURCESET__ **)(v9 + 464);
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 112) + 72LL));
        *a2 = *(_QWORD *)(v9 + 112) & -(__int64)(*(_QWORD *)(v9 + 112) != -112LL);
        v7 = 0;
        *a3 = v10;
        goto LABEL_16;
      }
      WdLogSingleEntry1(2LL, this);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
        (__int64)this,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(2LL, 0LL);
    }
    v7 = -1071775742;
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    v7 = -1073741811;
  }
LABEL_16:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
  if ( v16 )
  {
    LOBYTE(v11) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v14);
  }
  return v7;
}
