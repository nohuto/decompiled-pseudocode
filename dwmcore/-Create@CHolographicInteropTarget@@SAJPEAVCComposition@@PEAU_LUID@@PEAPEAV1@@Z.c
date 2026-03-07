__int64 __fastcall CHolographicInteropTarget::Create(
        struct CComposition *a1,
        struct _LUID *a2,
        struct CHolographicInteropTarget **a3)
{
  CHolographicInteropTarget *v6; // rax
  __int64 v7; // rcx
  CHolographicInteropTarget *v8; // rax
  CHolographicInteropTarget *v9; // rdi
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx

  v6 = (CHolographicInteropTarget *)CHolographicInteropTarget::operator new();
  if ( v6 && (v8 = CHolographicInteropTarget::CHolographicInteropTarget(v6, a1), (v9 = v8) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CHolographicInteropTarget *)((char *)v8 + 8));
    v10 = CHolographicInteropTarget::Initialize(v9, *a2);
    v12 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x19u, 0LL);
      CResource::InternalRelease(v9);
    }
    else
    {
      *a3 = v9;
    }
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x15u, 0LL);
  }
  return v12;
}
