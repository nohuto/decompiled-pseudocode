/*
 * XREFs of ?GetHwnd@ShellFeedsDesktopExperienceView@@AEAAPEAUHWND__@@XZ @ 0x1800C2FB4
 * Callers:
 *     ?LowLevelMouseHookProc@ShellFeedsDesktopExperienceView@@CA_JH_K_J@Z @ 0x1800C39B0 (-LowLevelMouseHookProc@ShellFeedsDesktopExperienceView@@CA_JH_K_J@Z.c)
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18004BD28 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewWrapper@ShellFeedsDesktopExperienceView@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x1800C3424 (-GetViewWrapper@ShellFeedsDesktopExperienceView@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerIntero.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellFeedsDesktopExperienceView::GetHwnd(ShellFeedsDesktopExperienceView *this)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v1; // rdx
  __int64 v2; // rbx
  ExperienceManagerUtils *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = this;
  ShellFeedsDesktopExperienceView::GetViewWrapper(`anonymous namespace'::g_shellFeedsExperienceView, &v4);
  v2 = 0LL;
  if ( v4 )
    v2 = ExperienceManagerUtils::WindowFromViewWrapper(v4, v1);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v4);
  return v2;
}
