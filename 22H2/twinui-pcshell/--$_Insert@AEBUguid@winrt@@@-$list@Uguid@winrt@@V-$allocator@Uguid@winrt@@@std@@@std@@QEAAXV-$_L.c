/*
 * XREFs of ??$_Insert@AEBUguid@winrt@@@?$list@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@Uguid@winrt@@@std@@@std@@U_Iterator_base0@2@@1@AEBUguid@winrt@@@Z @ 0x1800E45E0
 * Callers:
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x1800EC5DC (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 *     ??$_Insert_unverified@$$CBUguid@winrt@@U_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@Uguid@winrt@@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@Uguid@winrt@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@Uguid@winrt@@@std@@@std@@@std@@_N@1@$$QEBUguid@winrt@@U_Not_a_node_tag@1@@Z @ 0x1800F130C (--$_Insert_unverified@$$CBUguid@winrt@@U_Not_a_node_tag@std@@@-$_Hash@V-$_Uset_traits@Uguid@winr.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::list<winrt::guid>::_Insert<winrt::guid const &>(__int64 a1, __int64 a2, _OWORD *a3)
{
  _QWORD *v6; // rdi
  _QWORD *result; // rax

  if ( *(_QWORD *)(a1 + 8) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("list<T> too long");
  v6 = *(_QWORD **)(a2 + 8);
  result = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *((_OWORD *)result + 1) = *a3;
  *result = a2;
  result[1] = v6;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = result;
  *v6 = result;
  return result;
}
