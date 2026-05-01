/*
 * XREFs of ??$_Insert@AEBUpiecewise_construct_t@std@@V?$tuple@AEBUhstring@winrt@@@2@V?$tuple@$$V@2@@?$list@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBUhstring@winrt@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801183A4
 * Callers:
 *     ??A?$unordered_map@Uhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@Uhstring@winrt@@@4@U?$equal_to@Uhstring@winrt@@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@4@@std@@QEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@AEBUhstring@winrt@@@Z @ 0x18011B75C (--A-$unordered_map@Uhstring@winrt@@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800E7D4C (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Tree_node@U-$pair@$$CBUShellTabGroupId@Tabs@Composabl.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800F4434 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::list<std::pair<winrt::hstring const,std::wstring>>::_Insert<std::piecewise_construct_t const &,std::tuple<winrt::hstring const &>,std::tuple<>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        winrt::impl ***a4)
{
  _QWORD *v7; // r14
  _QWORD *v8; // rsi
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v10; // [rsp+28h] [rbp-20h]

  if ( *(_QWORD *)(a1 + 8) == 0x492492492492492LL )
    std::_Xlength_error("list<T> too long");
  v7 = *(_QWORD **)(a2 + 8);
  v9 = a1;
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  v10 = v8;
  winrt::hstring::hstring((winrt::hstring *)(v8 + 2), *a4);
  v8[5] = 0LL;
  v8[6] = 7LL;
  *((_WORD *)v8 + 12) = 0;
  *v8 = a2;
  v8[1] = v7;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v8;
  *v7 = v8;
  v10 = 0LL;
  std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId const,Microsoft::WRL::ComPtr<IViewGroup>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId const,Microsoft::WRL::ComPtr<IViewGroup>>,void *>>>((__int64)&v9);
}
