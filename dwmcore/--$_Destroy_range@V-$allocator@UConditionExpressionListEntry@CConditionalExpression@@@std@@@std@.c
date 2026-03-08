/*
 * XREFs of ??$_Destroy_range@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@YAXPEAUConditionExpressionListEntry@CConditionalExpression@@QEAU12@AEAV?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@0@@Z @ 0x180223DE8
 * Callers:
 *     ??$_Uninitialized_move@PEAUConditionExpressionListEntry@CConditionalExpression@@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@YAPEAUConditionExpressionListEntry@CConditionalExpression@@QEAU12@0PEAU12@AEAV?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@0@@Z @ 0x180223F74 (--$_Uninitialized_move@PEAUConditionExpressionListEntry@CConditionalExpression@@V-$allocator@UCo.c)
 *     ??1CConditionalExpression@@UEAA@XZ @ 0x18022404C (--1CConditionalExpression@@UEAA@XZ.c)
 *     ?_Change_array@?$vector@UConditionExpressionListEntry@CConditionalExpression@@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@AEAAXQEAUConditionExpressionListEntry@CConditionalExpression@@_K1@Z @ 0x18022513C (-_Change_array@-$vector@UConditionExpressionListEntry@CConditionalExpression@@V-$allocator@UCond.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C8D4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<CConditionalExpression::ConditionExpressionListEntry>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax
  __int64 v5; // rcx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v3 + 1);
      v5 = *v3;
      if ( *v3 )
      {
        *v3 = 0LL;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      v3 += 2;
    }
    while ( v3 != a2 );
  }
  return result;
}
