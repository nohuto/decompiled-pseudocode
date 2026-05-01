/*
 * XREFs of ??$_Insert_unverified@Uguid@winrt@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@Uguid@winrt@@@std@@@std@@U_Iterator_base0@2@@std@@@?$_Hash@V?$_Uset_traits@Uguid@winrt@@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@Uguid@winrt@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@Uguid@winrt@@@std@@@std@@@std@@_N@1@$$QEAUguid@winrt@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@Uguid@winrt@@@std@@@std@@U_Iterator_base0@2@@1@@Z @ 0x1800E5578
 * Callers:
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x1800EC74C (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Uset_traits@Uguid@winrt@@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@Uguid@winrt@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800EE08C (-_Forced_rehash@-$_Hash@V-$_Uset_traits@Uguid@winrt@@V-$_Uhash_compare@Uguid@winrt@@U-$hash@Ugui.c)
 * Callees:
 *     ?_Check_size@?$_Hash@V?$_Uset_traits@Uguid@winrt@@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@Uguid@winrt@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x1800ED7E4 (-_Check_size@-$_Hash@V-$_Uset_traits@Uguid@winrt@@V-$_Uhash_compare@Uguid@winrt@@U-$hash@Uguid@w.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@2@_K@Z @ 0x1800EDA60 (-_End@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std@@U-$.c)
 *     ?erase@?$list@U?$pair@$$CB_K_K@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@2@@Z @ 0x1800EF21C (-erase@-$list@U-$pair@$$CB_K_K@std@@V-$allocator@U-$pair@$$CB_K_K@std@@@2@@std@@QEAA-AV-$_List_i.c)
 *     ?hash_data@impl@winrt@@YA_KPEBX_K@Z @ 0x1800EF3BC (-hash_data@impl@winrt@@YA_KPEBX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<winrt::guid,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<winrt::guid>,0>>::_Insert_unverified<winrt::guid,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<winrt::guid>>,std::_Iterator_base0>>(
        __int64 a1,
        __int64 a2,
        winrt::impl *a3,
        _QWORD **a4)
{
  unsigned __int64 v7; // rax
  __int64 v8; // r11
  _QWORD *v9; // rdi
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v12; // rcx
  __int64 result; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // r8
  _QWORD *v17; // rdx
  __int64 v18; // rax
  _QWORD *v19; // r10
  _QWORD *v20; // rax
  _QWORD **v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *iter; // rax
  char v26[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v27; // [rsp+28h] [rbp-20h] BYREF

  v7 = winrt::impl::hash_data(a3, (const void *)0x10, (unsigned __int64)a3);
  v9 = *(_QWORD **)std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::_End(
                     v8,
                     v26,
                     v7 & *(_QWORD *)(v8 + 48));
  while ( 1 )
  {
    v12 = *(_QWORD *)(v11 + 24);
    if ( v9 == *(_QWORD **)(v12 + 16 * v10) )
      break;
    v9 = (_QWORD *)v9[1];
    if ( *(_QWORD *)a3 == v9[2] && *((_QWORD *)a3 + 1) == v9[3] )
    {
      std::list<std::pair<unsigned __int64 const,unsigned __int64>>::erase(v11 + 8, v26, a4);
      *(_QWORD *)a2 = v9;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  v14 = *a4;
  if ( v9 != *a4 )
  {
    *a4[1] = v14;
    *(_QWORD *)v14[1] = v9;
    *(_QWORD *)v9[1] = a4;
    v15 = (_QWORD *)v9[1];
    v9[1] = v14[1];
    v14[1] = a4[1];
    a4[1] = v15;
    v12 = *(_QWORD *)(v11 + 24);
  }
  v16 = 2 * v10;
  v17 = *(_QWORD **)(v12 + 16 * v10);
  if ( v17 == *(_QWORD **)(v11 + 8) )
  {
    *(_QWORD *)(v12 + 16 * v10) = a4;
    v18 = *(_QWORD *)(v11 + 24);
    *(_QWORD *)(v18 + 16 * v10 + 8) = a4;
  }
  else
  {
    v19 = (_QWORD *)(v12 + 16 * v10);
    if ( v17 == v9 )
    {
      *v19 = a4;
    }
    else
    {
      v20 = (_QWORD *)v19[1];
      v21 = (_QWORD **)*v20;
      v19[1] = *v20;
      if ( v21 != a4 )
      {
        v22 = *(_QWORD *)(v11 + 24);
        v23 = *(_QWORD *)(v22 + 8 * v16 + 8);
        *(_QWORD *)(v22 + 8 * v16 + 8) = *(_QWORD *)(v23 + 8);
      }
    }
  }
  try
  {
    std::_Hash<std::_Uset_traits<winrt::guid,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<winrt::guid>,0>>::_Check_size();
    *(_QWORD *)a2 = a4;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    iter = (_QWORD *)std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Make_iter(
                       v24,
                       v26,
                       a4);
    std::_Hash<std::_Uset_traits<winrt::guid,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<winrt::guid>,0>>::erase(
      a1,
      &v27,
      *iter);
    throw;
  }
  return result;
}
