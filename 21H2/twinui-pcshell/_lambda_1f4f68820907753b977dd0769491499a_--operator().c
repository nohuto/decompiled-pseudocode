/*
 * XREFs of _lambda_1f4f68820907753b977dd0769491499a_::operator() @ 0x1802F5E54
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1f4f68820907753b977dd0769491499a___::Run @ 0x1802F7FB0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1f4f68820907753b977dd0769491499a___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801AA0BC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$emplace@AEAV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@AEAV?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@std@@_N@1@AEAV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@AEAV?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@4@@Z @ 0x1802F5144 (--$emplace@AEAV-$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@AEAV-$com_pt.c)
 *     ??$wait_for_completion@PEAVTitleBarFactory@Experience@Shell@Internal@Windows@@V?$ComPtr@UITitleBarFactory@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UITitleBarFactory@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVTitleBarFactory@Experience@Shell@Internal@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x1802F5384 (--$wait_for_completion@PEAVTitleBarFactory@Experience@Shell@Internal@Windows@@V-$ComPtr@UITitleB.c)
 *     ?ConnectTitleBarToSharedVisual@TitleBarController@@AEAAXPEAUITitleBar@Experience@Shell@Internal@Windows@@PEAUIWin32ApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@56@@Z @ 0x1802F687C (-ConnectTitleBarToSharedVisual@TitleBarController@@AEAAXPEAUITitleBar@Experience@Shell@Internal@.c)
 *     ?RemoveWin32View@TitleBarController@@AEAAJPEAUIWin32ApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802F7E88 (-RemoveWin32View@TitleBarController@@AEAAJPEAUIWin32ApplicationView@@AEBUShellTabGroupId@Tabs@Co.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_1f4f68820907753b977dd0769491499a_::operator()(
        RTL_SRWLOCK **a1,
        __int64 a2,
        const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *a3)
{
  __int64 *v4; // r15
  int v5; // eax
  __int64 v6; // rax
  __int64 (*v7)(void); // rax
  int v8; // eax
  int v9; // r8d
  _QWORD *v10; // rbx
  __int64 v11; // rax
  int v12; // eax
  RTL_SRWLOCK *v13; // r14
  const char *v14; // r9
  TitleBarController *v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  RTL_SRWLOCK *v19; // rsi
  const char *v20; // r9
  __int64 result; // rax
  int v22[4]; // [rsp+20h] [rbp-48h] BYREF
  RTL_SRWLOCK **v23; // [rsp+30h] [rbp-38h]
  char v24; // [rsp+38h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct Windows::Internal::Shell::Experience::ITitleBar *v26; // [rsp+70h] [rbp+8h] BYREF
  void (__fastcall ***v27)(__int64, GUID *, __int64 *); // [rsp+78h] [rbp+10h]
  _QWORD *v28; // [rsp+80h] [rbp+18h] BYREF
  RTL_SRWLOCK *v29; // [rsp+88h] [rbp+20h]

  v4 = (__int64 *)(a1 + 2);
  v5 = TitleBarController::RemoveWin32View((TitleBarController *)*a1, (struct IWin32ApplicationView *)a1[2], a3);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x25C,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
      (const char *)(unsigned int)v5);
  v27 = 0LL;
  v6 = *(_QWORD *)(*a1)[14].Ptr;
  v27 = 0LL;
  v7 = *(__int64 (**)(void))(v6 + 72);
  try
  {
    v8 = v7();
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        607LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
        (const char *)(unsigned int)v8);
    wil::wait_for_completion<Windows::Internal::Shell::Experience::TitleBarFactory *,Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::ITitleBarFactory>>(
      &v28,
      v27,
      v9);
    v10 = v28;
    v26 = 0LL;
    v11 = *v28;
    v26 = 0LL;
    v12 = (*(__int64 (__fastcall **)(_QWORD *, struct Windows::Internal::Shell::Experience::ITitleBar **))(v11 + 48))(
            v28,
            &v26);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        612LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
        (const char *)(unsigned int)v12);
    v13 = *a1 + 10;
    AcquireSRWLockExclusive(v13);
    v29 = v13;
    std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>>>,0>>::emplace<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> &,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy> &>(
      (__int64 *)&(*a1)[11],
      (__int64)v22,
      v4,
      (__int64 *)&v26);
    v15 = retaddr;
    if ( !LOBYTE(v22[2]) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        619LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
        v14);
    if ( v13 )
      ReleaseSRWLockExclusive(v13);
    *(_QWORD *)v22 = *a1;
    *(_QWORD *)&v22[2] = v4;
    v23 = a1 + 3;
    v24 = 1;
    if ( *((_BYTE *)a1 + 40) )
      TitleBarController::ConnectTitleBarToSharedVisual(
        v15,
        v26,
        (struct IWin32ApplicationView *)*v4,
        (const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *)v14);
    v16 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::ITitleBar *, __int64))(*(_QWORD *)v26 + 232LL))(
            v26,
            7LL);
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        634LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
        (const char *)(unsigned int)v16);
    LOBYTE(v17) = 1;
    v18 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::ITitleBar *, __int64))(*(_QWORD *)v26 + 200LL))(
            v26,
            v17);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        635LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
        (const char *)(unsigned int)v18);
    v19 = a1[6];
    a1[6] = 0LL;
    if ( v19 )
    {
      if ( LOBYTE(v19[2].Ptr) )
      {
        LOBYTE(v19[2].Ptr) = 0;
        *(_OWORD *)v22 = *(_OWORD *)&v19->Ptr;
        DwmpEndAnimationClock(v22);
      }
      operator delete(v19, (const struct std::nothrow_t *)0x14);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v26);
    (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
    if ( v27 )
      ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v27)[2])(v27);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v26) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x282,
                     (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
                     v20);
    return (unsigned int)v26;
  }
  return result;
}
