/*
 * XREFs of _lambda_f27b60bae871d07517fb334ba178f733_::operator() @ 0x180353F5C
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f27b60bae871d07517fb334ba178f733___::Run @ 0x180354C40 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_f27b60bae871d07517fb334ba178f733___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180022A34 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAU?$_Tree_node@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1802C380C (-_Extract@-$_Tree_val@U-$_Tree_simple_types@V-$com_ptr_t@UIViewGroupInternal@@Uerr_exception_pol.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@W4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@U?$less@W4WindowingEnvironmentType@@@std@@V?$allocator@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBW4WindowingEnvironmentType@@@Z @ 0x180355214 (-find@-$_Tree@V-$_Tmap_traits@W4WindowingEnvironmentType@@V-$com_ptr_t@UIWindowingEnvironmentCon.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_f27b60bae871d07517fb334ba178f733_::operator()(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 *v4; // rdi
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  unsigned int i; // edi
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  const char *v17; // r9
  __int64 v19; // [rsp+20h] [rbp-28h] BYREF
  __int64 v20[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v22; // [rsp+50h] [rbp+8h] BYREF
  __int64 v23; // [rsp+58h] [rbp+10h] BYREF
  __int64 v24; // [rsp+60h] [rbp+18h] BYREF
  __int64 v25; // [rsp+68h] [rbp+20h] BYREF

  std::_Tree<std::_Tmap_traits<enum WindowingEnvironmentType,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>,std::less<enum WindowingEnvironmentType>,std::allocator<std::pair<enum WindowingEnvironmentType const,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>>>,0>>::find(
    *a1 + 168LL,
    &v22,
    a1[1]);
  v2 = v22;
  v3 = *(_QWORD *)(v22 + 40);
  v20[0] = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3) )
  {
    v4 = std::_Tree_val<std::_Tree_simple_types<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>>>::_Extract(
           (_QWORD *)(*a1 + 168LL),
           v2);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v4 + 5);
    std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)0x30);
    try
    {
      v24 = 0LL;
      v5 = *(_QWORD *)(*a1 + 192LL);
      v24 = 0LL;
      v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 48LL))(v5, &v24);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          182LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v6);
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
      wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
        &v19,
        v7);
      v8 = v19;
      if ( !v19 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          185LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)0x8000FFFFLL);
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 64LL))(v8, 0LL);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          187LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v9);
      v23 = 0LL;
      v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 48LL))(v8, &v23);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          190LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v10);
      v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 56LL))(v23, &v22);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          193LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v11);
      for ( i = 0; i < (unsigned int)v22; ++i )
      {
        v25 = 0LL;
        v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v23 + 48LL))(v23, i, &v25);
        if ( v13 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            198LL,
            (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
            (const char *)(unsigned int)v13);
        v14 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 104LL))(v8, v25);
        if ( v14 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            199LL,
            (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
            (const char *)(unsigned int)v14);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v25);
      }
      v15 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*a1 + 184LL) + 88LL))(
              *(_QWORD *)(*a1 + 184LL),
              v8);
      if ( v15 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          202LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v15);
      v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 56LL))(v24);
      if ( v16 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          204LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v16);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
    }
    catch ( ... )
    {
      LODWORD(v22) = wil::details::in1diag3::Return_CaughtException(
                       retaddr,
                       (void *)0xCE,
                       (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
                       v17);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v20);
      return (unsigned int)v22;
    }
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v20);
  return 0LL;
}
