/*
 * XREFs of ?GetPendingTabChanges@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEAV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@0@Z @ 0x1800F24C8
 * Callers:
 *     ?OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelTabsChangedEventArgs@38456@@Z @ 0x1800EBC30 (-OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabData.c)
 *     ?UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x1800ECD78 (-UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001E864 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020684 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??D?$fast_iterator@U?$IVectorView@UWindowTabView@Shell@UI@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUWindowTabView@Shell@UI@Internal@Windows@2@XZ @ 0x1800A1914 (--D-$fast_iterator@U-$IVectorView@UWindowTabView@Shell@UI@Internal@Windows@winrt@@@Collections@F.c)
 *     ??$_Emplace_reallocate@AEBUguid@winrt@@@?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAAPEAUguid@winrt@@QEAU23@AEBU23@@Z @ 0x1800E43F8 (--$_Emplace_reallocate@AEBUguid@winrt@@@-$vector@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@s.c)
 *     ?Id@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUguid@3@XZ @ 0x1800EB5B0 (-Id@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows.c)
 *     ?Tabs@?$consume_Windows_Internal_UI_Shell_IWindowTabDataModel@UIWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$IVectorView@UWindowTabView@Shell@UI@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@XZ @ 0x1800ECA90 (-Tabs@-$consume_Windows_Internal_UI_Shell_IWindowTabDataModel@UIWindowTabDataModel@Shell@UI@Inte.c)
 *     ?_Tidy@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXXZ @ 0x1800EE5CC (-_Tidy@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXXZ.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@2@AEBUguid@winrt@@@Z @ 0x1800EF3F8 (-lower_bound@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Uguid@winrt@@U-$hash@Uguid.c)
 *     ??$_Insert_unverified@$$CBUguid@winrt@@U_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@Uguid@winrt@@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@Uguid@winrt@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@Uguid@winrt@@@std@@@std@@@std@@_N@1@$$QEBUguid@winrt@@U_Not_a_node_tag@1@@Z @ 0x1800F147C (--$_Insert_unverified@$$CBUguid@winrt@@U_Not_a_node_tag@std@@@-$_Hash@V-$_Uset_traits@Uguid@winr.c)
 *     ??$end@U?$IVectorView@UWindowTabView@Shell@UI@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@$0A@@impl@winrt@@YA?AU?$fast_iterator@U?$IVectorView@UWindowTabView@Shell@UI@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@01@AEBU?$IVectorView@UWindowTabView@Shell@UI@Internal@Windows@winrt@@@Collections@Foundation@Windows@1@@Z @ 0x1800F197C (--$end@U-$IVectorView@UWindowTabView@Shell@UI@Internal@Windows@winrt@@@Collections@Foundation@Wi.c)
 *     ??0?$unordered_set@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@V?$allocator@Uguid@winrt@@@4@@std@@QEAA@XZ @ 0x1800F1BD0 (--0-$unordered_set@Uguid@winrt@@U-$hash@Uguid@winrt@@@std@@U-$equal_to@Uguid@winrt@@@4@V-$alloca.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowData::GetPendingTabChanges(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rdx
  _QWORD *v7; // r8
  int v8; // esi
  int i; // eax
  _BYTE *v10; // rdx
  _QWORD *v11; // r14
  _QWORD *j; // rbx
  _BYTE *v13; // rdx
  _QWORD **v14; // rcx
  _QWORD *v15; // rcx
  _QWORD *v16; // rbx
  __int64 v17; // [rsp+28h] [rbp-81h] BYREF
  _QWORD **v18; // [rsp+30h] [rbp-79h] BYREF
  __int64 v19; // [rsp+38h] [rbp-71h] BYREF
  RTL_SRWLOCK *v20; // [rsp+40h] [rbp-69h] BYREF
  __int64 *v21; // [rsp+48h] [rbp-61h] BYREF
  int v22; // [rsp+50h] [rbp-59h]
  _BYTE v23[8]; // [rsp+58h] [rbp-51h] BYREF
  int v24; // [rsp+60h] [rbp-49h]
  _BYTE v25[8]; // [rsp+70h] [rbp-39h] BYREF
  _QWORD **v26; // [rsp+78h] [rbp-31h]
  _BYTE v27[40]; // [rsp+88h] [rbp-21h] BYREF
  _BYTE v28[16]; // [rsp+B0h] [rbp+7h] BYREF
  __int128 v29; // [rsp+C0h] [rbp+17h] BYREF

  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)a1, &v20);
  std::unordered_set<winrt::guid>::unordered_set<winrt::guid>((__int64)v25, v6, v7);
  winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabDataModel<winrt::Windows::Internal::UI::Shell::IWindowTabDataModel>::Tabs(
    (__int64 *)(a1 + 16),
    &v17);
  v21 = &v17;
  v8 = 0;
  v22 = 0;
  winrt::impl::end<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::UI::Shell::WindowTabView>,0>(
    (__int64)v23,
    &v17);
  for ( i = 0; i != v24; i = v8 )
  {
    winrt::impl::fast_iterator<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::UI::Shell::WindowTabView>>::operator*(
      &v21,
      (winrt *)&v19);
    winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::Id(
      &v19,
      (__int64)&v29);
    std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::lower_bound(
      a1 + 88,
      (__int64)&v18,
      (winrt::impl *)&v29);
    if ( v18 == *(_QWORD ***)(a1 + 96) )
    {
      v10 = *(_BYTE **)(a2 + 8);
      if ( *(_BYTE **)(a2 + 16) == v10 )
      {
        std::vector<winrt::guid>::_Emplace_reallocate<winrt::guid const &>((const void **)a2, v10, &v29);
      }
      else
      {
        *(_OWORD *)v10 = v29;
        *(_QWORD *)(a2 + 8) += 16LL;
      }
    }
    std::_Hash<std::_Uset_traits<winrt::guid,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<winrt::guid>,0>>::_Insert_unverified<winrt::guid const,std::_Not_a_node_tag>(
      (__int64)v25,
      (__int64)v28,
      (winrt::impl *)&v29);
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v19);
    v22 = ++v8;
  }
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v17);
  v11 = *(_QWORD **)(a1 + 96);
  for ( j = (_QWORD *)*v11; j != v11; j = (_QWORD *)*j )
  {
    std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::lower_bound(
      (__int64)v25,
      (__int64)&v18,
      (winrt::impl *)(j + 2));
    if ( v18 == v26 )
    {
      v13 = *(_BYTE **)(a3 + 8);
      if ( *(_BYTE **)(a3 + 16) == v13 )
      {
        std::vector<winrt::guid>::_Emplace_reallocate<winrt::guid const &>((const void **)a3, v13, (_OWORD *)j + 1);
      }
      else
      {
        *(_OWORD *)v13 = *((_OWORD *)j + 1);
        *(_QWORD *)(a3 + 8) += 16LL;
      }
    }
  }
  std::vector<void *>::_Tidy((__int64)v27);
  v14 = v26;
  *v26[1] = 0LL;
  v15 = *v14;
  if ( v15 )
  {
    do
    {
      v16 = (_QWORD *)*v15;
      std::_Deallocate<16,0>(v15, (const struct std::nothrow_t *)0x20);
      v15 = v16;
    }
    while ( v16 );
  }
  std::_Deallocate<16,0>(v26, (const struct std::nothrow_t *)0x20);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v20);
}
