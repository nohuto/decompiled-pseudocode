/*
 * XREFs of ?at@?$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U?$hash@_K@std@@U?$equal_to@_K@8@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@@std@@QEAAAEAUWindowData@implementation@Shell@Internal@Windows@winrt@@AEB_K@Z @ 0x1800EE800
 * Callers:
 *     std::for_each_std::_List_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned___int64_const__unsigned___int64_________lambda_8fbe8e0abb0a778915de0e91094d34a1___ @ 0x1800E6754 (std--for_each_std--_List_iterator_std--_List_val_std--_List_simple_types_std--pair__ea_1800E6754.c)
 *     ?ActivateTab@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_KUguid@6@@Z @ 0x1800E89A4 (-ActivateTab@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_KUguid@6@@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$2 @ 0x1800E8EE0 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActiva_ea_1800E8EE0.c)
 *     ?OnActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelActiveTabChangedEventArgs@38456@@Z @ 0x1800EB7A0 (-OnActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTa.c)
 *     ?OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelTabsChangedEventArgs@38456@@Z @ 0x1800EBAC0 (-OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabData.c)
 *     ?UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x1800ECC08 (-UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z.c)
 *     ?ViewVirtualDesktopChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@@Z @ 0x1800ECFE0 (-ViewVirtualDesktopChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUI.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1800EF3E0 (-lower_bound@-$_Hash@V-$_Umap_traits@_KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@.c)
 */

__int64 __fastcall std::unordered_map<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData>::at(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  std::_Hash<std::_Umap_traits<unsigned __int64,std::wstring,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::wstring>>,0>>::lower_bound(
    a1,
    &v5,
    a2);
  v3 = v5;
  if ( v5 == *(_QWORD *)(a1 + 8) )
  {
    std::_Xout_of_range("invalid unordered_map<K, T> key");
    __debugbreak();
  }
  return v3 + 24;
}
