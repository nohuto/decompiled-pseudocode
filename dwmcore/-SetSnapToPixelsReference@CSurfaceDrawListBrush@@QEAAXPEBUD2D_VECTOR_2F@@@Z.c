void __fastcall CSurfaceDrawListBrush::SetSnapToPixelsReference(
        CSurfaceDrawListBrush *this,
        const struct D2D_VECTOR_2F *a2)
{
  *((_BYTE *)this + 148) = a2 != 0LL;
  if ( a2 )
    *((struct D2D_VECTOR_2F *)this + 17) = *a2;
}
