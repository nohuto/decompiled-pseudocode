/*
 * XREFs of _lambda_8ded4d93739c225b374c706a19b0781a_::operator()_std::pair_unsigned___int64_const__winrt::Windows::Internal::Shell::implementation::WindowData__&_ @ 0x1800E3C2C
 * Callers:
 *     std::for_each_std::_List_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned___int64_const__winrt::Windows::Internal::Shell::implementation::WindowData_________lambda_8ded4d93739c225b374c706a19b0781a___ @ 0x1800E6860 (std--for_each_std--_List_iterator_std--_List_val_std--_List_simple_types_std--pair_unsigned___in.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008F018 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??A?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_KU?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@std@@@2@@std@@QEAAAEA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800E8780 (--A-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_KU-$hash@V-$ba.c)
 *     ??A?$unordered_map@_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@QEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@AEB_K@Z @ 0x1800E8800 (--A-$unordered_map@_KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$hash@_K@2@.c)
 *     ?GetAppIdForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@_K@Z @ 0x1800EB0B0 (-GetAppIdForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA-AUhstring@6@_.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1800EF550 (-lower_bound@-$_Hash@V-$_Umap_traits@_KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@.c)
 *     ??$assign@Uhstring@winrt@@X@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBUhstring@winrt@@@Z @ 0x180264F4C (--$assign@Uhstring@winrt@@X@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEA.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18028EE30 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=4
HSTRING __fastcall lambda_8ded4d93739c225b374c706a19b0781a_::operator()_std::pair_unsigned___int64_const__winrt::Windows::Internal::Shell::implementation::WindowData____(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rbx
  HSTRING result; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  HSTRING v8; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v9[2]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-18h]
  __int64 v11; // [rsp+40h] [rbp-10h]

  v4 = *a1;
  std::_Hash<std::_Umap_traits<unsigned __int64,std::wstring,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::wstring>>,0>>::lower_bound(
    *a1,
    &v8,
    a2);
  result = *(HSTRING *)(v4 + 8);
  if ( v8 == result )
  {
    winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetAppIdForWindow(a1[2], &v8, *a2);
    v10 = 0LL;
    v11 = 7LL;
    LOWORD(v9[0]) = 0;
    std::wstring::assign<winrt::hstring,void>(v9);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v8);
    if ( v10 )
    {
      v6 = std::unordered_map<unsigned __int64,std::wstring>::operator[](*a1, a2);
      std::wstring::operator=(v6, v9);
      v7 = *(_QWORD *)a1[3];
      *(_QWORD *)std::unordered_map<std::wstring,unsigned __int64>::operator[](a1[1], v9) = v7;
    }
    return (HSTRING)std::wstring::_Tidy_deallocate(v9);
  }
  return result;
}
