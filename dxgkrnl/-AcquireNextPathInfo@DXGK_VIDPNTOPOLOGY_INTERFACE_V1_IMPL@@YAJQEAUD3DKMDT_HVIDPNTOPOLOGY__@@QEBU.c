__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquireNextPathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        __int64 a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *const a3,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH **a4)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rbx
  _DWORD *v18; // rdi
  __int64 v19; // rbx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  bool v26; // zf
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int128 v31; // [rsp+20h] [rbp-50h]
  int v32; // [rsp+38h] [rbp-38h] BYREF
  __int64 v33; // [rsp+40h] [rbp-30h]
  char v34; // [rsp+48h] [rbp-28h]
  __int128 v35; // [rsp+50h] [rbp-20h] BYREF
  __int64 v36; // [rsp+60h] [rbp-10h]
  __int64 v37; // [rsp+90h] [rbp+20h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 33);
  v32 = -1;
  v33 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v34 = 1;
    v32 = 7037;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerEnter, v8, 7037);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 7037);
  v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
  v13[3] = a2;
  v13[4] = this;
  v13[5] = a3;
  if ( a3 )
  {
    *(_QWORD *)&a3->VidPnSourceId = 0LL;
    v15 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
    if ( v15 )
    {
      v16 = a2 - 16;
      v17 = -a2;
      v18 = (_DWORD *)(v16 & -(__int64)(v17 != 0));
      if ( v18 && *v18 == 305419896 )
      {
        v19 = *(_QWORD *)((v16 & -(__int64)(v17 != 0)) + 8);
        if ( !v19 )
          WdLogSingleEntry0(1LL);
        if ( DoublyLinkedList<DMMVIDPNPRESENTPATH,DoubleLinkedListElementDeleter<DMMVIDPNPRESENTPATH>>::ContainsByReference(
               v15 + 8,
               v19) )
        {
          DWORD2(v31) = 0;
          v37 = 0LL;
          *(_QWORD *)&v31 = DMMVIDPNTOPOLOGY::GetNextPath;
          v35 = v31;
          v36 = v19;
          v20 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
                  v15,
                  (__int64)&v35,
                  &v37,
                  1);
          v14 = v20;
          if ( v20 == -1071774937 )
          {
            v25 = WdLogNewEntry5_WdTrace(v22, v21, v23, v24);
            v26 = v37 == 0;
            *(_QWORD *)(v25 + 24) = v15;
            if ( !v26 )
              WdLogSingleEntry0(1LL);
            v14 = 1075708748;
          }
          else if ( v20 >= 0 )
          {
            v27 = v37;
            if ( !v37 )
              WdLogSingleEntry0(1LL);
            *(_QWORD *)&a3->VidPnSourceId = v27;
            v14 = 0;
          }
          else
          {
            WdLogSingleEntry3(2LL, v18, v15, v20);
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, v18, v15);
          v14 = -1071774928;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, v16 & -(__int64)(v17 != 0));
        v14 = -1071774951;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      v14 = -1071774976;
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, 0LL, a2, this);
    v14 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( v34 )
  {
    LOBYTE(v28) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v32);
  }
  return v14;
}
