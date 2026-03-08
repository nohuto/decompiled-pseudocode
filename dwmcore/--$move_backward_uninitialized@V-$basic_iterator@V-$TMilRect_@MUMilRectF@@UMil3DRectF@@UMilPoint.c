/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@detail@@V?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@@detail@@YAXV?$basic_iterator@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@0@0V?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@@Z @ 0x1801AE4E0
 * Callers:
 *     ?reserve_region@?$vector_facade@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_K0@Z @ 0x1801B3EB0 (-reserve_region@-$vector_facade@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS_ea_1801B3EB0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::move_backward_uninitialized<detail::basic_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>(
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
