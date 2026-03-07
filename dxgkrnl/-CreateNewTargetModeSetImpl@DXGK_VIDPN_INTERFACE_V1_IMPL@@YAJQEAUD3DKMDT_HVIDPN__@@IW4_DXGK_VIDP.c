__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::CreateNewTargetModeSetImpl(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        __int64 a3,
        unsigned __int64 *a4,
        struct D3DKMDT_HVIDPNTARGETMODESET__ **a5)
{
  int v6; // edi
  __int64 v7; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  struct D3DKMDT_HVIDPNTARGETMODESET__ **v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  struct D3DKMDT_HVIDPNTARGETMODESET__ *v18; // r14
  DMMVIDPNTARGET *v19; // rax
  DMMVIDPNTARGET *v20; // rdi
  int NewCofuncModeSet; // eax
  unsigned int v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v26; // [rsp+20h] [rbp-20h] BYREF
  __int64 v27; // [rsp+28h] [rbp-18h]
  char v28; // [rsp+30h] [rbp-10h]

  v26 = -1;
  v27 = 0LL;
  v6 = a3;
  v7 = (unsigned int)a2;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v28 = 1;
    v26 = 7050;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 7050);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 7050);
  v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
  v14 = a5;
  v13[3] = this;
  v13[4] = a4;
  v13[5] = v14;
  if ( a4 && v14 )
  {
    *a4 = 0LL;
    *v14 = 0LL;
    v15 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
    v16 = v15;
    if ( v15 )
    {
      v17 = *(_QWORD *)(v15 + 48);
      if ( v6 == 1 )
        v18 = *(struct D3DKMDT_HVIDPNTARGETMODESET__ **)(v17 + 440);
      else
        v18 = *(struct D3DKMDT_HVIDPNTARGETMODESET__ **)(v17 + 448);
      v19 = (DMMVIDPNTARGET *)IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v16 + 312), v7);
      v20 = v19;
      if ( v19 )
      {
        a5 = 0LL;
        NewCofuncModeSet = DMMVIDPNTARGET::CreateNewCofuncModeSet(v19, (struct DMMVIDPNTARGETMODESET **)&a5);
        v22 = NewCofuncModeSet;
        if ( NewCofuncModeSet < 0 )
        {
          WdLogSingleEntry2(7LL, *((unsigned int *)v20 + 6), NewCofuncModeSet);
        }
        else
        {
          *a4 = (unsigned __int64)a5 & -(__int64)((struct D3DKMDT_HVIDPNTARGETMODESET__ **)((char *)a5 + 137) != 0LL);
          v22 = 0;
          *v14 = v18;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, v7);
        v22 = -1071774971;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      v22 = -1071774973;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    v22 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 )
  {
    LOBYTE(v23) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v26);
  }
  return v22;
}
