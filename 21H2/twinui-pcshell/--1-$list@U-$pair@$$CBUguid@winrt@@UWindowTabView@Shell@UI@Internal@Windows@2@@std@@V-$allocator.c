/*
 * XREFs of ??1?$list@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@2@@std@@QEAA@XZ @ 0x1800F1EF8
 * Callers:
 *     _std::_Hash_std::_Umap_traits_winrt::guid_winrt::Windows::Internal::UI::Shell::WindowTabView_std::_Uhash_compare_winrt::guid_std::hash_winrt::guid__std::equal_to_winrt::guid____std::allocator_std::pair_winrt::guid_const__winrt::Windows::Internal::UI::Shell::WindowTabView____0___::_Hash_std::_Umap_traits_winrt::guid_winrt::Windows::Internal::UI::Shell::WindowTabView_std::_Uhash_compare_winrt::guid_std::hash_winrt::guid__std::equal_to_winrt::guid____std::allocator_std::pair_winrt::guid_const__winrt::Windows::Internal::UI::Shell::WindowTabView____0____::_1_::dtor$0 @ 0x1800F1BB8 (_std--_Hash_std--_Umap_traits_winrt--guid_winrt--Windows--Internal--UI--Shell--Wind_ea_1800F1BB8.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800F1278 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@In.c)
 */

void __fastcall std::list<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>>::~list<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>>(
        __int64 *a1)
{
  std::_List_node<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16,0>((void *)*a1, (const struct std::nothrow_t *)0x28);
}
