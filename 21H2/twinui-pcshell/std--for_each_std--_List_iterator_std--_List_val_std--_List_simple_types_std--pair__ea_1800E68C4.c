/*
 * XREFs of std::for_each_std::_List_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned___int64_const__unsigned___int64_________lambda_8fbe8e0abb0a778915de0e91094d34a1___ @ 0x1800E68C4
 * Callers:
 *     ?SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ @ 0x1800EC694 (-SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ.c)
 * Callees:
 *     ?at@?$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U?$hash@_K@std@@U?$equal_to@_K@8@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@@std@@QEAAAEAUWindowData@implementation@Shell@Internal@Windows@winrt@@AEB_K@Z @ 0x1800EE970 (-at@-$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U-$hash@_K@std@@U.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1800EF550 (-lower_bound@-$_Hash@V-$_Umap_traits@_KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@.c)
 *     ?SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x1800F2BA0 (-SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFi.c)
 */

_OWORD *__fastcall std::for_each_std::_List_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned___int64_const__unsigned___int64_________lambda_8fbe8e0abb0a778915de0e91094d34a1___(
        _OWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int **a4)
{
  unsigned int *v8; // rsi
  __int64 v9; // r12
  __int64 v10; // rax
  _OWORD *result; // rax
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  while ( a2 != a3 )
  {
    v8 = *a4;
    v9 = (__int64)(*a4 + 152);
    std::_Hash<std::_Umap_traits<unsigned __int64,std::wstring,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::wstring>>,0>>::lower_bound(
      v9,
      &v12,
      a2 + 2);
    if ( v12 != *((_QWORD *)v8 + 77) )
    {
      v10 = std::unordered_map<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData>::at(
              v9,
              a2 + 2);
      *(_QWORD *)a4[1] += winrt::Windows::Internal::Shell::implementation::WindowData::SyncWindowTabDataModel(
                            v10,
                            (*a4)[194],
                            a2[3]);
    }
    a2 = (_QWORD *)*a2;
  }
  result = a1;
  *a1 = *(_OWORD *)a4;
  return result;
}
