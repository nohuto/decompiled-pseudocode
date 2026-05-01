/*
 * XREFs of ?equal_range@?$_Hash@V?$_Umap_traits@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@9@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@std@@@std@@@std@@V12@@2@AEBUguid@winrt@@@Z @ 0x1800EEA20
 * Callers:
 *     ?RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEBV?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@8@@Z @ 0x1800EC284 (-RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV-.c)
 *     ?RemoveTab@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x1800F28E4 (-RemoveTab@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@2@_K@Z @ 0x1800EDA60 (-_End@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std@@U-$.c)
 *     ?hash_data@impl@winrt@@YA_KPEBX_K@Z @ 0x1800EF3BC (-hash_data@impl@winrt@@YA_KPEBX_K@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<winrt::guid,winrt::Windows::Internal::UI::Shell::WindowTabView,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>>,0>>::equal_range(
        _QWORD *a1,
        _QWORD *a2,
        winrt::impl *a3)
{
  unsigned __int64 v6; // rbp
  __int64 i; // r10
  __int64 v8; // r14
  __int64 **v9; // rax
  __int64 *v10; // r10
  _QWORD *v11; // rax
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // rax
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v6 = a1[6] & winrt::impl::hash_data(a3, (const void *)0x10, (unsigned __int64)a3);
  for ( i = *(_QWORD *)(a1[3] + 16 * v6); ; i = *v10 )
  {
    v8 = i;
    v9 = (__int64 **)std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::_End(
                       (__int64)a1,
                       &v16,
                       v6);
    if ( v10 == *v9 )
      break;
    if ( v10[2] == *(_QWORD *)a3 && v10[3] == *((_QWORD *)a3 + 1) )
    {
      do
        v11 = std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::_End(
                (__int64)a1,
                &v16,
                v6);
      while ( v12 != *v11 && *(_QWORD *)a3 == *(_QWORD *)(v12 + 16) && *((_QWORD *)a3 + 1) == *(_QWORD *)(v12 + 24) );
      if ( v8 != v12 )
      {
        *a2 = v13;
        a2[1] = v12;
        return a2;
      }
      break;
    }
  }
  v14 = a1[1];
  *a2 = v14;
  a2[1] = v14;
  return a2;
}
