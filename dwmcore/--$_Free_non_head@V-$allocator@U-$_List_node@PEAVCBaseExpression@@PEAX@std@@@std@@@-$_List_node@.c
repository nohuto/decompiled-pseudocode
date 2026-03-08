/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@PEAVCBaseExpression@@PEAX@std@@@std@@@?$_List_node@PEAVCBaseExpression@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@PEAVCBaseExpression@@PEAX@std@@@1@PEAU01@@Z @ 0x1801DF1D8
 * Callers:
 *     ?clear@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x1800538B4 (-clear@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compare@PEAVCBaseExpression@@U-$ha.c)
 *     ??1DataSourceProxy@@UEAA@XZ @ 0x1801DF494 (--1DataSourceProxy@@UEAA@XZ.c)
 *     ??1CExpressionManager@@EEAA@XZ @ 0x18021368C (--1CExpressionManager@@EEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node<CBaseExpression *,void *>::_Free_non_head<std::allocator<std::_List_node<CBaseExpression *,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx

  *a2[1] = 0LL;
  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      std::_Deallocate<16,0>(v2, 0x18uLL);
      v2 = v3;
    }
    while ( v3 );
  }
}
