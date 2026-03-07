__int64 __fastcall detail::move_backward_uninitialized<detail::basic_iterator<unsigned short>,stdext::checked_array_iterator<unsigned short *>>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 result; // rax
  __int64 v5; // r10
  _WORD *v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx

  result = *a2;
  if ( *a2 != *a1 )
  {
    v5 = *a3;
    do
    {
      v6 = (_WORD *)(result - 2);
      *a2 = (__int64)v6;
      if ( !v5 || (v7 = a3[2]) == 0 || (v8 = v7 - 1, a3[2] = v8, v8 >= a3[1]) )
        _invalid_parameter_noinfo_noreturn();
      *(_WORD *)(v5 + 2 * v8) = *v6;
      result = *a2;
    }
    while ( *a2 != *a1 );
  }
  return result;
}
