char __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  if ( !byte_1400167F0 )
  {
    if ( a1 > 1 )
    {
      _scrt_fastfail(5LL);
      JUMPOUT(0x1400057DALL);
    }
    if ( !(unsigned int)_scrt_is_ucrt_dll_in_use() || a1 )
    {
      *(__m128i *)&Table._first = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      Table._end = (_PVFV *)-1LL;
      *(_OWORD *)&stru_1400167D8._first = *(_OWORD *)&Table._first;
      stru_1400167D8._end = (_PVFV *)-1LL;
    }
    else if ( initialize_onexit_table(&Table) || initialize_onexit_table(&stru_1400167D8) )
    {
      return 0;
    }
    byte_1400167F0 = 1;
  }
  return 1;
}
