/*
 * XREFs of ??$_Find_last@PEAVCBaseExpression@@@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@PEAVCBaseExpression@@PEAX@std@@@1@AEBQEAVCBaseExpression@@_K@Z @ 0x1800BC384
 * Callers:
 *     ??$find@X@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVCBaseExpression@@@std@@@std@@@1@AEBQEAVCBaseExpression@@@Z @ 0x1800BC14C (--$find@X@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compare@PEAVCBaseExpression@@U-.c)
 *     ??$emplace@AEAPEAVCBaseExpression@@@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVCBaseExpression@@@std@@@std@@@std@@_N@1@AEAPEAVCBaseExpression@@@Z @ 0x1800BC1A8 (--$emplace@AEAPEAVCBaseExpression@@@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compa.c)
 *     ?EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x1800BC29C (-EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ??$emplace@AEBQEAVCBaseExpression@@@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVCBaseExpression@@@std@@@std@@@std@@_N@1@AEBQEAVCBaseExpression@@@Z @ 0x180213588 (--$emplace@AEBQEAVCBaseExpression@@@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compa.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::_Find_last<CBaseExpression *>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  __int64 v4; // r11
  _QWORD *v5; // r10
  __int64 v6; // rax
  _QWORD *v7; // r9

  v4 = a1[3];
  v5 = (_QWORD *)a1[1];
  v6 = 2 * (a4 & a1[6]);
  v7 = *(_QWORD **)(v4 + 16 * (a4 & a1[6]) + 8);
  if ( v7 == v5 )
  {
    *a2 = v5;
LABEL_3:
    a2[1] = 0LL;
  }
  else
  {
    while ( *a3 != v7[2] )
    {
      if ( v7 == *(_QWORD **)(v4 + 8 * v6) )
      {
        *a2 = v7;
        goto LABEL_3;
      }
      v7 = (_QWORD *)v7[1];
    }
    *a2 = *v7;
    a2[1] = v7;
  }
  return a2;
}
