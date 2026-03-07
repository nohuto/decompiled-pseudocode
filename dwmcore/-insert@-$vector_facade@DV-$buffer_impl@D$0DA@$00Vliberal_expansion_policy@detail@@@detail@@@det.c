_QWORD *__fastcall detail::vector_facade<char,detail::buffer_impl<char,48,1,detail::liberal_expansion_policy>>::insert(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned __int64 a4,
        _BYTE *a5)
{
  __int64 v6; // r12
  __int64 v9; // rax
  int v10; // edx
  unsigned __int64 v11; // r8
  _BYTE *v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rbx
  _QWORD *result; // rax

  v6 = *a3 - *a1;
  v9 = detail::vector_facade<char,detail::buffer_impl<char,48,1,detail::liberal_expansion_policy>>::reserve_region(
         a1,
         v6,
         a4);
  v11 = 0LL;
  v12 = (_BYTE *)v9;
  if ( a4 )
  {
    if ( a4 < 0x10 )
      goto LABEL_8;
    v13 = v9 + a4 - 1;
    if ( v12 <= a5 && v13 >= (unsigned __int64)a5 )
      goto LABEL_8;
    v14 = a4 & 0xFFFFFFFFFFFFFFF0uLL;
    do
    {
      v11 += 16LL;
      v15 = v11;
    }
    while ( v11 < v14 );
    LOBYTE(v10) = *a5;
    memset_0(v12, v10, a4 & 0xFFFFFFFFFFFFFFF0uLL);
    v12 += v14;
    v11 = v15;
    if ( v15 < a4 )
    {
LABEL_8:
      v16 = a4 - v11;
      do
      {
        *v12++ = *a5;
        --v16;
      }
      while ( v16 );
    }
  }
  result = a2;
  *a2 = v6 + *a1;
  return result;
}
