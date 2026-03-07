__int64 __fastcall CYCbCrSurface::HitTest(
        CYCbCrSurface *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *((_QWORD *)this - 7);
  result = 0LL;
  if ( v4 )
    return CCompositionSurfaceBitmap::HitTest((CCompositionSurfaceBitmap *)(v4 + 224), a2, a3, a4);
  *a4 = 0;
  return result;
}
