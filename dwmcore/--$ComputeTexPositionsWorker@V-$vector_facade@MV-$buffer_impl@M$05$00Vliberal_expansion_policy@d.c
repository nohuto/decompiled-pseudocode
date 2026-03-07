float *__fastcall CoordMap::ComputeTexPositionsWorker<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
        unsigned __int64 *a1,
        unsigned __int64 *a2,
        _QWORD *a3,
        float a4)
{
  float *result; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 i; // rbx
  float v10; // xmm7_4
  unsigned __int64 v11; // rdx
  float v12; // xmm6_4
  __int64 v13; // rcx
  int *v14; // rbx
  int *v15; // rdi
  int v16; // xmm6_4
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  float v19[12]; // [rsp+30h] [rbp-68h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h] BYREF

  result = (float *)&retaddr;
  if ( *a2 )
  {
    v8 = 0LL;
    for ( i = 0LL; v8 < *a1; *result = v10 )
    {
      v10 = 0.0;
      v11 = a1[1];
      v12 = *(float *)(v11 + 4 * v8);
      if ( i < *a2 )
      {
        v13 = 12 * i;
        while ( 1 )
        {
          *(_QWORD *)v19 = *(_QWORD *)(a2[1] + v13);
          if ( a4 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(v12 - v19[0]) & _xmm) )
            break;
          if ( v19[0] > v12 )
          {
            if ( i )
              v17 = i - 1;
            else
              v17 = 0LL;
            v18 = gsl::span<CoordMap::RampPair const,-1>::operator[](a2, v17);
            v10 = (float)((float)(1.0
                                - (float)((float)(v12 - COERCE_FLOAT(*(_QWORD *)v18))
                                        / (float)(v19[0] - COERCE_FLOAT(*(_QWORD *)v18))))
                        * *(float *)(v18 + 8))
                + (float)((float)((float)(v12 - COERCE_FLOAT(*(_QWORD *)v18))
                                / (float)(v19[0] - COERCE_FLOAT(*(_QWORD *)v18)))
                        * v19[1]);
            goto LABEL_9;
          }
          ++i;
          v13 += 12LL;
          if ( i >= *a2 )
            goto LABEL_9;
        }
        LODWORD(v10) = HIDWORD(*(_QWORD *)(a2[1] + v13));
        if ( !v8 )
          goto LABEL_14;
        if ( v8 - 1 >= *a1 )
        {
          gsl::details::terminate((gsl::details *)v13);
          JUMPOUT(0x180025836LL);
        }
        if ( a4 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(v12 - *(float *)(v11 + 4 * v8 - 4)) & _xmm) )
        {
LABEL_14:
          if ( i + 1 < *a2 )
          {
            while ( a4 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)gsl::span<CoordMap::RampPair const,-1>::operator[](
                                                                       a2,
                                                                       i + 1) - v12) & _xmm) )
              ++i;
          }
          v10 = *(float *)(gsl::span<CoordMap::RampPair const,-1>::operator[](a2, i) + 8);
        }
      }
LABEL_9:
      result = (float *)detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve_region(
                          a3,
                          (__int64)(a3[1] - *a3) >> 2);
      ++v8;
    }
  }
  else
  {
    v14 = (int *)a1[1];
    result = (float *)*a1;
    v15 = &v14[*a1];
    while ( v14 != v15 )
    {
      v16 = *v14;
      result = (float *)detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve_region(
                          a3,
                          (__int64)(a3[1] - *a3) >> 2);
      ++v14;
      *(_DWORD *)result = v16;
    }
  }
  return result;
}
