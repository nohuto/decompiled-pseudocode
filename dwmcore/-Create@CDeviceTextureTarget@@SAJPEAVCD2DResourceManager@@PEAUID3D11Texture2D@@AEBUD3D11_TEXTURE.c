__int64 __fastcall CDeviceTextureTarget::Create(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        int a6,
        int a7,
        char a8,
        __int64 *a9)
{
  __int64 *v9; // rsi
  void *v14; // rax
  unsigned int v15; // ecx
  CDeviceTextureTarget *v16; // rbx
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // edi
  CDeviceTextureTarget *v20; // rcx
  CDeviceTextureTarget *v22; // [rsp+90h] [rbp+18h] BYREF

  v9 = a9;
  v22 = 0LL;
  *a9 = 0LL;
  if ( (*(_BYTE *)(a3 + 32) & 0x20) != 0 )
  {
    v14 = DefaultHeap::Alloc(0x1A8uLL);
    if ( v14 )
      v14 = (void *)CDeviceTextureTarget::CDeviceTextureTarget(v14, a1, a2, a3, a4, (_DWORD)a5, a6, a7, a8, 0);
    wil::com_ptr_t<CDeviceTextureTarget,wil::err_returncode_policy>::operator=(&v22, v14);
    v16 = v22;
    if ( v22 )
    {
      v17 = CDeviceTextureTarget::Initialize(v22);
      v19 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x2Bu, 0LL);
      }
      else
      {
        v20 = v16;
        v16 = 0LL;
        *v9 = ((unsigned __int64)v20 + 248) & -(__int64)(v20 != 0LL);
      }
    }
    else
    {
      v19 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024882, 0x29u, 0LL);
    }
    if ( v16 )
      CMILRefCountBaseT<IUnknown>::InternalRelease(v16);
  }
  else
  {
    v19 = -2003292287;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2003292287, 0x1Eu, 0LL);
  }
  return v19;
}
