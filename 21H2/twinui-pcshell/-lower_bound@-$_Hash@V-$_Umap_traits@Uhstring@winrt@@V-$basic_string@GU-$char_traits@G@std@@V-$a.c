/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@2@AEBUhstring@winrt@@@Z @ 0x18012846C
 * Callers:
 *     ??A?$unordered_map@Uhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@Uhstring@winrt@@@4@U?$equal_to@Uhstring@winrt@@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@4@@std@@QEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@AEBUhstring@winrt@@@Z @ 0x18011B8CC (--A-$unordered_map@Uhstring@winrt@@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     ?GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@U?$pair@Uhstring@winrt@@U12@@std@@@std@@PEAUHKEY__@@PEBG@Z @ 0x18012113C (-GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@2@_K@Z @ 0x1800EDA60 (-_End@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std@@U-$.c)
 *     ??R?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@QEBA_KAEBUhstring@winrt@@@Z @ 0x18011BB14 (--R-$_Uhash_compare@Uhstring@winrt@@U-$hash@Uhstring@winrt@@@std@@U-$equal_to@Uhstring@winrt@@@4.c)
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x180256D88 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<winrt::hstring,std::wstring,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::wstring>>,0>>::lower_bound(
        _QWORD *a1,
        _QWORD *a2,
        HSTRING *a3)
{
  __int64 v6; // r14
  _QWORD *i; // rbx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v6 = a1[6] & std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>::operator()(
                 (__int64)a1,
                 a3);
  for ( i = *(_QWORD **)(a1[3] + 16 * v6); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)*std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::_End(
                           (__int64)a1,
                           &v9,
                           v6) )
    {
      *a2 = a1[1];
      return a2;
    }
    if ( (unsigned __int8)winrt::operator==(i + 2, a3) )
      break;
  }
  if ( !(unsigned __int8)winrt::operator==(a3, i + 2) )
    i = (_QWORD *)a1[1];
  *a2 = i;
  return a2;
}
