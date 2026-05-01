/*
 * XREFs of ??$emplace_front@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@2@V?$tuple@$$V@2@@?$list@U?$pair@$$CB_K_K@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@QEAAAEAU?$pair@$$CB_K_K@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800E61E8
 * Callers:
 *     ??$_Try_emplace@AEB_K$$V@?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x1800E5710 (--$_Try_emplace@AEB_K$$V@-$unordered_map@_K_KU-$hash@_K@std@@U-$equal_to@_K@2@V-$allocator@U-$pa.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::list<std::pair<unsigned __int64 const,unsigned __int64>>::emplace_front<std::piecewise_construct_t const &,std::tuple<unsigned __int64 const &>,std::tuple<>>(
        __int64 **a1,
        __int64 a2,
        _QWORD **a3)
{
  __int64 v5; // rbx
  _QWORD *v6; // rdi
  _QWORD *v7; // rax

  v5 = **a1;
  if ( a1[1] == (__int64 *)0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("list<T> too long");
  v6 = *(_QWORD **)(v5 + 8);
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  v7[2] = **a3;
  v7[3] = 0LL;
  *v7 = v5;
  v7[1] = v6;
  a1[1] = (__int64 *)((char *)a1[1] + 1);
  *(_QWORD *)(v5 + 8) = v7;
  *v6 = v7;
  return **a1 + 16;
}
