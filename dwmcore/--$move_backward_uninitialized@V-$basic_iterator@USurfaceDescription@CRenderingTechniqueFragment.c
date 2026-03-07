__int64 __fastcall detail::move_backward_uninitialized<detail::basic_iterator<CRenderingTechniqueFragment::SurfaceDescription>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 result; // rax
  __int64 v5; // r10
  __int64 v6; // r9
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rcx

  result = *a2;
  if ( *a2 != *a1 )
  {
    v5 = *a3;
    do
    {
      v6 = result - 12;
      *a2 = result - 12;
      if ( !v5 || (v7 = a3[2]) == 0 || (v8 = v7 - 1, a3[2] = v8, v8 >= a3[1]) )
        _invalid_parameter_noinfo_noreturn();
      v9 = 3 * v8;
      *(_QWORD *)(v5 + 4 * v9) = *(_QWORD *)v6;
      *(_DWORD *)(v5 + 4 * v9 + 8) = *(_DWORD *)(v6 + 8);
      result = *a2;
    }
    while ( *a2 != *a1 );
  }
  return result;
}
