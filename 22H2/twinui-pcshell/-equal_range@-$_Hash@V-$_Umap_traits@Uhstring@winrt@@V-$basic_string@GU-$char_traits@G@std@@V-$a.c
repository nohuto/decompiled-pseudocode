/*
 * XREFs of ?equal_range@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@std@@V12@@2@AEBUhstring@winrt@@@Z @ 0x180127980
 * Callers:
 *     ?GetAppThatWasDeleted@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@Uhstring@winrt@@@std@@PEAUHKEY__@@PEBG@Z @ 0x180120CBC (-GetAppThatWasDeleted@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$op.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@2@_K@Z @ 0x1800ED8F0 (-_End@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std@@U-$.c)
 *     ??R?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@QEBA_KAEBUhstring@winrt@@@Z @ 0x18011B9A4 (--R-$_Uhash_compare@Uhstring@winrt@@U-$hash@Uhstring@winrt@@@std@@U-$equal_to@Uhstring@winrt@@@4.c)
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x180256BD8 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<winrt::hstring,std::wstring,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::wstring>>,0>>::equal_range(
        _QWORD *a1,
        _QWORD *a2,
        HSTRING *a3)
{
  __int64 v6; // r14
  _QWORD *i; // rbx
  _QWORD *v8; // r12
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v6 = a1[6] & std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>::operator()(
                 (__int64)a1,
                 a3);
  for ( i = *(_QWORD **)(a1[3] + 16 * v6); ; i = (_QWORD *)*i )
  {
    v8 = i;
    if ( i == (_QWORD *)*std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::_End(
                           (__int64)a1,
                           &v12,
                           v6) )
      break;
    if ( (unsigned __int8)winrt::operator==(i + 2, a3) )
    {
      v9 = i;
      while ( i != (_QWORD *)*std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::_End(
                                (__int64)a1,
                                &v12,
                                v6)
           && (unsigned __int8)winrt::operator==(a3, i + 2) )
        i = (_QWORD *)*i;
      if ( v8 != i )
      {
        *a2 = v9;
        a2[1] = i;
        return a2;
      }
      break;
    }
  }
  v10 = a1[1];
  *a2 = v10;
  a2[1] = v10;
  return a2;
}
