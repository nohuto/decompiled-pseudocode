/*
 * XREFs of ?IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180058660
 * Callers:
 *     ?IsFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@PEAH@Z @ 0x1800587B0 (-IsFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@PEAH@Z.c)
 *     ?EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x1802195B0 (-EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FUL.c)
 *     ?ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x180219850 (-ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@.c)
 * Callees:
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_eff81aa7953cc35c0732a2758107af95___ @ 0x18005618C (ShellPositionerHelpers--PerformCallbackOnView__lambda_eff81aa7953cc35c0732a2758107af95___.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180058720 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioner.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFullScreenManager::IsViewFullScreen(CFullScreenManager *this, struct IApplicationView *a2, int *a3)
{
  int v4; // ebx
  __int64 v7; // rdx
  IUnknown *v8; // rcx
  _QWORD v10[4]; // [rsp+20h] [rbp-20h] BYREF
  char v11; // [rsp+68h] [rbp+28h] BYREF
  __int64 v12; // [rsp+70h] [rbp+30h] BYREF

  v4 = 0;
  *a3 = 0;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  if ( (*(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 264LL))(a2, &v12) >= 0 )
  {
    LOBYTE(v7) = 1;
    v11 = 0;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::GetImpl'::`2'::impl,
      v7);
    v8 = (IUnknown *)*((_QWORD *)this - 9);
    v10[2] = &v11;
    v10[0] = a2;
    v10[1] = a3;
    ShellPositionerHelpers::PerformCallbackOnView__lambda_eff81aa7953cc35c0732a2758107af95___(
      v8,
      (__int64)a2,
      (__int64)v10);
    if ( !v11 )
    {
      LOBYTE(v4) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12) == 3;
      *a3 = v4;
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  return 0LL;
}
