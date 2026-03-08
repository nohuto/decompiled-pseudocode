/*
 * XREFs of ?Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_NXZ @ 0x18026CB38
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800627D0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180080580 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     CanCombineToRegion @ 0x1801AE7A8 (CanCombineToRegion.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800B25B0 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 */

char __fastcall CMILMatrix::Is2DAxisAlignedIntegerPreserving(CMILMatrix *this)
{
  char v2; // al
  char v3; // cl
  float v4; // xmm3_4
  int v5; // eax
  __m128 v6; // xmm2
  float v7; // xmm3_4
  int v8; // eax
  __m128 v9; // xmm2
  float v10; // xmm3_4
  int v11; // eax
  __m128 v12; // xmm2
  float v13; // xmm3_4
  int v14; // eax
  __m128 v15; // xmm2
  float v16; // xmm3_4
  int v17; // eax
  __m128 v18; // xmm2
  float v19; // xmm3_4
  int v20; // eax
  __m128 v21; // xmm2
  float v23; // [rsp+58h] [rbp+10h]
  float v24; // [rsp+58h] [rbp+10h]
  float v25; // [rsp+58h] [rbp+10h]
  float v26; // [rsp+58h] [rbp+10h]
  float v27; // [rsp+58h] [rbp+10h]
  float v28; // [rsp+58h] [rbp+10h]

  v2 = CMILMatrix::Is2DAxisAlignedPreserving(this);
  v3 = 0;
  if ( v2 )
  {
    v4 = *(float *)this;
    if ( (*(_DWORD *)this & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v6 = 0LL;
      v6.m128_f32[0] = (float)(int)v4 - v4;
      v5 = (int)v4 - _mm_cmple_ss(v6, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
    }
    else
    {
      v23 = v4 + 6291456.25;
      v5 = (int)(LODWORD(v23) << 10) >> 11;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v4 - (float)v5) & _xmm) <= 0.000081380211 )
    {
      v7 = *((float *)this + 1);
      if ( (LODWORD(v7) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        v9 = 0LL;
        v9.m128_f32[0] = (float)(int)v7 - v7;
        v8 = (int)v7 - _mm_cmple_ss(v9, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
      }
      else
      {
        v24 = v7 + 6291456.25;
        v8 = (int)(LODWORD(v24) << 10) >> 11;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v7 - (float)v8) & _xmm) <= 0.000081380211 )
      {
        v10 = *((float *)this + 4);
        if ( (LODWORD(v10) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          v12 = 0LL;
          v12.m128_f32[0] = (float)(int)v10 - v10;
          v11 = (int)v10 - _mm_cmple_ss(v12, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
        }
        else
        {
          v25 = v10 + 6291456.25;
          v11 = (int)(LODWORD(v25) << 10) >> 11;
        }
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 - (float)v11) & _xmm) <= 0.000081380211 )
        {
          v13 = *((float *)this + 5);
          if ( (LODWORD(v13) & 0x7FFFFFFFu) > 0x497FFFF0 )
          {
            v15 = 0LL;
            v15.m128_f32[0] = (float)(int)v13 - v13;
            v14 = (int)v13 - _mm_cmple_ss(v15, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
          }
          else
          {
            v26 = v13 + 6291456.25;
            v14 = (int)(LODWORD(v26) << 10) >> 11;
          }
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v13 - (float)v14) & _xmm) <= 0.000081380211 )
          {
            v16 = *((float *)this + 12);
            if ( (LODWORD(v16) & 0x7FFFFFFFu) > 0x497FFFF0 )
            {
              v18 = 0LL;
              v18.m128_f32[0] = (float)(int)v16 - v16;
              v17 = (int)v16 - _mm_cmple_ss(v18, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
            }
            else
            {
              v27 = v16 + 6291456.25;
              v17 = (int)(LODWORD(v27) << 10) >> 11;
            }
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v16 - (float)v17) & _xmm) <= 0.00390625 )
            {
              v19 = *((float *)this + 13);
              if ( (LODWORD(v19) & 0x7FFFFFFFu) > 0x497FFFF0 )
              {
                v21 = 0LL;
                v21.m128_f32[0] = (float)(int)v19 - v19;
                v20 = (int)v19 - _mm_cmple_ss(v21, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
              }
              else
              {
                v28 = v19 + 6291456.25;
                v20 = (int)(LODWORD(v28) << 10) >> 11;
              }
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v19 - (float)v20) & _xmm) <= 0.00390625 )
                return 1;
            }
          }
        }
      }
    }
  }
  return v3;
}
