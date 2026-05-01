/*
 * XREFs of ?ApplyPresentationChanges@FullScreenPositioner@@AEAAXPEAUIApplicationView@@PEAUIPresentationRequestedArgs@@@Z @ 0x1802147B8
 * Callers:
 *     ?ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180214DD0 (-ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@P.c)
 *     ?PresentationChangedForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x1802165D0 (-PresentationChangedForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationView@@@Z @ 0x1804E16DC (-GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationVie.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall FullScreenPositioner::ApplyPresentationChanges(
        FullScreenPositioner *this,
        struct IApplicationView *a2,
        struct IPresentationRequestedArgs *a3)
{
  struct IApplicationView *v4; // rdx
  BOOL v5; // edi
  struct IImmersiveApplication *ApplicationFromView; // rbx
  int v7; // eax
  __int64 v8; // rbx
  int v9; // eax
  __int16 v10; // [rsp+38h] [rbp-18h] BYREF
  BOOL v11; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  int v13; // [rsp+70h] [rbp+20h] BYREF
  int v14; // [rsp+74h] [rbp+24h]
  __int64 v15; // [rsp+80h] [rbp+30h] BYREF
  struct IImmersiveApplication *v16; // [rsp+88h] [rbp+38h] BYREF

  v14 = HIDWORD(this);
  v13 = 0;
  if ( (*(int (__fastcall **)(struct IPresentationRequestedArgs *, int *))(*(_QWORD *)a3 + 112LL))(a3, &v13) >= 0 )
  {
    v5 = v13 != 0;
    ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(a2, v4);
    v16 = ApplicationFromView;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
    if ( !ApplicationFromView )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1223LL,
        (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)0x80004001LL);
      __debugbreak();
    }
    v15 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    v7 = (*(__int64 (__fastcall **)(struct IImmersiveApplication *, _QWORD, GUID *, __int64 *))(*(_QWORD *)ApplicationFromView
                                                                                              + 48LL))(
           ApplicationFromView,
           0LL,
           &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
           &v15);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1226LL,
        (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
    v8 = v15;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v10 = 3;
    v11 = v5;
    v9 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int16 *))(*(_QWORD *)v8 + 48LL))(
           v8,
           &PKEY_ImmersiveApplication_FullScreenSystemOverlayMode,
           &v10);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1229LL,
        (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v9);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  }
}
