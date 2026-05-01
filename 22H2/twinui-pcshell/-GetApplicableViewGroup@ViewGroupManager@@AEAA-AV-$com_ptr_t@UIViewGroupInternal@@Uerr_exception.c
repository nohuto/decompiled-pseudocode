/*
 * XREFs of ?GetApplicableViewGroup@ViewGroupManager@@AEAA?AV?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@PEAUHWND__@@@Z @ 0x1802FB4B0
 * Callers:
 *     ?OnGroupWindowTemplateApplied@ViewGroupManager@@UEAAXPEAUHWND__@@KKUtagRECT@@1@Z @ 0x1802FBA00 (-OnGroupWindowTemplateApplied@ViewGroupManager@@UEAAXPEAUHWND__@@KKUtagRECT@@1@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A1998 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall ViewGroupManager::GetApplicableViewGroup(RTL_SRWLOCK *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  RTL_SRWLOCK *v8; // rsi
  __int64 *Ptr; // rdi
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v13[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v8 = a1 + 32;
  AcquireSRWLockShared(a1 + 32);
  v13[1] = (__int64)v8;
  Ptr = (__int64 *)a1[33].Ptr;
  v10 = *Ptr;
  v13[0] = *Ptr;
  while ( (__int64 *)v10 != Ptr )
  {
    v11 = *(_QWORD *)(v10 + 32);
    v14 = v11;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v11 + 88LL))(v11, a3, a4) )
    {
      v14 = 0LL;
      *a2 = v11;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
      goto LABEL_9;
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++(v13);
    v10 = v13[0];
  }
  *a2 = 0LL;
LABEL_9:
  if ( v8 )
    ReleaseSRWLockShared(v8);
  return a2;
}
