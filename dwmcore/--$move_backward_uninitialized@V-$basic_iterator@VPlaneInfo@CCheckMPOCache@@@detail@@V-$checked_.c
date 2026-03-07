__int64 __fastcall detail::move_backward_uninitialized<detail::basic_iterator<CCheckMPOCache::PlaneInfo>,stdext::checked_array_iterator<CCheckMPOCache::PlaneInfo *>>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 result; // rax
  __int64 v6; // r11
  _OWORD *v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  _OWORD *v10; // rcx

  result = *a2;
  if ( *a2 != *a1 )
  {
    v6 = *a3;
    do
    {
      v7 = (_OWORD *)(result - 160);
      *a2 = result - 160;
      if ( !v6 || (v8 = a3[2]) == 0 || (v9 = v8 - 1, a3[2] = v9, v9 >= a3[1]) )
        _invalid_parameter_noinfo_noreturn();
      v10 = (_OWORD *)(v6 + 160 * v9);
      *v10 = *v7;
      v10[1] = v7[1];
      v10[2] = v7[2];
      v10[3] = v7[3];
      v10[4] = v7[4];
      v10[5] = v7[5];
      v10[6] = v7[6];
      v10[7] = v7[7];
      v10[8] = v7[8];
      v10[9] = v7[9];
      result = *a2;
    }
    while ( *a2 != *a1 );
  }
  return result;
}
