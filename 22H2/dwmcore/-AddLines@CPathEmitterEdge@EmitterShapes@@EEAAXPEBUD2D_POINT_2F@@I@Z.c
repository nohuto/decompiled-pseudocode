/*
 * XREFs of ?AddLines@CPathEmitterEdge@EmitterShapes@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x180208640
 * Callers:
 *     <none>
 * Callees:
 *     sqrtf_0 @ 0x1800F3FDB (sqrtf_0.c)
 *     ?reserve@?$vector@MV?$allocator@M@std@@@std@@QEAAX_K@Z @ 0x180173C70 (-reserve@-$vector@MV-$allocator@M@std@@@std@@QEAAX_K@Z.c)
 *     ?reserve@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@QEAAX_K@Z @ 0x180173CAC (-reserve@-$vector@Ufloat2@Numerics@Foundation@Windows@@V-$allocator@Ufloat2@Numerics@Foundation@.c)
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x1801DC770 (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z.c)
 *     ??$_Emplace_reallocate@AEBUfloat2@Numerics@Foundation@Windows@@@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat2@Numerics@Foundation@Windows@@QEAU2345@AEBU2345@@Z @ 0x1801DC864 (--$_Emplace_reallocate@AEBUfloat2@Numerics@Foundation@Windows@@@-$vector@Ufloat2@Numerics@Founda.c)
 */

void __fastcall EmitterShapes::CPathEmitterEdge::AddLines(
        EmitterShapes::CPathEmitterEdge *this,
        const struct D2D_POINT_2F *a2,
        unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 *v7; // rsi
  const void **v8; // rdi
  __int64 v9; // rax
  float v10; // xmm9_4
  float v11; // xmm10_4
  __m128 x_low; // xmm6
  __m128 y_low; // xmm7
  float v14; // xmm0_4
  _BYTE *v15; // rdx
  unsigned __int64 v16; // xmm1_8
  float *v17; // rdx
  unsigned __int64 v18; // [rsp+90h] [rbp+8h] BYREF
  float v19; // [rsp+A0h] [rbp+18h] BYREF

  v4 = *((_QWORD *)this + 3);
  v5 = a3;
  v6 = a3;
  v7 = (__int64 *)(v4 - 56);
  v8 = (const void **)(v4 - 32);
  std::vector<Windows::Foundation::Numerics::float2>::reserve(
    (_QWORD *)(v4 - 56),
    a3 + ((__int64)(*(_QWORD *)(v4 - 56 + 8) - *(_QWORD *)(v4 - 56)) >> 3));
  std::vector<float>::reserve(v8, v5 + (((_BYTE *)v8[1] - (_BYTE *)*v8) >> 2));
  v9 = v7[1];
  v10 = *(float *)(v9 - 8);
  v11 = *(float *)(v9 - 4);
  if ( (_DWORD)v5 )
  {
    do
    {
      x_low = (__m128)LODWORD(a2->x);
      y_low = (__m128)LODWORD(a2->y);
      *(FLOAT *)&v18 = a2->x;
      HIDWORD(v18) = y_low.m128_i32[0];
      v14 = sqrtf_0(
              (float)((float)(*(float *)&v18 - v10) * (float)(*(float *)&v18 - v10))
            + (float)((float)(y_low.m128_f32[0] - v11) * (float)(y_low.m128_f32[0] - v11)));
      v19 = v14;
      if ( v14 > 0.00000011920929 )
      {
        v15 = (_BYTE *)v7[1];
        if ( (_BYTE *)v7[2] == v15 )
        {
          std::vector<Windows::Foundation::Numerics::float2>::_Emplace_reallocate<Windows::Foundation::Numerics::float2 const &>(
            v7,
            v15,
            &v18);
          y_low.m128_i32[0] = HIDWORD(v18);
          x_low.m128_i32[0] = v18;
        }
        else
        {
          v16 = _mm_unpacklo_ps(x_low, y_low).m128_u64[0];
          *(_QWORD *)v15 = v16;
          v7[1] += 8LL;
          v18 = v16;
        }
        v17 = (float *)v8[1];
        if ( v8[2] == v17 )
        {
          std::vector<float>::_Emplace_reallocate<float const &>(v8, v17, &v19);
        }
        else
        {
          v8[1] = (char *)v8[1] + 4;
          *v17 = v14;
        }
        v10 = x_low.m128_f32[0];
        v11 = y_low.m128_f32[0];
      }
      ++a2;
      --v6;
    }
    while ( v6 );
  }
}
