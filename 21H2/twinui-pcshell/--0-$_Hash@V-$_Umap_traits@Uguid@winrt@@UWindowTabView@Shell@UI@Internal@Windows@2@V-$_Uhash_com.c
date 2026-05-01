/*
 * XREFs of ??0?$_Hash@V?$_Umap_traits@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@9@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@1@AEBV?$allocator@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@1@@Z @ 0x1800F1B50
 * Callers:
 *     ??0WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBU?$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@5@AEBUWindowTabDataModel@2UI@345@Uevent_token@5@2@Z @ 0x1800F1C00 (--0WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBU-$com_ptr@UTabProxyWindowFac.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@std@@@2@@std@@QEAA@_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@1@AEBV?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@std@@@1@@Z @ 0x1800E77A0 (--0-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBUguid@win.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Hash<std::_Umap_traits<winrt::guid,winrt::Windows::Internal::UI::Shell::WindowTabView,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>>,0>>::_Hash<std::_Umap_traits<winrt::guid,winrt::Windows::Internal::UI::Shell::WindowTabView,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>>,0>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  *(_DWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  *v4 = v4;
  v4[1] = v4;
  *(_QWORD *)(a1 + 8) = v4;
  v7 = v4;
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::guid const,unsigned __int64>>>>>::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::guid const,unsigned __int64>>>>>(
    (_QWORD *)(a1 + 24),
    v5,
    &v7);
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  return a1;
}
