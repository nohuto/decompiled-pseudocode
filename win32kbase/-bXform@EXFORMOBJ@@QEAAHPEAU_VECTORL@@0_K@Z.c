/*
 * XREFs of ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z @ 0x1C017FF10
 * Callers:
 *     <none>
 * Callees:
 *     EngSetLastError @ 0x1C00BAB10 (EngSetLastError.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     bCvtVts @ 0x1C0274FAC (bCvtVts.c)
 */

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
