__int64 *__fastcall std::_Uninitialized_value_construct_n<std::allocator<CDDisplayCachedScanout>>(
        __int64 *a1,
        __int64 a2)
{
  for ( ; a2; --a2 )
  {
    a1[4] = 1LL;
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
    a1[3] = 0LL;
    a1 += 5;
  }
  std::_Destroy_range<std::allocator<CDDisplayCachedScanout>>(a1, a1);
  return a1;
}
