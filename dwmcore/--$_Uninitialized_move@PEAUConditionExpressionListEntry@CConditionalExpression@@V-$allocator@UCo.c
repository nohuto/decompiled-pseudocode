/*
 * XREFs of ??$_Uninitialized_move@PEAUConditionExpressionListEntry@CConditionalExpression@@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@YAPEAUConditionExpressionListEntry@CConditionalExpression@@QEAU12@0PEAU12@AEAV?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@0@@Z @ 0x180223F74
 * Callers:
 *     ??$_Emplace_reallocate@UConditionExpressionListEntry@CConditionalExpression@@@?$vector@UConditionExpressionListEntry@CConditionalExpression@@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@QEAAPEAUConditionExpressionListEntry@CConditionalExpression@@QEAU23@$$QEAU23@@Z @ 0x180223E44 (--$_Emplace_reallocate@UConditionExpressionListEntry@CConditionalExpression@@@-$vector@UConditio.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@YAXPEAUConditionExpressionListEntry@CConditionalExpression@@QEAU12@AEAV?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@0@@Z @ 0x180223DE8 (--$_Destroy_range@V-$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@.c)
 */

__int64 *__fastcall std::_Uninitialized_move<CConditionalExpression::ConditionExpressionListEntry *>(
        char *a1,
        char *a2,
        __int64 *a3)
{
  __int64 *v3; // rbx
  _QWORD *v4; // r8
  signed __int64 v5; // r9
  __int64 *v6; // rcx
  _QWORD *v7; // rcx

  v3 = a3;
  if ( a1 != a2 )
  {
    v4 = a3 + 1;
    v5 = a1 - (char *)v3;
    do
    {
      *v3 = 0LL;
      v6 = (_QWORD *)((char *)v4 + v5 - 8);
      if ( v3 != v6 )
      {
        *v3 = *v6;
        *v6 = 0LL;
      }
      v7 = (_QWORD *)((char *)v4 + v5);
      *v4 = 0LL;
      if ( v4 != (_QWORD *)((char *)v4 + v5) )
      {
        *v4 = *v7;
        *v7 = 0LL;
      }
      v4 += 2;
      v3 += 2;
    }
    while ( (char *)v4 + v5 - 8 != a2 );
  }
  std::_Destroy_range<std::allocator<CConditionalExpression::ConditionExpressionListEntry>>(v3, v3);
  return v3;
}
