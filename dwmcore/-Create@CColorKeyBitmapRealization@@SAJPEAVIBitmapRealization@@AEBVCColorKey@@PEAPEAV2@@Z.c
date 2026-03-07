__int64 __fastcall CColorKeyBitmapRealization::Create(
        struct IBitmapRealization *a1,
        const struct CColorKey *a2,
        struct IBitmapRealization **a3)
{
  CColorKeyBitmapRealization *v6; // rax
  __int64 v7; // rcx
  CColorKeyBitmapRealization *v8; // rbx
  CColorKeyBitmapRealization *v9; // rax
  CColorKeyBitmapRealization *v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // edi

  *a3 = 0LL;
  v6 = (CColorKeyBitmapRealization *)operator new(0xA8uLL);
  v8 = v6;
  if ( v6
    && (memset_0(v6, 0, 0xA8uLL), v9 = CColorKeyBitmapRealization::CColorKeyBitmapRealization(v8), (v10 = v9) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CColorKeyBitmapRealization *)((char *)v9 + 8));
    v11 = CColorKeyBitmapRealization::Initialize(v10, a1, a2);
    v13 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x19u, 0LL);
      CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v10);
    }
    else
    {
      *a3 = (CColorKeyBitmapRealization *)((char *)v10 + *(int *)(*((_QWORD *)v10 + 2) + 16LL) + 16);
    }
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x17u, 0LL);
  }
  return v13;
}
