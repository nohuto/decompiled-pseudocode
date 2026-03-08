/*
 * XREFs of ?_Check_max_size@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@IEBAXXZ @ 0x180213CAC
 * Callers:
 *     ??$emplace@AEBQEAVCBaseExpression@@@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVCBaseExpression@@@std@@@std@@@std@@_N@1@AEBQEAVCBaseExpression@@@Z @ 0x180213588 (--$emplace@AEBQEAVCBaseExpression@@@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::_Check_max_size(
        __int64 a1)
{
  __int64 result; // rax

  result = 0xAAAAAAAAAAAAAAALL;
  if ( *(_QWORD *)(a1 + 16) == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("unordered_map/set too long");
  return result;
}
