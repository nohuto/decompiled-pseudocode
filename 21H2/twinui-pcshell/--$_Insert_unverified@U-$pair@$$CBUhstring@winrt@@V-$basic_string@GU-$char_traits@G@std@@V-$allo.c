/*
 * XREFs of ??$_Insert_unverified@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@U_Not_a_node_tag@2@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@U_Not_a_node_tag@1@@Z @ 0x180118E20
 * Callers:
 *     ?BuildRegistryKeyMap@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801206A8 (-BuildRegistryKeyMap@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@U?$pair@Uhstring@winrt@@U12@@std@@@std@@PEAUHKEY__@@PEBG@Z @ 0x18012113C (-GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@2@_K@Z @ 0x1800EDA60 (-_End@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std@@U-$.c)
 *     ??$_Insert@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@?$list@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@1@$$QEAU?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x18011876C (--$_Insert@U-$pair@$$CBUhstring@winrt@@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@.c)
 *     ??R?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@QEBA_KAEBUhstring@winrt@@@Z @ 0x18011BB14 (--R-$_Uhash_compare@Uhstring@winrt@@U-$hash@Uhstring@winrt@@@std@@U-$equal_to@Uhstring@winrt@@@4.c)
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x180126124 (-_Check_size@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$basic_string@GU-$char_traits@G@std@@V-$a.c)
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x180256D88 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<winrt::hstring,std::wstring,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::wstring>>,0>>::_Insert_unverified<std::pair<winrt::hstring const,std::wstring>,std::_Not_a_node_tag>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 result; // rax
  __int64 *v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 *v16; // rsi
  __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  _QWORD *iter; // rax
  _QWORD v23[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v25; // [rsp+70h] [rbp+18h] BYREF

  v6 = *(_QWORD *)(a1 + 48) & std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>::operator()(
                                a1,
                                a3);
  v7 = *std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::_End(
          a1,
          v23,
          v6);
  while ( v7 != *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16 * v6) )
  {
    v7 = *(_QWORD *)(v7 + 8);
    if ( (unsigned __int8)winrt::operator==(a3, v7 + 16) )
    {
      *(_QWORD *)a2 = v7;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  std::list<std::pair<winrt::hstring const,std::wstring>>::_Insert<std::pair<winrt::hstring const,std::wstring>>(
    a1 + 8,
    **(_QWORD **)(a1 + 8),
    a3);
  v9 = *(__int64 **)(a1 + 8);
  v10 = *v9;
  v25 = v10;
  v11 = *(_QWORD *)v10;
  if ( v7 != *(_QWORD *)v10 )
  {
    **(_QWORD **)(v10 + 8) = v11;
    **(_QWORD **)(v11 + 8) = v7;
    **(_QWORD **)(v7 + 8) = v10;
    v12 = *(_QWORD *)(v7 + 8);
    *(_QWORD *)(v7 + 8) = *(_QWORD *)(v11 + 8);
    *(_QWORD *)(v11 + 8) = *(_QWORD *)(v10 + 8);
    *(_QWORD *)(v10 + 8) = v12;
    v9 = *(__int64 **)(a1 + 8);
  }
  v13 = 2 * v6;
  v14 = *(_QWORD *)(a1 + 24);
  if ( *(__int64 **)(v14 + 16 * v6) == v9 )
  {
    *(_QWORD *)(v14 + 16 * v6) = v10;
    v15 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(v15 + 16 * v6 + 8) = v10;
  }
  else
  {
    v16 = (__int64 *)(v14 + 16 * v6);
    if ( *(_QWORD *)(v14 + 8 * v13) == v7 )
    {
      *v16 = v10;
    }
    else
    {
      v17 = (__int64 *)v16[1];
      v18 = *v17;
      v16[1] = *v17;
      if ( v18 != v10 )
      {
        v19 = *(_QWORD *)(a1 + 24);
        v20 = *(_QWORD *)(v19 + 8 * v13 + 8);
        *(_QWORD *)(v19 + 8 * v13 + 8) = *(_QWORD *)(v20 + 8);
      }
    }
  }
  try
  {
    std::_Hash<std::_Umap_traits<winrt::hstring,std::wstring,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::wstring>>,0>>::_Check_size();
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    iter = std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Make_iter(
             v21,
             &v25,
             v25);
    std::_Hash<std::_Umap_traits<winrt::hstring,std::wstring,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::wstring>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::hstring const,std::wstring>>>>,void>(
      a1,
      v23,
      *iter);
    throw;
  }
  return result;
}
