char *__fastcall std::_Uninitialized_value_construct_n<std::allocator<CComputeScribbleScheduler::ScribbleFrame>>(
        char *a1,
        __int64 a2)
{
  char *v3; // rdi

  v3 = a1;
  if ( a2 )
  {
    memset_0(a1, 0, 32 * a2);
    v3 += 32 * a2;
  }
  return v3;
}
