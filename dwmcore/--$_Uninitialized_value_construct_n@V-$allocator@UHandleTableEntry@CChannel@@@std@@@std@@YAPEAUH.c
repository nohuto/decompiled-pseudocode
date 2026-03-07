_QWORD *__fastcall std::_Uninitialized_value_construct_n<std::allocator<CChannel::HandleTableEntry>>(
        _QWORD *a1,
        __int64 a2)
{
  for ( ; a2; --a2 )
  {
    *a1 = 0LL;
    a1[1] = 0LL;
    a1 += 2;
  }
  std::_Destroy_range<std::allocator<CChannel::HandleTableEntry>>(a1, a1);
  return a1;
}
