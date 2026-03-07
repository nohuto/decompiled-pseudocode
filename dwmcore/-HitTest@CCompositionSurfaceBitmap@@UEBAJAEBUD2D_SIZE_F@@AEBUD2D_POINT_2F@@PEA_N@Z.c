__int64 __fastcall CCompositionSurfaceBitmap::HitTest(
        CCompositionSurfaceBitmap *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  int Bounds; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  float y; // xmm1_4
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF

  *a4 = 0;
  v11 = 0LL;
  Bounds = CCompositionSurfaceBitmap::GetBounds((__int64)this, (__int64)a2, &v11);
  v8 = Bounds;
  if ( Bounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, Bounds, 0x11Eu, 0LL);
  }
  else if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v11) )
  {
    y = a3->y;
    if ( y >= *((float *)&v11 + 1)
      && *((float *)&v11 + 3) > y
      && a3->x >= *(float *)&v11
      && *((float *)&v11 + 2) > a3->x )
    {
      *a4 = 1;
    }
  }
  return v8;
}
