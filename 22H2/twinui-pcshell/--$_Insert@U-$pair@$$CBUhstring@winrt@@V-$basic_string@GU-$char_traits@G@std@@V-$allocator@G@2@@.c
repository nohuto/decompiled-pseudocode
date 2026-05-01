/*
 * XREFs of ??$_Insert@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@?$list@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@1@$$QEAU?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1801185FC
 * Callers:
 *     ??$_Insert_unverified@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@U_Not_a_node_tag@2@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@U_Not_a_node_tag@1@@Z @ 0x180118CB0 (--$_Insert_unverified@U-$pair@$$CBUhstring@winrt@@V-$basic_string@GU-$char_traits@G@std@@V-$allo.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800E7D4C (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Tree_node@U-$pair@$$CBUShellTabGroupId@Tabs@Composabl.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800F4434 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::list<std::pair<winrt::hstring const,std::wstring>>::_Insert<std::pair<winrt::hstring const,std::wstring>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v6; // r14
  _QWORD *v7; // rsi
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v9; // [rsp+28h] [rbp-20h]

  if ( *(_QWORD *)(a1 + 8) == 0x492492492492492LL )
    std::_Xlength_error("list<T> too long");
  v6 = *(_QWORD **)(a2 + 8);
  v8 = a1;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  v9 = v7;
  winrt::hstring::hstring((winrt::hstring *)(v7 + 2), (winrt::impl **)a3);
  v7[5] = 0LL;
  v7[6] = 0LL;
  *(_OWORD *)(v7 + 3) = *(_OWORD *)(a3 + 8);
  *(_OWORD *)(v7 + 5) = *(_OWORD *)(a3 + 24);
  *(_QWORD *)(a3 + 24) = 0LL;
  *(_QWORD *)(a3 + 32) = 7LL;
  *(_WORD *)(a3 + 8) = 0;
  *v7 = a2;
  v7[1] = v6;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v7;
  *v6 = v7;
  v9 = 0LL;
  std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId const,Microsoft::WRL::ComPtr<IViewGroup>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId const,Microsoft::WRL::ComPtr<IViewGroup>>,void *>>>((__int64)&v8);
}
