/*
 * XREFs of ?CreateWindowingEnvironmentConfig@WindowingEnvironmentManager@@UEAAJW4WindowingEnvironmentType@@PEAPEAUIWindowingEnvironmentConfig@@@Z @ 0x1803544F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_aa4892268e0364aa795347ae8a8bf43d___ @ 0x180353344 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_aa4892268e0364aa795347ae8a8bf43d.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@W4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@U?$less@W4WindowingEnvironmentType@@@std@@V?$allocator@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBW4WindowingEnvironmentType@@@Z @ 0x180355214 (-find@-$_Tree@V-$_Tmap_traits@W4WindowingEnvironmentType@@V-$com_ptr_t@UIWindowingEnvironmentCon.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowingEnvironmentManager::CreateWindowingEnvironmentConfig(RTL_SRWLOCK *a1, int a2, _QWORD *a3)
{
  RTL_SRWLOCK *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdi
  DWORD CurrentThreadId; // eax
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // eax
  const char *v12; // r9
  __int64 result; // rax
  int v14[2]; // [rsp+20h] [rbp-38h] BYREF
  int *v15; // [rsp+28h] [rbp-30h]
  __int64 *v16; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF
  int v19; // [rsp+68h] [rbp+10h] BYREF
  __int64 *v20; // [rsp+70h] [rbp+18h] BYREF

  v19 = a2;
  *a3 = 0LL;
  v18 = 0LL;
  v5 = a1 + 3;
  AcquireSRWLockShared(a1 + 3);
  std::_Tree<std::_Tmap_traits<enum WindowingEnvironmentType,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>,std::less<enum WindowingEnvironmentType>,std::allocator<std::pair<enum WindowingEnvironmentType const,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>>>,0>>::find(
    &a1[4],
    &v20,
    &v19);
  try
  {
    if ( v20 != a1[4].Ptr )
    {
      v6 = v20[5];
      v7 = v18;
      v18 = v6;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( v5 )
      ReleaseSRWLockShared(v5);
    if ( !v18 )
    {
      AcquireSRWLockExclusive(v5);
      v20 = (__int64 *)v5;
      *(_QWORD *)v14 = a1 - 17;
      v15 = &v19;
      v16 = &v18;
      CurrentThreadId = GetCurrentThreadId();
      v10 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_aa4892268e0364aa795347ae8a8bf43d___(
              v9,
              CurrentThreadId,
              (__int64)v14);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          102LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v10);
      if ( v5 )
        ReleaseSRWLockExclusive(v5);
    }
    v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v18)(
            v18,
            &GUID_3c32be79_d44b_4c43_b19b_12f70e686f35,
            a3);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        5495LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v11);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 24LL))(v18);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v18) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x70,
                     (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
                     v12);
    return (unsigned int)v18;
  }
  return result;
}
