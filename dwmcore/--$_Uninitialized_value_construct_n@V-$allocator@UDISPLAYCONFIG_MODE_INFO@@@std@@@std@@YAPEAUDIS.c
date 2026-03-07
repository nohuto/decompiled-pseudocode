char *__fastcall std::_Uninitialized_value_construct_n<std::allocator<DISPLAYCONFIG_MODE_INFO>>(char *a1, __int64 a2)
{
  char *v3; // rdi

  v3 = a1;
  if ( a2 )
  {
    memset_0(a1, 0, a2 << 6);
    v3 += 64 * a2;
  }
  return v3;
}
