void *__fastcall std::deque<CMegaRect>::_Growmap(_QWORD *a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r12
  __int64 v6; // r15
  char *v7; // r14
  size_t v8; // rbx
  const void *v9; // rdx
  char *v10; // rbx
  size_t v11; // r8
  char *v12; // rcx
  void *result; // rax
  __int64 v14; // rcx

  v1 = a1[2];
  v3 = 1LL;
  if ( v1 )
    v3 = v1;
  while ( 1 )
  {
    v4 = v3 - v1;
    if ( v3 >= 8 )
    {
      if ( v4 )
        break;
    }
    if ( 0x7FFFFFFFFFFFFFFLL - v3 < v3 )
      std::_Xlength_error("deque<T> too long");
    v3 *= 2LL;
  }
  v5 = a1[3];
  if ( v3 > 0x1FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v6 = 8 * v5;
  v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(8 * v3);
  v8 = 8LL * a1[2] - 8 * v5;
  memmove_0(&v7[8 * v5], (const void *)(a1[1] + 8 * v5), v8);
  v9 = (const void *)a1[1];
  v10 = &v7[8 * v5 + v8];
  if ( v5 > v4 )
  {
    memmove_0(v10, v9, 8 * v4);
    memmove_0(v7, (const void *)(8 * v4 + a1[1]), v6 - 8 * v4);
    v12 = &v7[v6 - 8 * v4];
    v11 = 8 * v4;
  }
  else
  {
    memmove_0(v10, v9, 8 * v5);
    memset_0(&v10[v6], 0, 8 * (v4 - v5));
    v11 = 8 * v5;
    v12 = v7;
  }
  result = memset_0(v12, 0, v11);
  v14 = a1[1];
  if ( v14 )
    result = (void *)std::_Deallocate<16,0>(v14, 8LL * a1[2]);
  a1[1] = v7;
  a1[2] += v4;
  return result;
}
