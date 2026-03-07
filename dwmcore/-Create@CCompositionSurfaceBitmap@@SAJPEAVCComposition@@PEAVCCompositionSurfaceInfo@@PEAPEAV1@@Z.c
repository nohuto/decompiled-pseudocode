__int64 __fastcall CCompositionSurfaceBitmap::Create(
        struct CComposition *a1,
        struct CCompositionSurfaceInfo *a2,
        struct CCompositionSurfaceBitmap **a3)
{
  unsigned int v3; // ebx
  CCompositionSurfaceBitmap *v7; // rax
  __int64 v8; // rcx
  CCompositionSurfaceBitmap *v9; // rax
  CCompositionSurfaceBitmap *v10; // rdi

  v3 = 0;
  *a3 = 0LL;
  v7 = (CCompositionSurfaceBitmap *)CCompositionSurfaceBitmap::operator new();
  if ( v7 && (v9 = CCompositionSurfaceBitmap::CCompositionSurfaceBitmap(v7, a1), (v10 = v9) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CCompositionSurfaceBitmap *)((char *)v9 + 8));
    CCompositionSurfaceBitmap::SetSurfaceInfo(v10, a2);
    *a3 = v10;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x1Cu, 0LL);
  }
  return v3;
}
