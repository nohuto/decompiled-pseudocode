/*
 * XREFs of ?EnumerateAppStateData@UwpAppStateManager@@UEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1804C8DC0
 * Callers:
 *     <none>
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A19B8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     ?EnumerateAppViews@UwpAppPackageInfo@@QEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1804C8E54 (-EnumerateAppViews@UwpAppPackageInfo@@QEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety@Inte.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UwpAppStateManager::EnumerateAppStateData(
        RTL_SRWLOCK *this,
        struct Windows::Internal::FamilySafety::AppLimits::IAppStateDataReporter *a2)
{
  RTL_SRWLOCK *v4; // rdi
  __int64 *Ptr; // rbx
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v8; // [rsp+40h] [rbp+18h]

  v4 = this + 6;
  AcquireSRWLockShared(this + 6);
  v8 = v4;
  Ptr = (__int64 *)this[7].Ptr;
  v6 = *Ptr;
  v7 = *Ptr;
  while ( (__int64 *)v6 != Ptr )
  {
    UwpAppPackageInfo::EnumerateAppViews(*(UwpAppPackageInfo **)(v6 + 64), a2);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++(&v7);
    v6 = v7;
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
}
