/*
 * XREFs of ?GetViewGroup@ViewGroupManager@@AEAA?AV?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1802FB8D0
 * Callers:
 *     ?OnBringingViewToForeground@ViewGroupManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1802FBBB0 (-OnBringingViewToForeground@ViewGroupManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?OnViewPositionChanged@ViewGroupManager@@UEAAJPEAUIApplicationView@@W4TRACKED_WINDOW_STATE@@@Z @ 0x1802FBFD0 (-OnViewPositionChanged@ViewGroupManager@@UEAAJPEAUIApplicationView@@W4TRACKED_WINDOW_STATE@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A19B8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall ViewGroupManager::GetViewGroup(RTL_SRWLOCK *a1, __int64 *a2, __int64 a3)
{
  RTL_SRWLOCK *v6; // rsi
  __int64 *Ptr; // rdi
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v6 = a1 + 32;
  AcquireSRWLockShared(a1 + 32);
  Ptr = (__int64 *)a1[33].Ptr;
  v8 = *Ptr;
  v12 = *Ptr;
  while ( (__int64 *)v8 != Ptr )
  {
    v9 = *(_QWORD *)(v8 + 32);
    v11 = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 64LL))(v9, a3) )
    {
      v11 = 0LL;
      *a2 = v9;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
      goto LABEL_9;
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++(&v12);
    v8 = v12;
  }
  *a2 = 0LL;
LABEL_9:
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return a2;
}
