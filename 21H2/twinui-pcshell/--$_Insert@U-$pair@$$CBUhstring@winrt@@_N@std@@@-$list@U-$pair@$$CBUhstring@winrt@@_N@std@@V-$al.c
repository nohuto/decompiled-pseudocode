/*
 * XREFs of ??$_Insert@U?$pair@$$CBUhstring@winrt@@_N@std@@@?$list@U?$pair@$$CBUhstring@winrt@@_N@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@_N@std@@@std@@@std@@U_Iterator_base0@2@@1@$$QEAU?$pair@$$CBUhstring@winrt@@_N@1@@Z @ 0x180118864
 * Callers:
 *     ??$_Insert_unverified@U?$pair@$$CBUhstring@winrt@@_N@std@@U_Not_a_node_tag@2@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@_N@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBUhstring@winrt@@_N@1@U_Not_a_node_tag@1@@Z @ 0x180118FC4 (--$_Insert_unverified@U-$pair@$$CBUhstring@winrt@@_N@std@@U_Not_a_node_tag@2@@-$_Hash@V-$_Umap_t.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800E7F04 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@_N@std@@PEAX@st.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800F45A4 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::list<std::pair<winrt::hstring const,bool>>::_Insert<std::pair<winrt::hstring const,bool>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v6; // r14
  _QWORD *v7; // rsi
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v9; // [rsp+28h] [rbp-20h]

  if ( *(_QWORD *)(a1 + 8) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("list<T> too long");
  v6 = *(_QWORD **)(a2 + 8);
  v8 = a1;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  v9 = v7;
  winrt::hstring::hstring((winrt::hstring *)(v7 + 2), (winrt::impl **)a3);
  *((_BYTE *)v7 + 24) = *(_BYTE *)(a3 + 8);
  *v7 = a2;
  v7[1] = v6;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v7;
  *v6 = v7;
  v9 = 0LL;
  std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<winrt::hstring const,bool>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<winrt::hstring const,bool>,void *>>>((__int64)&v8);
}
