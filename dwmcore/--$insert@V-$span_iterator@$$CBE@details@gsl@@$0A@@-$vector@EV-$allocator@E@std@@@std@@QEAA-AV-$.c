_QWORD *__fastcall std::vector<unsigned char>::insert<gsl::details::span_iterator<unsigned char const>,0>(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rbp

  v5 = *a1;
  if ( *(_OWORD *)a4 != *(_OWORD *)a5 || *(_QWORD *)(a4 + 16) > *(_QWORD *)(a5 + 16) )
  {
    gsl::details::terminate(*(gsl::details **)a4);
    JUMPOUT(0x1800AB666LL);
  }
  std::vector<unsigned char>::_Insert_range<unsigned char const *>(a1, a3, *(_QWORD *)(a4 + 16), *(_QWORD *)(a5 + 16));
  *a2 = a3 + *a1 - v5;
  return a2;
}
