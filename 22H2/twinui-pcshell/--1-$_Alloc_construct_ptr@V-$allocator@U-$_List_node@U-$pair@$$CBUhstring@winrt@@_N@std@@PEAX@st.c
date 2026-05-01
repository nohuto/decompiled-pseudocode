/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800E7D94
 * Callers:
 *     _std::list_winrt::guid_std::allocator_winrt::guid___::_Insert_winrt::guid_const_&__::_1_::dtor$0 @ 0x1800E466B (_std--list_winrt--guid_std--allocator_winrt--guid___--_Insert_winrt--guid_const_-__--_1_--dtor$0.c)
 *     _std::list_std::pair_unsigned___int64_const__unsigned___int64__std::allocator_std::pair_unsigned___int64_const__unsigned___int64_____::emplace_front_std::piecewise_construct_t_const_&_std::tuple_unsigned___int64_const_&__std::tuple_____::_1_::dtor$4 @ 0x1800E6288 (_std--list_std--pair_unsigned___int64_const__unsigned___int64__std--allocator_std--pair_unsigned.c)
 *     ??$_Insert@AEBUpiecewise_construct_t@std@@V?$tuple@AEBUhstring@winrt@@@2@V?$tuple@$$V@2@@?$list@U?$pair@$$CBUhstring@winrt@@_N@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@_N@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBUhstring@winrt@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180118484 (--$_Insert@AEBUpiecewise_construct_t@std@@V-$tuple@AEBUhstring@winrt@@@2@V-$tuple@$_ea_180118484.c)
 *     _std::list_std::pair_winrt::hstring_const__bool__std::allocator_std::pair_winrt::hstring_const__bool_____::_Insert_std::piecewise_construct_t_const_&_std::tuple_winrt::hstring_const_&__std::tuple_____::_1_::dtor$0 @ 0x180118536 (_std--list_std--pair_winrt--hstring_const__bool__std--allocator_std--pair_winrt--hstring_const__.c)
 *     ??$_Insert@U?$pair@$$CBUhstring@winrt@@_N@std@@@?$list@U?$pair@$$CBUhstring@winrt@@_N@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@_N@std@@@std@@@std@@U_Iterator_base0@2@@1@$$QEAU?$pair@$$CBUhstring@winrt@@_N@1@@Z @ 0x1801186F4 (--$_Insert@U-$pair@$$CBUhstring@winrt@@_N@std@@@-$list@U-$pair@$$CBUhstring@winrt@@_N@std@@V-$al.c)
 *     _std::list_std::pair_winrt::hstring_const__bool__std::allocator_std::pair_winrt::hstring_const__bool_____::_Insert_std::pair_winrt::hstring_const__bool____::_1_::dtor$0 @ 0x1801187A9 (_std--list_std--pair_winrt--hstring_const__bool__std--allocator_std--pair_winrt--hs_ea_1801187A9.c)
 *     _std::list_std::pair_Microsoft::WRL::ComPtr_IVirtualDesktop__const__Microsoft::WRL::ComPtr_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop____std::allocator_std::pair_Microsoft::WRL::ComPtr_IVirtualDesktop__const__Microsoft::WRL::ComPtr_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop_______::_Insert_Microsoft::WRL::ComPtr_IVirtualDesktop__&_Microsoft::WRL::ComPtr_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop__&__::_1_::dtor$0 @ 0x1803E2EB7 (_std--list_std--pair_Microsoft--WRL--ComPtr_IVirtualDesktop__const__Microsoft--WRL--ComPtr_Windo.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<winrt::hstring const,bool>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<winrt::hstring const,bool>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x20);
}
