_QWORD *__fastcall std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4)
{
  __int64 v4; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  _WORD *v12; // rax
  _WORD *v13; // rbp

  v4 = 0x7FFFFFFFFFFFFFFELL;
  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlen_string();
  v8 = a1[3];
  v9 = a2 | 7;
  if ( v9 > 0x7FFFFFFFFFFFFFFELL || (v10 = v8 >> 1, v8 > 0x7FFFFFFFFFFFFFFELL - (v8 >> 1)) )
  {
    v11 = 0x7FFFFFFFFFFFFFFFLL;
  }
  else
  {
    v4 = v10 + v8;
    if ( v9 >= v10 + v8 )
      v4 = v9;
    v11 = v4 + 1;
    if ( (unsigned __int64)(v4 + 1) > 0x7FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
  }
  v12 = (_WORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(2 * v11);
  a1[3] = v4;
  a1[2] = a2;
  v13 = v12;
  memcpy_0(v12, a4, 2 * a2);
  v13[a2] = 0;
  if ( v8 >= 8 )
    std::_Deallocate<16,0>(*a1, 2 * v8 + 2);
  *a1 = v13;
  return a1;
}
