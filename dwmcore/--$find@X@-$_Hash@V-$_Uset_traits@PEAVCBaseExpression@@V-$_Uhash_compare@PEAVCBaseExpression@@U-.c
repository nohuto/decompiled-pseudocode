/*
 * XREFs of ??$find@X@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVCBaseExpression@@@std@@@std@@@1@AEBQEAVCBaseExpression@@@Z @ 0x1800BC14C
 * Callers:
 *     ?RemoveExpressionToBeRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x180213B68 (-RemoveExpressionToBeRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 * Callees:
 *     ??$_Find_last@PEAVCBaseExpression@@@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@PEAVCBaseExpression@@PEAX@std@@@1@AEBQEAVCBaseExpression@@_K@Z @ 0x1800BC384 (--$_Find_last@PEAVCBaseExpression@@@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compa.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800D7984 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::find<void>(
        unsigned __int64 a1,
        _QWORD *a2,
        const unsigned __int8 *a3)
{
  unsigned __int64 appended; // rax
  __int64 v6; // r11
  __int64 v7; // r8
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  appended = std::_Fnv1a_append_bytes(a1, a3, 8uLL);
  v7 = *(_QWORD *)(std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::_Find_last<CBaseExpression *>(
                     a1,
                     v9,
                     v6,
                     appended)
                 + 8);
  if ( !v7 )
    v7 = *(_QWORD *)(a1 + 8);
  *a2 = v7;
  return a2;
}
