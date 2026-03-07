void __fastcall vCalculateCursorBounds(struct _SURFOBJ *a1, struct _SURFOBJ *a2, struct _RECTL *a3)
{
  LONG v4; // ebx
  struct _RECTL si128; // xmm0
  struct tagRECT v8; // [rsp+30h] [rbp-20h] BYREF
  struct _RECTL v9; // [rsp+40h] [rbp-10h] BYREF

  v4 = a1->sizlBitmap.cy >> 1;
  vDetermineSurfaceBounds(a1, 0xFFu, 0, v4, &v9);
  if ( a2 )
  {
    vDetermineSurfaceBounds(a2, 0, 0, v4, (struct _RECTL *)&v8);
  }
  else
  {
    vDetermineSurfaceBounds(a1, 0, v4, 2 * v4, (struct _RECTL *)&v8);
    if ( !IsRectEmptyInl(&v8) )
    {
      v8.top -= v4;
      v8.bottom -= v4;
    }
  }
  ERECTL::operator|=(&v8, &v9);
  if ( IsRectEmptyInl(&v8) )
    si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
  else
    si128 = (struct _RECTL)_mm_loadu_si128((const __m128i *)&v8);
  *a3 = si128;
}
