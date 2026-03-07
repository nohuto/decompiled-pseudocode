__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::ReleaseTargetModeSet(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a3)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  struct DMMVIDPNTARGETMODESET *v8; // rsi
  DMMVIDPNTARGET *v9; // rdi
  __int64 v10; // rbx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 Container; // rax
  int v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+28h] [rbp-20h]
  char v18; // [rsp+30h] [rbp-18h]

  v16 = -1;
  v17 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v18 = 1;
    v16 = 6037;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6037);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v16, 6037);
  v5 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  v6 = v5;
  if ( v5 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v5 + 48) + 128LL) == v5 )
    {
      WdLogSingleEntry1(2LL, v5);
      v11 = -1071774909;
    }
    else
    {
      v7 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)a2);
      v8 = (struct DMMVIDPNTARGETMODESET *)v7;
      if ( v7 )
      {
        v9 = *(DMMVIDPNTARGET **)(v7 + 112);
        if ( !v9 )
          WdLogSingleEntry0(1LL);
        if ( !*((_QWORD *)v9 + 5) )
          WdLogSingleEntry0(1LL);
        if ( ContainedBy<DMMVIDPN>::GetContainer(*((_QWORD *)v9 + 5) + 64LL) == v6 )
        {
          v10 = *(_QWORD *)(v6 + 48);
          if ( !v10 )
            WdLogSingleEntry0(1LL);
          DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v10 + 40));
          DMMVIDPNTARGET::ReleaseModeSet(v9, v8);
          DXGFASTMUTEX::Release((struct _KTHREAD **)(v10 + 40));
          v11 = 0;
        }
        else
        {
          if ( !*((_QWORD *)v9 + 5) )
            WdLogSingleEntry0(1LL);
          Container = ContainedBy<DMMVIDPN>::GetContainer(*((_QWORD *)v9 + 5) + 64LL);
          WdLogSingleEntry3(2LL, Container, v8, v6);
          v11 = -1071774928;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, a2);
        v11 = -1071774967;
      }
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, this);
    v11 = -1071774973;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 )
  {
    LOBYTE(v12) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v16);
  }
  return v11;
}
