__int64 __fastcall DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        __int64 a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *const a3,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE **a4)
{
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rbx
  _DWORD *v10; // rdi
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // ebx
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rax
  bool v23; // zf
  struct DMMVIDPNSOURCEMODE *(__fastcall *v24)(DMMVIDPNSOURCEMODESET *, const struct DMMVIDPNSOURCEMODE *const); // [rsp+20h] [rbp-50h] BYREF
  int v25; // [rsp+28h] [rbp-48h]
  __int64 v26; // [rsp+30h] [rbp-40h]
  int v27; // [rsp+40h] [rbp-30h] BYREF
  __int64 v28; // [rsp+48h] [rbp-28h]
  char v29; // [rsp+50h] [rbp-20h]
  __int64 v30; // [rsp+68h] [rbp-8h]
  __int64 v31; // [rsp+A0h] [rbp+30h] BYREF

  v27 = -1;
  v28 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v29 = 1;
    v27 = 6004;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6004);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v27, 6004);
  if ( a3 )
  {
    *(_QWORD *)&a3->Id = 0LL;
    v7 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
    if ( v7 )
    {
      v8 = a2 - 16;
      v9 = -a2;
      v10 = (_DWORD *)(v8 & -(__int64)(v9 != 0));
      if ( v10 && *v10 == 305419896 )
      {
        v11 = *(_QWORD *)((v8 & -(__int64)(v9 != 0)) + 8);
        if ( !v11 )
          WdLogSingleEntry0(1LL);
        if ( DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::ContainsByReference(
               v7 + 32,
               v11) )
        {
          v25 = 0;
          v31 = 0LL;
          v24 = DMMVIDPNSOURCEMODESET::GetNextMode;
          v30 = v11;
          v26 = v11;
          v12 = DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET,DMMVIDPNSOURCEMODE const *>>>(
                  v7,
                  &v24,
                  &v31);
          v17 = v12;
          if ( v12 == -1071774902 )
          {
            v22 = WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
            v23 = v31 == 0;
            *(_QWORD *)(v22 + 24) = v7;
            if ( !v23 )
              WdLogSingleEntry0(1LL);
            v17 = 1075708748;
          }
          else if ( v12 < 0 )
          {
            WdLogSingleEntry2(7LL, v10, v7);
          }
          else
          {
            v18 = v31;
            if ( !v31 )
              WdLogSingleEntry0(1LL);
            *(_QWORD *)&a3->Id = v18;
            v17 = 0;
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, v10, v7);
          v17 = -1071774928;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, v8 & -(__int64)(v9 != 0));
        v17 = -1071774960;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      v17 = -1071774968;
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, 0LL, a2, this);
    v17 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( v29 )
  {
    LOBYTE(v19) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v27);
  }
  return v17;
}
