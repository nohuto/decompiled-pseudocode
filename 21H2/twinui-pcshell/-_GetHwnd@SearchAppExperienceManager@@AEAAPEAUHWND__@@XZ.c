/*
 * XREFs of ?_GetHwnd@SearchAppExperienceManager@@AEAAPEAUHWND__@@XZ @ 0x18007DFEC
 * Callers:
 *     ?_OnClientWindowReadyForPresentationChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x1800215F0 (-_OnClientWindowReadyForPresentationChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIClientW.c)
 *     ?GetWindowHandle@SearchAppExperienceManager@@UEAAJPEA_K@Z @ 0x18007DFC0 (-GetWindowHandle@SearchAppExperienceManager@@UEAAJPEA_K@Z.c)
 *     ?StartFullActivationTest@SearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1800A9D58 (-StartFullActivationTest@SearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaA.c)
 *     ?_TrackMouseMovement@SearchAppExperienceManager@@AEAAXXZ @ 0x1800AB450 (-_TrackMouseMovement@SearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18004BD28 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetViewWrapper@SearchAppExperienceManager@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x18007E02C (-_GetViewWrapper@SearchAppExperienceManager@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerInterop@Sh.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppExperienceManager::_GetHwnd(SearchAppExperienceManager *this)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v1; // rdx
  __int64 v2; // rbx
  ExperienceManagerUtils *v4; // [rsp+38h] [rbp+10h] BYREF

  SearchAppExperienceManager::_GetViewWrapper(this, &v4);
  v2 = 0LL;
  if ( v4 )
    v2 = ExperienceManagerUtils::WindowFromViewWrapper(v4, v1);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v4);
  return v2;
}
