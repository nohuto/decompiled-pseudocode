/*
 * XREFs of ?RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z @ 0x1800EC418
 * Callers:
 *     ?OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800EBB00 (-OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIA.c)
 *     ?OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelTabsChangedEventArgs@38456@@Z @ 0x1800EBC30 (-OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabData.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBUguid@winrt@@@?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAAPEAUguid@winrt@@QEAU23@AEBU23@@Z @ 0x1800E43F8 (--$_Emplace_reallocate@AEBUguid@winrt@@@-$vector@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@s.c)
 *     ??$emplace@AEA_KAEBUguid@winrt@@@?$_Hash@V?$_Umap_traits@_KUguid@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUguid@winrt@@@std@@@std@@@std@@@std@@_N@1@AEA_KAEBUguid@winrt@@@Z @ 0x1800E6184 (--$emplace@AEA_KAEBUguid@winrt@@@-$_Hash@V-$_Umap_traits@_KUguid@winrt@@V-$_Uhash_compare@_KU-$h.c)
 *     ??0?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@std@@QEAA@XZ @ 0x1800E7770 (--0-$unordered_map@_KUguid@winrt@@U-$hash@_K@std@@U-$equal_to@_K@4@V-$allocator@U-$pair@$$CB_KUg.c)
 *     ??A?$deque@_KV?$allocator@_K@std@@@std@@QEAAAEA_K_K@Z @ 0x1800E8698 (--A-$deque@_KV-$allocator@_K@std@@@std@@QEAAAEA_K_K@Z.c)
 *     ?RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEBV?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@8@@Z @ 0x1800EC284 (-RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV-.c)
 *     ?_Tidy@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXXZ @ 0x1800EE5CC (-_Tidy@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXXZ.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@V12@@2@AEB_K@Z @ 0x1800EEAF4 (-equal_range@-$_Hash@V-$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@0@Z @ 0x1800EECEC (-erase@-$_Hash@V-$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V-$_Uh.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1800EF550 (-lower_bound@-$_Hash@V-$_Umap_traits@_KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveWindowTabDataModel(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this,
        __int64 a2)
{
  __int64 v3; // rdx
  _QWORD *v4; // r8
  _BYTE *v5; // rdi
  _BYTE *v6; // r15
  __int64 **v7; // r12
  __int64 *v8; // rbx
  __int64 v9; // r13
  _QWORD *i; // rax
  _QWORD **v11; // rcx
  _QWORD *v12; // rcx
  _QWORD *v13; // rbx
  _QWORD *v14; // [rsp+20h] [rbp-49h] BYREF
  _QWORD *v15; // [rsp+28h] [rbp-41h]
  void *v16; // [rsp+30h] [rbp-39h] BYREF
  _BYTE *v17; // [rsp+38h] [rbp-31h]
  _BYTE *v18; // [rsp+40h] [rbp-29h]
  char v19[8]; // [rsp+50h] [rbp-19h] BYREF
  _QWORD **v20; // [rsp+58h] [rbp-11h]
  char v21[88]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v22; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v23; // [rsp+D8h] [rbp+6Fh] BYREF

  v23 = a2;
  std::_Hash<std::_Umap_traits<unsigned __int64,std::wstring,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::wstring>>,0>>::lower_bound(
    (char *)this + 608,
    &v22,
    &v23);
  if ( v22 != *((_QWORD *)this + 77) )
  {
    v16 = 0LL;
    v5 = 0LL;
    v17 = 0LL;
    v6 = 0LL;
    v18 = 0LL;
    std::unordered_map<unsigned __int64,winrt::guid>::unordered_map<unsigned __int64,winrt::guid>((__int64)v19, v3, v4);
    v7 = (__int64 **)*((_QWORD *)this + 90);
    v8 = *v7;
    v9 = v23;
    while ( v8 != (__int64 *)v7 )
    {
      if ( *(_QWORD *)std::deque<unsigned __int64>::operator[]((_QWORD *)this + 84, v8[4]) == v9 )
      {
        if ( v6 == v5 )
        {
          std::vector<winrt::guid>::_Emplace_reallocate<winrt::guid const &>((const void **)&v16, v5, (_OWORD *)v8 + 1);
          v6 = v18;
          v5 = v17;
        }
        else
        {
          *(_OWORD *)v5 = *((_OWORD *)v8 + 1);
          v5 += 16;
          v17 = v5;
        }
      }
      else
      {
        std::_Hash<std::_Umap_traits<unsigned __int64,winrt::guid,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::guid>>,0>>::emplace<unsigned __int64 &,winrt::guid const &>(
          (__int64)v19,
          (__int64)&v14,
          v8 + 4,
          (_OWORD *)v8 + 1);
      }
      v8 = (__int64 *)*v8;
    }
    winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveTabsFromWindowOrder(
      (__int64)this,
      (unsigned __int64 *)&v16,
      (__int64)v19);
    std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::equal_range(
      (char *)this + 608,
      &v14,
      &v23);
    for ( i = v14; i != v15; i = (_QWORD *)*i )
      ;
    std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::erase(
      (char *)this + 608,
      &v22,
      v14,
      v15);
    std::vector<void *>::_Tidy(v21);
    v11 = v20;
    *v20[1] = 0LL;
    v12 = *v11;
    if ( v12 )
    {
      do
      {
        v13 = (_QWORD *)*v12;
        std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)0x28);
        v12 = v13;
      }
      while ( v13 );
    }
    std::_Deallocate<16,0>(v20, (const struct std::nothrow_t *)0x28);
    if ( v16 )
      std::_Deallocate<16,0>(v16, (const struct std::nothrow_t *)((v18 - (_BYTE *)v16) & 0xFFFFFFFFFFFFFFF0uLL));
  }
}
