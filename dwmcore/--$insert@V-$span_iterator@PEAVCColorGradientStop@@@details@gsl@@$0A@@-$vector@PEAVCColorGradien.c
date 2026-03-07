_QWORD *__fastcall std::vector<CColorGradientStop *>::insert<gsl::details::span_iterator<CColorGradientStop *>,0>(
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
    JUMPOUT(0x1800B9D2FLL);
  }
  std::vector<CColorGradientStop *>::_Insert_range<CColorGradientStop * *>(
    a1,
    a3,
    *(const void **)(a4 + 16),
    *(_QWORD *)(a5 + 16));
  *a2 = *a1 + 8 * ((__int64)&a3[-v5] >> 3);
  return a2;
}
