__int64 __fastcall EXFORMOBJ::bXform(__m128 **this, struct _VECTORL *a2, struct _VECTORL *a3, __int64 a4)
{
  __m128 *v5; // rcx
  unsigned int v7; // edi

  v5 = *this;
  if ( (v5[2].m128_i32[0] & 2) == 0 || a3 == a2 )
  {
    *v5 = _mm_mul_ps(*v5, (__m128)_xmm);
    v7 = bCvtVts(v5, a2, a3);
    **this = _mm_mul_ps(**this, (__m128)_xmm);
    if ( !v7 )
      EngSetLastError(0x216u);
    return v7;
  }
  else
  {
    memmove(a3, a2, 8 * a4);
    return 1LL;
  }
}
