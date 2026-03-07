_QWORD *__fastcall std::vector<float>::insert<gsl::details::span_iterator<float const>,0>(
        __int64 *a1,
        _QWORD *a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rbp

  v5 = *a1;
  if ( *(_OWORD *)a4 != *(_OWORD *)a5 || *(_QWORD *)(a4 + 16) > *(_QWORD *)(a5 + 16) )
  {
    gsl::details::terminate(*(gsl::details **)a4);
    JUMPOUT(0x18024EA7BLL);
  }
  std::vector<float>::_Insert_range<float const *>(a1, a3, *(const void **)(a4 + 16), *(_QWORD *)(a5 + 16));
  *a2 = *a1 + 4 * ((__int64)&a3[-v5] >> 2);
  return a2;
}
