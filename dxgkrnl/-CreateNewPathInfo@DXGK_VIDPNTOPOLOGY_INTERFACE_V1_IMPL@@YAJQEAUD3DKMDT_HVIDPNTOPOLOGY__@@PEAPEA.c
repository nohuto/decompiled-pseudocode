__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::CreateNewPathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH **a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  DMMVIDPNTOPOLOGY *v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  int v15; // [rsp+20h] [rbp-20h] BYREF
  __int64 v16; // [rsp+28h] [rbp-18h]
  char v17; // [rsp+30h] [rbp-10h]
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v18; // [rsp+50h] [rbp+10h] BYREF

  v15 = -1;
  v16 = 0LL;
  v4 = (__int64)this;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v17 = 1;
    v15 = 7040;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7040);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v15, 7040);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 24) = v4;
  *(_QWORD *)(v9 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    if ( ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v4) )
    {
      v18 = 0LL;
      v11 = DMMVIDPNTOPOLOGY::AcquireRawDdiEnumeratorCachedPathInfo(v10, &v18);
      v4 = v11;
      if ( v11 >= 0 )
      {
        LODWORD(v4) = 0;
        *(_QWORD *)a2 = v18;
      }
      else
      {
        if ( v11 != -1073741801 )
          WdLogSingleEntry0(1LL);
        WdLogSingleEntry1(2LL, v4);
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, v4);
      LODWORD(v4) = -1071774976;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, v4);
    LODWORD(v4) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 )
  {
    LOBYTE(v12) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v15);
  }
  return (unsigned int)v4;
}
