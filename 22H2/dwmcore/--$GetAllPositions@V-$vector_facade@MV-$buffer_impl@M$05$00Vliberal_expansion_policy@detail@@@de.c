/*
 * XREFs of ??$GetAllPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@AEBAXAEBV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@2@MMM@Z @ 0x180042A14
 * Callers:
 *     ??$ComputeMeshPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXAEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@0AEBUD2D_RECT_F@@M@Z @ 0x180042538 (--$ComputeMeshPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail.c)
 * Callees:
 *     ?clear@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800426CC (-clear@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail.c)
 *     ?reserve_region@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAM_K0@Z @ 0x180042B94 (-reserve_region@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail.c)
 */

float *__fastcall CoordMap::GetAllPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
        __int64 a1,
        float **a2,
        __int64 *a3,
        float a4,
        float a5,
        float a6)
{
  _QWORD *v8; // r8
  float v9; // xmm6_4
  float *result; // rax
  float v11; // xmm7_4
  float *v12; // rax
  float *v13; // rbx
  char v14; // r8
  float *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  _DWORD *v18; // rax
  unsigned __int64 v19; // rdx
  _DWORD *v20; // rax
  float v21; // xmm0_4

  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(a3);
  v9 = fmaxf(a4, **a2);
  result = (float *)(((char *)a2[1] - (char *)*a2) & 0xFFFFFFFFFFFFFFF0uLL);
  v11 = fminf(a5, *(float *)((char *)*a2 + (_QWORD)result - 16));
  if ( (float)(v11 - v9) > a6 )
  {
    v12 = (float *)detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve_region(
                     v8,
                     (__int64)(v8[1] - *v8) >> 2);
    v13 = *a2;
    v14 = 0;
    v15 = a2[1];
    *v12 = v9;
    while ( v13 != v15 )
    {
      v21 = *v13;
      if ( (float)(v9 + a6) < *v13 )
      {
        if ( v21 >= (float)(v11 - a6) )
          break;
        v16 = a3[1];
        v17 = *a3;
        if ( ((v16 - *a3) & 0xFFFFFFFFFFFFFFFCuLL) == 0
          || a6 < COERCE_FLOAT(COERCE_UNSIGNED_INT(v21 - *(float *)(v16 - 4)) & _xmm) )
        {
          v18 = (_DWORD *)detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve_region(
                            a3,
                            (v16 - v17) >> 2);
          v14 = 0;
          *v18 = *(_DWORD *)v13;
          v16 = a3[1];
          v17 = *a3;
        }
        if ( !v14 && v13[1] != v13[2] )
        {
          v19 = (v16 - v17) >> 2;
          if ( v19 > 1 )
          {
            v20 = (_DWORD *)detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve_region(
                              a3,
                              v19);
            v14 = 1;
            *v20 = *(_DWORD *)v13;
          }
        }
      }
      v13 += 4;
    }
    result = (float *)detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve_region(
                        a3,
                        (a3[1] - *a3) >> 2);
    *result = v11;
  }
  return result;
}
