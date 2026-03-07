__int64 __fastcall CWarpLockSubresource::Create(
        struct CD3DDevice *a1,
        struct ID3D11Texture2D *a2,
        unsigned int a3,
        struct CWarpLockSubresource **a4)
{
  struct IWarpPrivateAPI *v5; // rbx
  CWarpLockSubresource *v8; // rax
  unsigned int v9; // ecx
  CWarpLockSubresource *v10; // rax
  CWarpLockSubresource *v11; // rdi
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ebx

  *a4 = 0LL;
  v5 = (struct IWarpPrivateAPI *)*((_QWORD *)a1 + 71);
  if ( v5 )
  {
    v8 = (CWarpLockSubresource *)DefaultHeap::Alloc(0x38uLL);
    if ( v8 && (v10 = CWarpLockSubresource::CWarpLockSubresource(v8, v5), (v11 = v10) != 0LL) )
    {
      CMILRefCountImpl::AddReference((CWarpLockSubresource *)((char *)v10 + 8));
      v12 = CWarpLockSubresource::Initialize(v11, a2, a3);
      v14 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1Cu, 0LL);
        CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v11);
      }
      else
      {
        *a4 = v11;
      }
    }
    else
    {
      v14 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x1Au, 0LL);
    }
  }
  else
  {
    v14 = -2003292287;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, -2003292287, 0x22u, 0LL);
  }
  return v14;
}
