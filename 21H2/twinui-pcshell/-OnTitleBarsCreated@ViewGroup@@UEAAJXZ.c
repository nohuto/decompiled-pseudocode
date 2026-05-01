/*
 * XREFs of ?OnTitleBarsCreated@ViewGroup@@UEAAJXZ @ 0x180307820
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A19B8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewGroup::OnTitleBarsCreated(ViewGroup *this)
{
  RTL_SRWLOCK *v2; // rbp
  __int64 *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // r9
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = (RTL_SRWLOCK *)((char *)this + 152);
  AcquireSRWLockShared((PSRWLOCK)this + 19);
  if ( !*((_BYTE *)this + 196) )
  {
    v3 = (__int64 *)*((_QWORD *)this + 20);
    v4 = *v3;
    v7 = *v3;
    while ( (__int64 *)v4 != v3 )
    {
      LOBYTE(v5) = (unsigned int)SHIsSameObject(*(struct IUnknown **)(v4 + 32), *((struct IUnknown **)this + 22)) != 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, char *, __int64))(**((_QWORD **)this + 8) + 56LL))(
        *((_QWORD *)this + 8),
        *(_QWORD *)(v4 + 32),
        (char *)this + 88,
        v5);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++(&v7);
      v4 = v7;
    }
  }
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return 0LL;
}
