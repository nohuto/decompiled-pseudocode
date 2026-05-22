/*
 * XREFs of ??$_Insert@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$list@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@V?$allocator@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180045734
 * Callers:
 *     ??$_Try_emplace@AEBK$$V@?$unordered_map@KUInitialPointerInfo@ResizeProcessor@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x180045988 (--$_Try_emplace@AEBK$$V@-$unordered_map@KUInitialPointerInfo@ResizeProcessor@@U-$hash@K@std@@U-$.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18003C200 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
void *__fastcall std::list<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>>::_Insert<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD **a4)
{
  _QWORD *v7; // rsi
  _QWORD *v8; // rdi
  void *result; // rax

  if ( *(_QWORD *)(a1 + 8) == 0x2AAAAAAAAAAAAAALL )
    std::_Xlength_error("list<T> too long");
  v7 = *(_QWORD **)(a2 + 8);
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x60uLL);
  *((_DWORD *)v8 + 4) = **a4;
  result = memset_0((char *)v8 + 20, 0, 0x48uLL);
  *v8 = a2;
  v8[1] = v7;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v8;
  *v7 = v8;
  return result;
}
