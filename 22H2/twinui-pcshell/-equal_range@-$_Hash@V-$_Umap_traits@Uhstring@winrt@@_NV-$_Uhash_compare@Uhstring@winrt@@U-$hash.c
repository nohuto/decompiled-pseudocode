/*
 * XREFs of ?equal_range@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@_N@std@@@std@@@std@@@std@@V12@@2@AEBUhstring@winrt@@@Z @ 0x180127A50
 * Callers:
 *     ?erase@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@QEAA_KAEBUhstring@winrt@@@Z @ 0x180127D88 (-erase@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@_NV-$_Uhash_compare@Uhstring@winrt@@_ea_180127D88.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@2@_K@Z @ 0x1800ED8F0 (-_End@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std@@U-$.c)
 *     ??R?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@QEBA_KAEBUhstring@winrt@@@Z @ 0x18011B9A4 (--R-$_Uhash_compare@Uhstring@winrt@@U-$hash@Uhstring@winrt@@@std@@U-$equal_to@Uhstring@winrt@@@4.c)
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x180256BD8 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<winrt::hstring,bool,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,bool>>,0>>::equal_range(
        __int64 a1,
        _QWORD *a2,
        HSTRING *a3)
{
  __int64 v5; // rbp
  _QWORD *i; // rbx
  _QWORD *v7; // r15
  _QWORD *v8; // rdi
  __int64 v9; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = a1;
  v5 = qword_180652070 & std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>::operator()(
                           a1,
                           a3);
  for ( i = *(_QWORD **)(qword_180652058 + 16 * v5); ; i = (_QWORD *)*i )
  {
    v7 = i;
    if ( i == (_QWORD *)*std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::_End(
                           (__int64)&dword_180652040,
                           &v11,
                           v5) )
      break;
    if ( (unsigned __int8)winrt::operator==(i + 2, a3) )
    {
      v8 = i;
      while ( i != (_QWORD *)*std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::_End(
                                (__int64)&dword_180652040,
                                &v11,
                                v5)
           && (unsigned __int8)winrt::operator==(a3, i + 2) )
        i = (_QWORD *)*i;
      if ( v7 != i )
      {
        *a2 = v8;
        a2[1] = i;
        return a2;
      }
      break;
    }
  }
  v9 = qword_180652048;
  *a2 = qword_180652048;
  a2[1] = v9;
  return a2;
}
