/*
 * XREFs of ?SendDeviceCommand@InputStateManager@@UEAAJKPEAUDeviceCommandMessage@@@Z @ 0x180087D70
 * Callers:
 *     <none>
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800292A4 (-lower_bound@-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std@@U.c)
 *     ??$emplace_back@AEBKAEAPEAUIRawInputProvider@@@?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@QEAAAEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@1@AEBKAEAPEAUIRawInputProvider@@@Z @ 0x180041594 (--$emplace_back@AEBKAEAPEAUIRawInputProvider@@@-$vector@U-$pair@KV-$ComPtr@UIRawInputProvider@@@.c)
 *     ??1?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@QEAA@XZ @ 0x1800415F0 (--1-$vector@U-$pair@KV-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V-$allocator@U-$pair@KV.c)
 *     ?reserve@?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@QEAAX_K@Z @ 0x180041790 (-reserve@-$vector@U-$pair@KV-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V-$allocator@U-$p.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800647EC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_1800647EC.c)
 *     ?lock_shared@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800685B4 (-lock_shared@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SR.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputStateManager::SendDeviceCommand(
        InputStateManager *this,
        int a2,
        struct DeviceCommandMessage *a3)
{
  __int64 **v6; // rdi
  __int64 *i; // rbx
  unsigned int *v8; // rdi
  unsigned int *j; // rbx
  __int128 v11; // [rsp+20h] [rbp-20h] BYREF
  __int64 v12; // [rsp+30h] [rbp-10h]
  __int64 v13; // [rsp+70h] [rbp+30h] BYREF
  int v14; // [rsp+78h] [rbp+38h] BYREF
  RTL_SRWLOCK *v15; // [rsp+88h] [rbp+48h] BYREF

  v14 = a2;
  v11 = 0LL;
  v12 = 0LL;
  wil::srwlock::lock_shared((RTL_SRWLOCK *)this + 19, &v15);
  if ( a2 )
  {
    std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::lower_bound(
      (__int64)this + 88,
      (__int64)&v13,
      (const unsigned __int8 *)&v14);
    if ( v13 != *((_QWORD *)this + 12) )
      std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::emplace_back<unsigned long const &,IRawInputProvider * &>(
        (__int64 *)&v11,
        (_DWORD *)(v13 + 16),
        (__int64 *)(v13 + 24));
  }
  else
  {
    std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::reserve(
      (__int64)&v11,
      *((_QWORD *)this + 13));
    v6 = (__int64 **)*((_QWORD *)this + 12);
    for ( i = *v6; i != (__int64 *)v6; i = (__int64 *)*i )
      std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::emplace_back<unsigned long const &,IRawInputProvider * &>(
        (__int64 *)&v11,
        (_DWORD *)i + 4,
        i + 3);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v15);
  v8 = (unsigned int *)*((_QWORD *)&v11 + 1);
  for ( j = (unsigned int *)v11; j != v8; j += 4 )
    (*(void (__fastcall **)(_QWORD, _QWORD, struct DeviceCommandMessage *))(**((_QWORD **)j + 1) + 24LL))(
      *((_QWORD *)j + 1),
      *j,
      a3);
  std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::~vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>((__int64)&v11);
  return 0LL;
}
