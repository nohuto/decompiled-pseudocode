__int64 __fastcall detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::resize(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned int *a3)
{
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  __int64 result; // rax
  unsigned __int64 v8; // rcx
  unsigned int *v9; // r8
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rdx
  unsigned int *v14; // rdi
  unsigned __int64 i; // rcx
  unsigned __int64 v16; // rbx

  v5 = (__int64)(a1[1] - *a1) >> 2;
  if ( a2 <= v5 )
    return detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::clear_region(
             a1,
             (__int64)(4 * a2) >> 2);
  v6 = a2 - v5;
  result = detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::reserve_region(
             a1,
             v5,
             v6);
  v8 = 0LL;
  v9 = (unsigned int *)result;
  if ( v6 )
  {
    if ( v6 < 4 )
      goto LABEL_12;
    v10 = result + 4 * (v6 - 1);
    if ( v9 <= a3 && v10 >= (unsigned __int64)a3 )
      goto LABEL_12;
    v11 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
    do
    {
      v8 += 4LL;
      v12 = v8;
    }
    while ( v8 < v11 );
    v13 = 4 * v11;
    result = (int)*a3;
    v14 = v9;
    for ( i = v13 >> 2; i; --i )
      *v14++ = result;
    v9 = (unsigned int *)((char *)v9 + v13);
    v8 = v12;
    if ( v12 < v6 )
    {
LABEL_12:
      v16 = v6 - v8;
      do
      {
        result = *a3;
        *v9++ = result;
        --v16;
      }
      while ( v16 );
    }
  }
  return result;
}
