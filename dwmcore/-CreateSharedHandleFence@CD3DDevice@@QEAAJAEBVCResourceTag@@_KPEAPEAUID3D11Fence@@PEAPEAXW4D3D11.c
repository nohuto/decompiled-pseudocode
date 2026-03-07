__int64 __fastcall CD3DDevice::CreateSharedHandleFence(
        CD3DDevice *this,
        const struct CResourceTag *a2,
        __int64 a3,
        struct ID3D11Fence **a4,
        void **a5,
        enum D3D11_FENCE_FLAG a6)
{
  void **v7; // rsi
  __int64 v9; // r8
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  int v15; // eax
  __int64 v16; // rcx
  struct ID3D11Fence *v17; // rax
  struct ID3D11Fence *v19; // [rsp+50h] [rbp+18h] BYREF

  v19 = (struct ID3D11Fence *)a3;
  *a4 = 0LL;
  v7 = a5;
  v9 = a6 | 2u;
  *a5 = 0LL;
  v10 = (__int64 *)*((_QWORD *)this + 69);
  v11 = *v10;
  v19 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, GUID *, struct ID3D11Fence **))(v11 + 544))(
          v10,
          0LL,
          v9,
          &GUID_affde9d1_1df7_4bb7_8a34_0f46251dab80,
          &v19);
  v14 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x753u, 0LL);
  }
  else
  {
    v15 = ((__int64 (__fastcall *)(struct ID3D11Fence *, _QWORD, __int64, _QWORD, void **))v19->lpVtbl->CreateSharedHandle)(
            v19,
            0LL,
            0x10000000LL,
            0LL,
            v7);
    v14 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x758u, 0LL);
    }
    else
    {
      ((void (__fastcall *)(struct ID3D11Fence *, const GUID *, _QWORD, _QWORD))v19->lpVtbl->SetPrivateData)(
        v19,
        &WKPDID_D3DDebugObjectName,
        *((unsigned int *)a2 + 2),
        *(_QWORD *)a2);
      v17 = v19;
      v19 = 0LL;
      *a4 = v17;
    }
  }
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v19);
  return v14;
}
