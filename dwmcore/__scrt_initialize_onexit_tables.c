char __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  if ( !byte_1803E2670 )
  {
    if ( a1 > 1 )
    {
      _scrt_fastfail(5LL);
      JUMPOUT(0x18010E812LL);
    }
    if ( !(unsigned int)_scrt_is_ucrt_dll_in_use() || a1 )
    {
      *(__m128i *)&Table._first = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      Table._end = (_PVFV *)-1LL;
      *(_OWORD *)&stru_1803E2658._first = *(_OWORD *)&Table._first;
      stru_1803E2658._end = (_PVFV *)-1LL;
    }
    else if ( initialize_onexit_table_0(&Table) || initialize_onexit_table_0(&stru_1803E2658) )
    {
      return 0;
    }
    byte_1803E2670 = 1;
  }
  return 1;
}
