__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::ReleaseSourceModeSet(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  struct DMMVIDPNSOURCEMODESET *v8; // rsi
  DMMVIDPNSOURCE *v9; // rbx
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 Container; // rax
  int v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+28h] [rbp-20h]
  char v17; // [rsp+30h] [rbp-18h]
  __int64 v18; // [rsp+60h] [rbp+18h] BYREF

  v15 = -1;
  v16 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v17 = 1;
    v15 = 6035;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6035);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v15, 6035);
  v5 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  v6 = v5;
  if ( v5 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v5 + 48) + 128LL) == v5 )
    {
      WdLogSingleEntry1(2LL, v5);
      v10 = -1071774909;
    }
    else
    {
      v7 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)a2);
      v8 = (struct DMMVIDPNSOURCEMODESET *)v7;
      if ( v7 )
      {
        v9 = *(DMMVIDPNSOURCE **)(v7 + 112);
        if ( !v9 )
          WdLogSingleEntry0(1LL);
        if ( !*((_QWORD *)v9 + 5) )
          WdLogSingleEntry0(1LL);
        if ( ContainedBy<DMMVIDPN>::GetContainer(*((_QWORD *)v9 + 5) + 64LL) == v6 )
        {
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v18, *(_QWORD *)(v6 + 48));
          DMMVIDPNSOURCE::ReleaseModeSet(v9, v8);
          DXGFASTMUTEX::Release((struct _KTHREAD **)(v18 + 40));
          v10 = 0;
        }
        else
        {
          if ( !*((_QWORD *)v9 + 5) )
            WdLogSingleEntry0(1LL);
          Container = ContainedBy<DMMVIDPN>::GetContainer(*((_QWORD *)v9 + 5) + 64LL);
          WdLogSingleEntry3(2LL, Container, v8, v6);
          v10 = -1071774928;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, a2);
        v10 = -1071774968;
      }
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, this);
    v10 = -1071774973;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 )
  {
    LOBYTE(v11) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v15);
  }
  return v10;
}
