/*
 * XREFs of _std::_Hash_std::_Umap_traits_Microsoft::WRL::ComPtr_IVirtualDesktop__Microsoft::WRL::ComPtr_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop__std::_Uhash_compare_Microsoft::WRL::ComPtr_IVirtualDesktop__std::hash_Microsoft::WRL::ComPtr_IVirtualDesktop____std::equal_to_Microsoft::WRL::ComPtr_IVirtualDesktop______std::allocator_std::pair_Microsoft::WRL::ComPtr_IVirtualDesktop__const__Microsoft::WRL::ComPtr_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop______0___::_Insert_unverified_std::pair_Microsoft::WRL::ComPtr_IVirtualDesktop__const__Microsoft::WRL::ComPtr_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop____std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_Microsoft::WRL::ComPtr_IVirtualDesktop__const__Microsoft::WRL::ComPtr_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop____________::_1_::catch$56 @ 0x1803E334D
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180090984 (_CxxThrowException_0.c)
 *     ?erase@?$list@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@std@@@std@@@2@@Z @ 0x1803E58EC (-erase@-$list@U-$pair@$$CBV-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V-$ComPtr@UIVirtualDesktop.c)
 */

void __fastcall __noreturn std::_Hash_std::_Umap_traits_Microsoft::WRL::ComPtr_IVirtualDesktop__Microsoft::WRL::ComPtr_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop__std::_Uhash_compare_Microsoft::WRL::ComPtr_IVirtualDesktop__std::hash_Microsoft::WRL::ComPtr_IVirtualDesktop____std::equal_to_Microsoft::WRL::ComPtr_IVirtualDesktop______std::allocator_std::pair_Microsoft::WRL::ComPtr_IVirtualDesktop__const__Microsoft::WRL::ComPtr_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop______0___::_Insert_unverified_std::pair_Microsoft::WRL::ComPtr_IVirtualDesktop__const__Microsoft::WRL::ComPtr_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop____std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_Microsoft::WRL::ComPtr_IVirtualDesktop__const__Microsoft::WRL::ComPtr_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop____________::_1_::catch_56(
        __int64 a1,
        __int64 a2)
{
  std::list<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>::erase(
    *(_QWORD *)(a2 + 96) + 8LL,
    a2 + 96,
    *(_QWORD *)(a2 + 120));
  throw;
}
