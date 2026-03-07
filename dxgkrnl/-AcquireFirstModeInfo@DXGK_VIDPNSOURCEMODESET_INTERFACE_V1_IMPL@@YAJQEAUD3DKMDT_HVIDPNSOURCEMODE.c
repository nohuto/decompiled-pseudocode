__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquireFirstModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE **a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DMMVIDPNSOURCEMODE *(__fastcall *v19)(DMMVIDPNSOURCEMODESET *); // [rsp+20h] [rbp-30h] BYREF
  int v20; // [rsp+28h] [rbp-28h]
  int v21; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+38h] [rbp-18h]
  char v23; // [rsp+40h] [rbp-10h]
  __int64 v24; // [rsp+60h] [rbp+10h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 26);
  v21 = -1;
  v22 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v23 = 1;
    v21 = 7001;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerEnter, v6, 7001);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v21, 7001);
  v11 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  *(_QWORD *)(v11 + 24) = this;
  *(_QWORD *)(v11 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v13 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
    if ( v13 )
    {
      v20 = 0;
      v24 = 0LL;
      v19 = DMMVIDPNSOURCEMODESET::GetFirstMode;
      v14 = DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::mem_fun_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET>>(
              v13,
              (__int64)&v19,
              &v24);
      v12 = v14;
      if ( v14 == -1071774902 )
      {
        WdLogSingleEntry1(3LL, v13);
        if ( v24 )
          WdLogSingleEntry0(1LL);
        v12 = 1075708747;
      }
      else if ( v14 >= 0 )
      {
        v15 = v24;
        if ( !v24 )
          WdLogSingleEntry0(1LL);
        *(_QWORD *)a2 = v15;
        v12 = 0;
      }
      else
      {
        WdLogSingleEntry2(2LL, v13, v14);
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      v12 = -1071774968;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    v12 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( v23 )
  {
    LOBYTE(v16) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v21);
  }
  return v12;
}
