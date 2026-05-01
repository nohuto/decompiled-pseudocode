/*
 * XREFs of ??$_Insert_unverified@U?$pair@$$CBUhstring@winrt@@_N@std@@U_Not_a_node_tag@2@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@_N@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBUhstring@winrt@@_N@1@U_Not_a_node_tag@1@@Z @ 0x180118FC4
 * Callers:
 *     ?HandlePackageUninstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageUninstallingEventArgs@856@@Z @ 0x180122720 (-HandlePackageUninstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@2@_K@Z @ 0x1800EDA60 (-_End@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std@@U-$.c)
 *     ??$_Insert@U?$pair@$$CBUhstring@winrt@@_N@std@@@?$list@U?$pair@$$CBUhstring@winrt@@_N@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@_N@std@@@std@@@std@@U_Iterator_base0@2@@1@$$QEAU?$pair@$$CBUhstring@winrt@@_N@1@@Z @ 0x180118864 (--$_Insert@U-$pair@$$CBUhstring@winrt@@_N@std@@@-$list@U-$pair@$$CBUhstring@winrt@@_N@std@@V-$al.c)
 *     ??R?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@QEBA_KAEBUhstring@winrt@@@Z @ 0x18011BB14 (--R-$_Uhash_compare@Uhstring@winrt@@U-$hash@Uhstring@winrt@@@std@@U-$equal_to@Uhstring@winrt@@@4.c)
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x1801261A8 (-_Check_size@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@_NV-$_Uhash_compare@Uhstring@winrt@@U-$hash.c)
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x180256D88 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<winrt::hstring,bool,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,bool>>,0>>::_Insert_unverified<std::pair<winrt::hstring const,bool>,std::_Not_a_node_tag>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // rdi
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  _QWORD *iter; // rax
  _QWORD v20[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF
  int *v22; // [rsp+60h] [rbp+18h]

  v21 = a1;
  v22 = &dword_180652050;
  v5 = qword_180652080 & std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>::operator()(
                           a1,
                           a3);
  v6 = *std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::_End(
          (__int64)&dword_180652050,
          v20,
          v5);
  while ( v6 != *(_QWORD *)(qword_180652068 + 16 * v5) )
  {
    v6 = *(_QWORD *)(v6 + 8);
    if ( (unsigned __int8)winrt::operator==(a3, v6 + 16) )
    {
      *(_QWORD *)a2 = v6;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  std::list<std::pair<winrt::hstring const,bool>>::_Insert<std::pair<winrt::hstring const,bool>>(
    (__int64)&qword_180652058,
    *(_QWORD *)qword_180652058,
    a3);
  v8 = qword_180652058;
  v9 = *(_QWORD *)qword_180652058;
  v21 = v9;
  v10 = *(_QWORD *)v9;
  if ( v6 != *(_QWORD *)v9 )
  {
    **(_QWORD **)(v9 + 8) = v10;
    **(_QWORD **)(v10 + 8) = v6;
    **(_QWORD **)(v6 + 8) = v9;
    v11 = *(_QWORD *)(v6 + 8);
    *(_QWORD *)(v6 + 8) = *(_QWORD *)(v10 + 8);
    *(_QWORD *)(v10 + 8) = *(_QWORD *)(v9 + 8);
    *(_QWORD *)(v9 + 8) = v11;
    v8 = qword_180652058;
  }
  v12 = 2 * v5;
  v13 = 2 * v5;
  if ( *(_QWORD *)(qword_180652068 + 16 * v5) == v8 )
  {
    *(_QWORD *)(qword_180652068 + 16 * v5) = v9;
    *(_QWORD *)(qword_180652068 + 16 * v5 + 8) = v9;
  }
  else
  {
    v14 = 2 * v5;
    if ( *(_QWORD *)(qword_180652068 + 8 * v13) == v6 )
    {
      *(_QWORD *)(qword_180652068 + 8 * v14) = v9;
    }
    else
    {
      v15 = *(__int64 **)(qword_180652068 + 8 * v14 + 8);
      v16 = *v15;
      *(_QWORD *)(qword_180652068 + 8 * v14 + 8) = *v15;
      if ( v16 != v9 )
      {
        v17 = *(_QWORD *)(qword_180652068 + 8 * v12 + 8);
        *(_QWORD *)(qword_180652068 + 8 * v12 + 8) = *(_QWORD *)(v17 + 8);
      }
    }
  }
  try
  {
    std::_Hash<std::_Umap_traits<winrt::hstring,bool,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,bool>>,0>>::_Check_size();
    *(_QWORD *)a2 = v9;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    iter = std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Make_iter(
             v18,
             &v21,
             v21);
    std::_Hash<std::_Umap_traits<winrt::hstring,bool,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,bool>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::hstring const,bool>>>>,void>(
      v22,
      v20,
      *iter);
    throw;
  }
  return result;
}
