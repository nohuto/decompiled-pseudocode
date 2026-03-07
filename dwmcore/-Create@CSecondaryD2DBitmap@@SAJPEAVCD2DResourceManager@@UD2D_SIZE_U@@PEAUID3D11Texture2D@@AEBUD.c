__int64 __fastcall CSecondaryD2DBitmap::Create(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        int a6,
        int a7,
        CSecondaryD2DBitmap *a8)
{
  CSecondaryD2DBitmap *v8; // rsi
  LPVOID v13; // rax
  __int64 v14; // rcx
  CSecondaryD2DBitmap *v15; // rbx
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // edi
  CSecondaryD2DBitmap *v19; // rcx

  v8 = a8;
  a8 = 0LL;
  *(_QWORD *)v8 = 0LL;
  v13 = DefaultHeap::Alloc(0x1C0uLL);
  if ( v13 )
    v13 = (LPVOID)CSecondaryD2DBitmap::CSecondaryD2DBitmap(v13, a1, a2, a3, a4, a5, a6, a7);
  wil::com_ptr_t<CSecondaryD2DBitmap,wil::err_returncode_policy>::operator=(&a8, v13);
  v15 = a8;
  if ( a8 )
  {
    v16 = CSecondaryD2DBitmap::Initialize(a8);
    v18 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x24u, 0LL);
    }
    else
    {
      v19 = v15;
      v15 = 0LL;
      *(_QWORD *)v8 = v19;
    }
  }
  else
  {
    v18 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0x22u, 0LL);
  }
  if ( v15 )
    CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v15);
  return v18;
}
