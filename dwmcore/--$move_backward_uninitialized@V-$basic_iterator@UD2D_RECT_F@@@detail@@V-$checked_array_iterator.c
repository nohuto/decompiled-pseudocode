/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@UD2D_RECT_F@@@detail@@V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@detail@@YAXV?$basic_iterator@UD2D_RECT_F@@@0@0V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@Z @ 0x1800307F8
 * Callers:
 *     ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x18002E040 (-reserve_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansio.c)
 *     ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x18002EDFC (-reserve_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansio.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::move_backward_uninitialized<detail::basic_iterator<D2D_RECT_F>,stdext::checked_array_iterator<D2D_RECT_F *>>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 result; // rax
  __int64 v4; // r10
  _OWORD *v5; // r9
  __int64 v6; // rax
  unsigned __int64 v7; // rax

  result = *a2;
  if ( *a2 != *a1 )
  {
    v4 = *a3;
    do
    {
      v5 = (_OWORD *)(result - 16);
      *a2 = result - 16;
      if ( !v4 || (v6 = a3[2]) == 0 || (v7 = v6 - 1, a3[2] = v7, v7 >= a3[1]) )
        _invalid_parameter_noinfo_noreturn();
      *(_OWORD *)(v4 + 16 * v7) = *v5;
      result = *a2;
    }
    while ( *a2 != *a1 );
  }
  return result;
}
