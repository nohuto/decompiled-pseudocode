__int64 __fastcall CDeviceTextureTarget::CreateSubResourceTextureTarget(
        CDeviceTextureTarget *this,
        unsigned int a2,
        struct IDeviceTextureTarget **a3)
{
  CDeviceTextureTarget *v3; // rbx
  int IsValid; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  CDeviceTextureTarget *v13; // rax
  unsigned int v15; // [rsp+20h] [rbp-58h]
  CDeviceTextureTarget *v16; // [rsp+80h] [rbp+8h] BYREF

  v3 = 0LL;
  *a3 = 0LL;
  v16 = 0LL;
  if ( a2 >= *((_DWORD *)this - 21) || a2 == *((_DWORD *)this - 2) )
  {
    v9 = -2147024809;
    v15 = 100;
    goto LABEL_13;
  }
  IsValid = CD2DBitmap::IsValid((CDeviceTextureTarget *)((char *)this + 24));
  v9 = IsValid;
  if ( IsValid < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, IsValid, 0x67u, 0LL);
    return v9;
  }
  v10 = (__int64)DefaultHeap::Alloc(0x1A8uLL);
  if ( v10 )
    v10 = CDeviceTextureTarget::CDeviceTextureTarget(
            v10,
            *((_QWORD *)this - 28),
            *((_QWORD *)this - 16),
            (__int64)this - 96,
            (__int64)this - 48,
            *((_DWORD *)this - 4),
            *((_DWORD *)this - 3),
            *((_DWORD *)this + 7),
            *((_BYTE *)this + 33),
            a2);
  wil::com_ptr_t<CDeviceTextureTarget,wil::err_returncode_policy>::operator=((__int64 *)&v16, v10);
  v3 = v16;
  if ( !v16 )
  {
    v9 = -2147024882;
    v15 = 114;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v9, v15, 0LL);
    goto LABEL_14;
  }
  v11 = CDeviceTextureTarget::Initialize(v16);
  v9 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x74u, 0LL);
  }
  else
  {
    v13 = v3;
    v3 = 0LL;
    *a3 = (struct IDeviceTextureTarget *)(((unsigned __int64)v13 + 248) & -(__int64)(v13 != 0LL));
  }
LABEL_14:
  if ( v3 )
    CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v3);
  return v9;
}
