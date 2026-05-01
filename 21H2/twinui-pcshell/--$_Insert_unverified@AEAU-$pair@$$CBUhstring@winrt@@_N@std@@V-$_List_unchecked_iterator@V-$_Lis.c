/*
 * XREFs of ??$_Insert_unverified@AEAU?$pair@$$CBUhstring@winrt@@_N@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@_N@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@_N@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBUhstring@winrt@@_N@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@_N@std@@@std@@@std@@@1@@Z @ 0x180118AD0
 * Callers:
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180126704 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@_NV-$_Uhash_compare@Uhstring@winrt@@U-$h.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@2@_K@Z @ 0x1800EDA60 (-_End@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std@@U-$.c)
 *     ??R?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@QEBA_KAEBUhstring@winrt@@@Z @ 0x18011BB14 (--R-$_Uhash_compare@Uhstring@winrt@@U-$hash@Uhstring@winrt@@@std@@U-$equal_to@Uhstring@winrt@@@4.c)
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x1801261A8 (-_Check_size@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@_NV-$_Uhash_compare@Uhstring@winrt@@U-$hash.c)
 *     ?erase@?$list@U?$pair@$$CBUhstring@winrt@@_N@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@_N@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@_N@std@@@std@@@std@@@2@@Z @ 0x180128008 (-erase@-$list@U-$pair@$$CBUhstring@winrt@@_N@std@@V-$allocator@U-$pair@$$CBUhstring@winrt@@_N@st.c)
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x180256D88 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<winrt::hstring,bool,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,bool>>,0>>::_Insert_unverified<std::pair<winrt::hstring const,bool> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::hstring const,bool>>>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 *v17; // rsi
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *iter; // rax
  __int64 v24; // [rsp+20h] [rbp-38h] BYREF
  __int64 v26; // [rsp+70h] [rbp+18h] BYREF
  __int64 v27; // [rsp+78h] [rbp+20h]

  v27 = a4;
  v8 = a1[6] & std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>::operator()(
                 a1,
                 a3);
  v9 = *std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::_End(
          (__int64)a1,
          &v26,
          v8);
  while ( 1 )
  {
    v10 = a1[3];
    if ( v9 == *(_QWORD *)(v10 + 16 * v8) )
      break;
    v9 = *(_QWORD *)(v9 + 8);
    if ( (unsigned __int8)winrt::operator==(a3, v9 + 16) )
    {
      std::list<std::pair<winrt::hstring const,bool>>::erase(a1 + 1, &v26, a4);
      *(_QWORD *)a2 = v9;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  v12 = *(_QWORD *)a4;
  if ( v9 != *(_QWORD *)a4 )
  {
    **(_QWORD **)(a4 + 8) = v12;
    **(_QWORD **)(v12 + 8) = v9;
    **(_QWORD **)(v9 + 8) = a4;
    v13 = *(_QWORD *)(v9 + 8);
    *(_QWORD *)(v9 + 8) = *(_QWORD *)(v12 + 8);
    *(_QWORD *)(v12 + 8) = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(a4 + 8) = v13;
    v10 = a1[3];
  }
  v14 = 2 * v8;
  v15 = *(_QWORD *)(v10 + 16 * v8);
  if ( v15 == a1[1] )
  {
    *(_QWORD *)(v10 + 16 * v8) = a4;
    v16 = a1[3];
    *(_QWORD *)(v16 + 16 * v8 + 8) = a4;
  }
  else
  {
    v17 = (__int64 *)(v10 + 16 * v8);
    if ( v15 == v9 )
    {
      *v17 = a4;
    }
    else
    {
      v18 = (__int64 *)v17[1];
      v19 = *v18;
      v17[1] = *v18;
      if ( v19 != a4 )
      {
        v20 = a1[3];
        v21 = *(_QWORD *)(v20 + 8 * v14 + 8);
        *(_QWORD *)(v20 + 8 * v14 + 8) = *(_QWORD *)(v21 + 8);
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
             v22,
             &v26,
             v27);
    std::_Hash<std::_Umap_traits<winrt::hstring,bool,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,bool>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::hstring const,bool>>>>,void>(
      a1,
      &v24,
      *iter);
    throw;
  }
  return result;
}
