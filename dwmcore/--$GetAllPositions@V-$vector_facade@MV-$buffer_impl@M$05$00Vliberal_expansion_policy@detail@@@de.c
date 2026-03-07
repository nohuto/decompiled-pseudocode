float *__fastcall CoordMap::GetAllPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
        __int64 a1,
        float **a2,
        _QWORD *a3,
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
  char v14; // cl
  float *v15; // rsi
  float v16; // xmm0_4
  __int64 v17; // rdx
  unsigned __int64 v18; // rdx

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
      v16 = *v13;
      if ( (float)(v9 + a6) < *v13 )
      {
        if ( v16 >= (float)(v11 - a6) )
          break;
        v17 = (__int64)(a3[1] - *a3) >> 2;
        if ( !v17 || a6 < COERCE_FLOAT(COERCE_UNSIGNED_INT(v16 - *(float *)(a3[1] - 4LL)) & _xmm) )
        {
          *(float *)detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve_region(
                      a3,
                      v17) = *v13;
          v14 = 0;
        }
        if ( !v14 && v13[1] != v13[2] )
        {
          v18 = (__int64)(a3[1] - *a3) >> 2;
          if ( v18 > 1 )
          {
            *(float *)detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve_region(
                        a3,
                        v18) = *v13;
            v14 = 1;
          }
        }
      }
      v13 += 4;
    }
    result = (float *)detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve_region(
                        a3,
                        (__int64)(a3[1] - *a3) >> 2);
    *result = v11;
  }
  return result;
}
