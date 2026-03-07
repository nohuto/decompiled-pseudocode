__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::CreateVidPnCopy(
        DXGDMM_INTERFACE_V1_IMPL *this,
        __int64 a2,
        struct D3DKMDT_HVIDPN__ *const a3,
        struct D3DKMDT_HVIDPN__ **a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  const struct DMMVIDPN *v10; // r14
  __int64 v11; // rbx
  struct D3DKMDT_HVIDPN__ *v12; // rdi
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // [rsp+50h] [rbp-20h] BYREF
  int v20; // [rsp+58h] [rbp-18h] BYREF
  __int64 v21; // [rsp+60h] [rbp-10h]
  char v22; // [rsp+68h] [rbp-8h]
  __int64 v23; // [rsp+B0h] [rbp+40h] BYREF

  v20 = -1;
  v21 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v22 = 1;
    v20 = 6054;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6054);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 6054);
  if ( a3 && a4 )
  {
    *(_QWORD *)a3 = 0LL;
    *a4 = 0LL;
    if ( this )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
        WdLogSingleEntry0(1LL);
      if ( *((_QWORD *)this + 365) )
      {
        v10 = (const struct DMMVIDPN *)ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a2);
        if ( v10 )
        {
          v11 = *(_QWORD *)(v9 + 104);
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v19, v11);
          v12 = *(struct D3DKMDT_HVIDPN__ **)(v11 + 480);
          v23 = 0LL;
          v14 = VIDPN_MGR::CreateVidPnCopyForClient(v11, v10, &v23, v13);
          v8 = v14;
          if ( v14 >= 0 )
          {
            v15 = v23;
            v23 = 0LL;
            *(_QWORD *)a3 = v15 & -(__int64)(v15 != -88);
            v8 = 0;
            *a4 = v12;
          }
          else
          {
            WdLogSingleEntry1(7LL, v14);
          }
          auto_rc<DMMVIDPN>::reset(&v23, 0LL);
          DXGFASTMUTEX::Release((struct _KTHREAD **)(v19 + 40));
        }
        else
        {
          WdLogSingleEntry1(2LL, a2);
          v8 = -1071774973;
        }
        goto LABEL_21;
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
    v8 = -1071775742;
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, a2);
    v8 = -1073741811;
  }
LABEL_21:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 )
  {
    LOBYTE(v16) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v20);
  }
  return v8;
}
