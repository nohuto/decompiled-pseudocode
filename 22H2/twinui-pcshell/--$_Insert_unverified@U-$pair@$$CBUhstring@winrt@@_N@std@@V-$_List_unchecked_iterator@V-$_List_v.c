/*
 * XREFs of ??$_Insert_unverified@U?$pair@$$CBUhstring@winrt@@_N@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@_N@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@_N@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBUhstring@winrt@@_N@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@_N@std@@@std@@@std@@@1@@Z @ 0x180119018
 * Callers:
 *     ??A?$unordered_map@Uhstring@winrt@@_NU?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@@std@@QEAAAEA_NAEBUhstring@winrt@@@Z @ 0x18011B7DC (--A-$unordered_map@Uhstring@winrt@@_NU-$hash@Uhstring@winrt@@@std@@U-$equal_to@Uhstring@winrt@@@.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@2@_K@Z @ 0x1800ED8F0 (-_End@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std@@U-$.c)
 *     ??R?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@QEBA_KAEBUhstring@winrt@@@Z @ 0x18011B9A4 (--R-$_Uhash_compare@Uhstring@winrt@@U-$hash@Uhstring@winrt@@@std@@U-$equal_to@Uhstring@winrt@@@4.c)
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x180126038 (-_Check_size@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@_NV-$_Uhash_compare@Uhstring@winrt@@U-$hash.c)
 *     ?erase@?$list@U?$pair@$$CBUhstring@winrt@@_N@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@_N@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@_N@std@@@std@@@std@@@2@@Z @ 0x180127E98 (-erase@-$list@U-$pair@$$CBUhstring@winrt@@_N@std@@V-$allocator@U-$pair@$$CBUhstring@winrt@@_N@st.c)
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x180256BD8 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<winrt::hstring,bool,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,bool>>,0>>::_Insert_unverified<std::pair<winrt::hstring const,bool>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::hstring const,bool>>>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD *iter; // rax
  __int64 v21; // [rsp+20h] [rbp-38h] BYREF
  __int64 v22; // [rsp+70h] [rbp+18h] BYREF
  __int64 v23; // [rsp+78h] [rbp+20h]

  v23 = a4;
  v7 = qword_180652070 & std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>::operator()(
                           a1,
                           a3);
  v8 = *std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::_End(
          (__int64)&dword_180652040,
          &v22,
          v7);
  while ( 1 )
  {
    v9 = qword_180652058;
    if ( v8 == *(_QWORD *)(qword_180652058 + 16 * v7) )
      break;
    v8 = *(_QWORD *)(v8 + 8);
    if ( (unsigned __int8)winrt::operator==(a3, v8 + 16) )
    {
      std::list<std::pair<winrt::hstring const,bool>>::erase(&qword_180652048, &v22, a4);
      *(_QWORD *)a2 = v8;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  v11 = *(_QWORD *)a4;
  if ( v8 != *(_QWORD *)a4 )
  {
    **(_QWORD **)(a4 + 8) = v11;
    **(_QWORD **)(v11 + 8) = v8;
    **(_QWORD **)(v8 + 8) = a4;
    v12 = *(_QWORD *)(v8 + 8);
    *(_QWORD *)(v8 + 8) = *(_QWORD *)(v11 + 8);
    *(_QWORD *)(v11 + 8) = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(a4 + 8) = v12;
    v9 = qword_180652058;
  }
  v13 = 2 * v7;
  v14 = 2 * v7;
  if ( *(_QWORD *)(v9 + 16 * v7) == qword_180652048 )
  {
    *(_QWORD *)(v9 + 16 * v7) = a4;
    *(_QWORD *)(qword_180652058 + 16 * v7 + 8) = a4;
  }
  else
  {
    v15 = 2 * v7;
    if ( *(_QWORD *)(v9 + 8 * v14) == v8 )
    {
      *(_QWORD *)(v9 + 8 * v15) = a4;
    }
    else
    {
      v16 = *(__int64 **)(v9 + 8 * v15 + 8);
      v17 = *v16;
      *(_QWORD *)(v9 + 8 * v15 + 8) = *v16;
      if ( v17 != a4 )
      {
        v18 = *(_QWORD *)(qword_180652058 + 8 * v13 + 8);
        *(_QWORD *)(qword_180652058 + 8 * v13 + 8) = *(_QWORD *)(v18 + 8);
      }
    }
  }
  try
  {
    std::_Hash<std::_Umap_traits<winrt::hstring,bool,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,bool>>,0>>::_Check_size();
    *(_QWORD *)a2 = a4;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    iter = std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Make_iter(
             v19,
             &v22,
             v23);
    std::_Hash<std::_Umap_traits<winrt::hstring,bool,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,bool>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::hstring const,bool>>>>,void>(
      &dword_180652040,
      &v21,
      *iter);
    throw;
  }
  return result;
}
