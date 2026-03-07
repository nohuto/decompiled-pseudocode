__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::PinMode(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rsi
  DMMVIDPNSOURCEMODESET *v11; // rax
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+28h] [rbp-20h]
  char v18; // [rsp+30h] [rbp-18h]

  v16 = -1;
  v17 = 0LL;
  v4 = (unsigned int)a2;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v18 = 1;
    v16 = 7007;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 7007);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v16, 7007);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  v10 = v4;
  *(_QWORD *)(v9 + 24) = v4;
  *(_QWORD *)(v9 + 32) = this;
  v11 = (DMMVIDPNSOURCEMODESET *)ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
  if ( v11 )
  {
    v12 = DMMVIDPNSOURCEMODESET::PinMode(v11, v4);
    if ( v12 >= 0 )
      v12 = 0;
    else
      WdLogSingleEntry2(2LL, v10, this);
  }
  else
  {
    WdLogSingleEntry1(2LL, this);
    v12 = -1071774968;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 )
  {
    LOBYTE(v13) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v16);
  }
  return (unsigned int)v12;
}
