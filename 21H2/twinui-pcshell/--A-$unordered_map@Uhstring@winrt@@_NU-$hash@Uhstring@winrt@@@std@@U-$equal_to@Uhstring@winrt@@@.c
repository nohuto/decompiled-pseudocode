/*
 * XREFs of ??A?$unordered_map@Uhstring@winrt@@_NU?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@@std@@QEAAAEA_NAEBUhstring@winrt@@@Z @ 0x18011B94C
 * Callers:
 *     ?HandlePackageUninstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageUninstallingEventArgs@856@@Z @ 0x180122720 (-HandlePackageUninstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA.c)
 * Callees:
 *     ??$_Insert@AEBUpiecewise_construct_t@std@@V?$tuple@AEBUhstring@winrt@@@2@V?$tuple@$$V@2@@?$list@U?$pair@$$CBUhstring@winrt@@_N@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@_N@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBUhstring@winrt@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801185F4 (--$_Insert@AEBUpiecewise_construct_t@std@@V-$tuple@AEBUhstring@winrt@@@2@V-$tuple@$_ea_1801185F4.c)
 *     ??$_Insert_unverified@U?$pair@$$CBUhstring@winrt@@_N@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@_N@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@_N@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBUhstring@winrt@@_N@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@_N@std@@@std@@@std@@@1@@Z @ 0x180119188 (--$_Insert_unverified@U-$pair@$$CBUhstring@winrt@@_N@std@@V-$_List_unchecked_iterator@V-$_List_v.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@_N@std@@@std@@@std@@@2@AEBUhstring@winrt@@@Z @ 0x18012850C (-lower_bound@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@_NV-$_Uhash_compare@Uhstring@winrt@@U-$hash.c)
 */

winrt::impl **__fastcall std::unordered_map<winrt::hstring,bool>::operator[](winrt::impl **a1, winrt::impl **a2)
{
  __int64 v3; // r8
  winrt::impl **v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  winrt::impl **v8; // [rsp+30h] [rbp-18h] BYREF
  winrt::impl **v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = a1;
  std::_Hash<std::_Umap_traits<winrt::hstring,bool,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,bool>>,0>>::lower_bound(
    a1,
    &v9,
    a2);
  v4 = v9;
  if ( v9 == (winrt::impl **)qword_180652058 )
  {
    v5 = *(_QWORD *)qword_180652058;
    v9 = a2;
    std::list<std::pair<winrt::hstring const,bool>>::_Insert<std::piecewise_construct_t const &,std::tuple<winrt::hstring const &>,std::tuple<>>(
      (__int64)&qword_180652058,
      v5,
      v3,
      &v9);
    std::_Hash<std::_Umap_traits<winrt::hstring,bool,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,bool>>,0>>::_Insert_unverified<std::pair<winrt::hstring const,bool>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::hstring const,bool>>>>>(
      v6,
      (__int64)&v8,
      *(_QWORD *)qword_180652058 + 16LL,
      *(_QWORD *)qword_180652058);
    v4 = v8;
  }
  return v4 + 3;
}
