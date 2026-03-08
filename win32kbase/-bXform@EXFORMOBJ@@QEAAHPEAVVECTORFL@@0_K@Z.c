/*
 * XREFs of ?bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z @ 0x1C005A700
 * Callers:
 *     ?bComputeUnits@EXFORMOBJ@@QEAAHJPEAVPOINTFL@@PEAVEFLOAT@@1@Z @ 0x1C017FB70 (-bComputeUnits@EXFORMOBJ@@QEAAHJPEAVPOINTFL@@PEAVEFLOAT@@1@Z.c)
 * Callees:
 *     bCvtVts_FlToFl @ 0x1C005B430 (bCvtVts_FlToFl.c)
 *     EngSetLastError @ 0x1C00BAB10 (EngSetLastError.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 */

__int64 __fastcall EXFORMOBJ::bXform(__m128 **this, struct VECTORFL *a2, struct VECTORFL *a3, __int64 a4)
{
  __m128 *v5; // rcx
  __int32 v6; // r8d
  __m128 v7; // xmm0
  unsigned int v8; // ebx
  __m128 **v9; // r10
  __m128 *v10; // rax
  __m128 v11; // xmm0
  __m128 **v13; // r10

  v5 = *this;
  v6 = v5[2].m128_i32[0];
  if ( (v6 & 2) != 0 )
  {
    if ( a3 != a2 )
      memmove(a3, a2, 8 * a4);
    return 1LL;
  }
  else
  {
    if ( (v6 & 0x20) != 0 )
    {
      v8 = bCvtVts_FlToFl(v5, a2, a3);
    }
    else
    {
      v7 = *v5;
      if ( (v6 & 8) != 0 )
      {
        *v5 = _mm_mul_ps(v7, (__m128)_xmm);
        v8 = bCvtVts_FlToFl(v5, a2, a3);
        v10 = *v9;
        v11 = _mm_mul_ps(**v9, (__m128)_xmm);
      }
      else
      {
        *v5 = _mm_mul_ps(v7, (__m128)_xmm);
        v8 = bCvtVts_FlToFl(v5, a2, a3);
        v10 = *v13;
        v11 = _mm_mul_ps(**v13, (__m128)_xmm);
      }
      *v10 = v11;
    }
    if ( !v8 )
      EngSetLastError(0x216u);
    return v8;
  }
}
