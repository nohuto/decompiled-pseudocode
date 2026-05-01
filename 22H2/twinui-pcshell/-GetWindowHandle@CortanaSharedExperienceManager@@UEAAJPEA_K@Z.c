/*
 * XREFs of ?GetWindowHandle@CortanaSharedExperienceManager@@UEAAJPEA_K@Z @ 0x180228160
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18004BD28 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetViewWrapper@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x18022BAAC (-_GetViewWrapper@CortanaSharedExperienceManager@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerIntero.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::GetWindowHandle(
        CortanaSharedExperienceManager *this,
        unsigned __int64 *a2)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v3; // rdx
  __int64 v4; // rbx
  ExperienceManagerUtils *v6; // [rsp+38h] [rbp+10h] BYREF

  CortanaSharedExperienceManager::_GetViewWrapper(this, &v6);
  v4 = 0LL;
  if ( v6 )
    v4 = ExperienceManagerUtils::WindowFromViewWrapper(v6, v3);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v6);
  *a2 = v4;
  return v4 == 0 ? 0x8007139F : 0;
}
