__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        __int64 a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *const a3,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  _DWORD *v9; // rsi
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // ebx
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rax
  bool v22; // zf
  struct DMMVIDPNTARGETMODE *(__fastcall *v23)(DMMVIDPNTARGETMODESET *, const struct DMMVIDPNTARGETMODE *const); // [rsp+20h] [rbp-50h] BYREF
  int v24; // [rsp+28h] [rbp-48h]
  __int64 v25; // [rsp+30h] [rbp-40h]
  int v26; // [rsp+40h] [rbp-30h] BYREF
  __int64 v27; // [rsp+48h] [rbp-28h]
  char v28; // [rsp+50h] [rbp-20h]
  __int64 v29; // [rsp+68h] [rbp-8h]
  __int64 v30; // [rsp+A0h] [rbp+30h] BYREF

  v26 = -1;
  v27 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v28 = 1;
    v26 = 6011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6011);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 6011);
  if ( a3 )
  {
    *(_QWORD *)&a3->Id = 0LL;
    if ( this && *((_DWORD *)this + 32) == 1833173005 )
    {
      v7 = a2 - 16;
      v8 = -a2;
      v9 = (_DWORD *)(v7 & -(__int64)(v8 != 0));
      if ( v9 && *v9 == 305419896 )
      {
        v10 = *(_QWORD *)((v7 & -(__int64)(v8 != 0)) + 8);
        if ( !v10 )
          WdLogSingleEntry0(1LL);
        if ( DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>::ContainsByReference(
               (__int64)this + 32,
               v10) )
        {
          v24 = 0;
          v30 = 0LL;
          v23 = DMMVIDPNTARGETMODESET::GetNextMode;
          v29 = v10;
          v25 = v10;
          v11 = DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET,DMMVIDPNTARGETMODE const *>>>(
                  this,
                  &v23,
                  &v30);
          v16 = v11;
          if ( v11 == -1071774902 )
          {
            v21 = WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
            v22 = v30 == 0;
            *(_QWORD *)(v21 + 24) = this;
            if ( !v22 )
              WdLogSingleEntry0(1LL);
            v16 = 1075708748;
          }
          else if ( v11 < 0 )
          {
            WdLogSingleEntry2(7LL, v9, this);
          }
          else
          {
            v17 = v30;
            if ( !v30 )
              WdLogSingleEntry0(1LL);
            *(_QWORD *)&a3->Id = v17;
            v16 = 0;
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, v9, this);
          v16 = -1071774928;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, v7 & -(__int64)(v8 != 0));
        v16 = -1071774959;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      v16 = -1071774967;
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, 0LL, a2, this);
    v16 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 )
  {
    LOBYTE(v18) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v26);
  }
  return v16;
}
