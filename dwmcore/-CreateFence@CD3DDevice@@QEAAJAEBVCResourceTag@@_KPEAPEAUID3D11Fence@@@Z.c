__int64 __fastcall CD3DDevice::CreateFence(
        CD3DDevice *this,
        const struct CResourceTag *a2,
        __int64 a3,
        struct ID3D11Fence **a4)
{
  __int64 *v5; // r11
  __int64 v7; // r8
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  struct ID3D11Fence *v12; // rax
  struct ID3D11Fence *v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = (struct ID3D11Fence *)a3;
  *a4 = 0LL;
  v5 = (__int64 *)*((_QWORD *)this + 69);
  v7 = ~(unsigned __int8)*((_DWORD *)this + 226) & 8;
  v8 = *v5;
  v14 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, GUID *, struct ID3D11Fence **))(v8 + 544))(
         v5,
         0LL,
         v7,
         &GUID_affde9d1_1df7_4bb7_8a34_0f46251dab80,
         &v14);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x738u, 0LL);
  }
  else
  {
    ((void (__fastcall *)(struct ID3D11Fence *, const GUID *, _QWORD, _QWORD))v14->lpVtbl->SetPrivateData)(
      v14,
      &WKPDID_D3DDebugObjectName,
      *((unsigned int *)a2 + 2),
      *(_QWORD *)a2);
    v12 = v14;
    v14 = 0LL;
    *a4 = v12;
  }
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v14);
  return v11;
}
