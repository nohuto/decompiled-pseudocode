/*
 * XREFs of ??0?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_JV?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_J@std@@@2@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@1@AEBV?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_J@std@@@1@@Z @ 0x1800E7210
 * Callers:
 *     ?GetAllAppTabAllotment@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@XZ @ 0x1800EABCC (-GetAllAppTabAllotment@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$unord.c)
 *     ??0AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18011A5FC (--0AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@std@@@2@@std@@QEAA@_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@1@AEBV?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@std@@@1@@Z @ 0x1800E77A0 (--0-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBUguid@win.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Hash<std::_Umap_traits<std::wstring,__int64,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,__int64>>,0>>::_Hash<std::_Umap_traits<std::wstring,__int64,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,__int64>>,0>>(
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
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v4 = v4;
  v4[1] = v4;
  *(_QWORD *)(a1 + 8) = v4;
  v7 = v4;
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::guid const,unsigned __int64>>>>>::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::guid const,unsigned __int64>>>>>(
    a1 + 24,
    v5,
    &v7);
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  return a1;
}
