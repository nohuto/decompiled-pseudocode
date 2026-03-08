/*
 * XREFs of ?AddLines@CPathEmitterEdge@EmitterShapes@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x180266120
 * Callers:
 *     <none>
 * Callees:
 *     ?reserve@?$vector@MV?$allocator@M@std@@@std@@QEAAX_K@Z @ 0x18001DF68 (-reserve@-$vector@MV-$allocator@M@std@@@std@@QEAAX_K@Z.c)
 *     sqrtf_0 @ 0x1801177AC (sqrtf_0.c)
 *     ?reserve@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@QEAAX_K@Z @ 0x1801C7F94 (-reserve@-$vector@Ufloat2@Numerics@Foundation@Windows@@V-$allocator@Ufloat2@Numerics@Foundation@.c)
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x18023E5A8 (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z.c)
 *     ??$_Emplace_reallocate@AEBUfloat2@Numerics@Foundation@Windows@@@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat2@Numerics@Foundation@Windows@@QEAU2345@AEBU2345@@Z @ 0x18023E694 (--$_Emplace_reallocate@AEBUfloat2@Numerics@Foundation@Windows@@@-$vector@Ufloat2@Numerics@Founda.c)
 */

void __fastcall EmitterShapes::CPathEmitterEdge::AddLines(
        EmitterShapes::CPathEmitterEdge *this,
        const struct D2D_POINT_2F *a2,
        unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r14
  _QWORD *v7; // rdi
  _QWORD *v8; // rsi
  __int64 v9; // rax
  float v10; // xmm9_4
  float v11; // xmm10_4
  __m128 v12; // xmm6
  __m128 y_low; // xmm7
  float y; // xmm0_4
  float v15; // xmm0_4
  _BYTE *v16; // rdx
  unsigned __int64 v17; // xmm1_8
  float *v18; // rdx
  unsigned __int64 v19; // [rsp+90h] [rbp+8h] BYREF
  float v20; // [rsp+A0h] [rbp+18h] BYREF

  v4 = *((_QWORD *)this + 4);
  v5 = a3;
  v6 = a3;
  v7 = (_QWORD *)(v4 - 56);
  v8 = (_QWORD *)(v4 - 32);
  std::vector<Windows::Foundation::Numerics::float2>::reserve(
    (_QWORD *)(v4 - 56),
    a3 + ((__int64)(*(_QWORD *)(v4 - 56 + 8) - *(_QWORD *)(v4 - 56)) >> 3));
  std::vector<float>::reserve(v8, v5 + ((__int64)(v8[1] - *v8) >> 2));
  v9 = v7[1];
  v10 = *(float *)(v9 - 8);
  v11 = *(float *)(v9 - 4);
  if ( (_DWORD)v5 )
  {
    do
    {
      y_low = (__m128)LODWORD(a2->y);
      y = a2->y;
      *(FLOAT *)&v19 = a2->x;
      v12 = (__m128)(unsigned int)v19;
      HIDWORD(v19) = y_low.m128_i32[0];
      v15 = sqrtf_0(
              (float)((float)(y - v11) * (float)(y - v11))
            + (float)((float)(v12.m128_f32[0] - v10) * (float)(v12.m128_f32[0] - v10)));
      v20 = v15;
      if ( v15 > 0.00000011920929 )
      {
        v16 = (_BYTE *)v7[1];
        if ( v16 == (_BYTE *)v7[2] )
        {
          std::vector<Windows::Foundation::Numerics::float2>::_Emplace_reallocate<Windows::Foundation::Numerics::float2 const &>(
            v7,
            v16,
            &v19);
          y_low.m128_i32[0] = HIDWORD(v19);
          v12.m128_i32[0] = v19;
        }
        else
        {
          v17 = _mm_unpacklo_ps(v12, y_low).m128_u64[0];
          *(_QWORD *)v16 = v17;
          v7[1] += 8LL;
          v19 = v17;
        }
        v18 = (float *)v8[1];
        if ( v18 == (float *)v8[2] )
        {
          std::vector<float>::_Emplace_reallocate<float const &>(v8, v18, &v20);
        }
        else
        {
          *v18 = v15;
          v8[1] = v18 + 1;
        }
        v10 = v12.m128_f32[0];
        v11 = y_low.m128_f32[0];
      }
      ++a2;
      --v6;
    }
    while ( v6 );
  }
}
