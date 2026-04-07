/*
 * XREFs of ?InitializeHighContrast@CDesktopManager@@AEAAXXZ @ 0x180049BB8
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180036E1C (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x180048668 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil@@QEAA_NXZ @ 0x18001EF60 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@det.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x180086EBC (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 */

void __fastcall CDesktopManager::InitializeHighContrast(CDesktopManager *this)
{
  DWORD SysColor; // ebx
  char IsImmersiveColorUsingHighContrast; // al

  SysColor = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::GetImpl'::`2'::impl) )
    IsImmersiveColorUsingHighContrast = GetIsImmersiveColorUsingHighContrast(1LL);
  else
    IsImmersiveColorUsingHighContrast = CDesktopManager::IsHighContrastMode();
  *((_BYTE *)this + 26) = IsImmersiveColorUsingHighContrast;
  if ( IsImmersiveColorUsingHighContrast )
  {
    *((_DWORD *)this + 142) = GetSysColor(2);
    SysColor = GetSysColor(3);
  }
  else
  {
    *((_DWORD *)this + 142) = 0;
  }
  *((_DWORD *)this + 143) = SysColor;
}
