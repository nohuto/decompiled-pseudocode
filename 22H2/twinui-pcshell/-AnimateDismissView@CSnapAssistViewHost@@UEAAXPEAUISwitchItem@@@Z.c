/*
 * XREFs of ?AnimateDismissView@CSnapAssistViewHost@@UEAAXPEAUISwitchItem@@@Z @ 0x1803FD5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIAnimatableMultitaskingViewFrame@@@?$ComPtr@UIMultitaskingViewFrame@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAnimatableMultitaskingViewFrame@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803FCC54 (--$As@UIAnimatableMultitaskingViewFrame@@@-$ComPtr@UIMultitaskingViewFrame@@@WRL@Microsoft@@QEBA.c)
 *     ??$As@UIDismissAnimationController@@@?$ComPtr@UIMultitaskingViewController@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDismissAnimationController@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803FCC98 (--$As@UIDismissAnimationController@@@-$ComPtr@UIMultitaskingViewController@@@WRL@Microsoft@@QEBA.c)
 *     ??$CallControllerAsync@UIDismissAnimationController@@$$V@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UIDismissAnimationController@@@WRL@Microsoft@@P8IDismissAnimationController@@EAAXXZ@Z @ 0x1803FCD20 (--$CallControllerAsync@UIDismissAnimationController@@$$V@AsyncControllerHelpers@@YAXAEAV-$ComPtr.c)
 *     ?SnapAssistViewDismissalAnimationCoordinator_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewAnimation@@AEBU_GUID@@PEAPEAX@Z @ 0x18040D2F4 (-SnapAssistViewDismissalAnimationCoordinator_CreateInstance@@YAJPEAUIWeakReference@WeakReference.c)
 */

void __fastcall CSnapAssistViewHost::AnimateDismissView(CSnapAssistViewHost *this, struct ISwitchItem *a2)
{
  int v3; // eax
  struct IWeakReference *v4; // rbx
  struct IMultitaskingViewAnimation *v5; // rdi
  const struct _GUID *v6; // r8
  int v7; // eax
  __int64 v8; // rdx
  char v9; // bl
  int v10; // eax
  __int64 v11[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  void *v13; // [rsp+60h] [rbp+30h] BYREF
  struct IMultitaskingViewAnimation *v14; // [rsp+70h] [rbp+40h] BYREF
  struct IWeakReference *v15; // [rsp+78h] [rbp+48h] BYREF

  v14 = 0LL;
  if ( *((_QWORD *)this + 9) )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    v3 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IMultitaskingViewAnimation **))this + 9))(
           *((_QWORD *)this + 9),
           &GUID_a1b0cf80_ce10_4efd_8623_e2697c1b0f4b,
           &v14);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x101,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewhost.cpp",
        (const char *)(unsigned int)v3);
  }
  v11[0] = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  v5 = v14;
  v15 = (struct IWeakReference *)*((_QWORD *)this + 7);
  v4 = v15;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
  v7 = SnapAssistViewDismissalAnimationCoordinator_CreateInstance(v4, v5, v6, &v13);
  if ( v7 < 0 )
  {
    v8 = 262LL;
LABEL_10:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewhost.cpp",
      (const char *)(unsigned int)v7);
    v9 = 1;
    goto LABEL_12;
  }
  v7 = Microsoft::WRL::ComPtr<IMultitaskingViewFrame>::As<IAnimatableMultitaskingViewFrame>((_QWORD *)this + 5, v11);
  if ( v7 < 0 )
  {
    v8 = 263LL;
    goto LABEL_10;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)v11[0] + 168LL))(v11[0], v13);
  if ( v7 < 0 )
  {
    v8 = 264LL;
    goto LABEL_10;
  }
  v9 = 0;
LABEL_12:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  if ( v9 )
  {
    v15 = 0LL;
    v10 = Microsoft::WRL::ComPtr<IMultitaskingViewController>::As<IDismissAnimationController>(
            (_QWORD *)this + 6,
            (__int64 *)&v15);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x10B,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewhost.cpp",
        (const char *)(unsigned int)v10);
    AsyncControllerHelpers::CallControllerAsync<IDismissAnimationController,>((__int64 *)&v15);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
}
