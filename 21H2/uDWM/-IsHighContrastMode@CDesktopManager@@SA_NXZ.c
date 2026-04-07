/*
 * XREFs of ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x180086EBC
 * Callers:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18001E320 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x180025364 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?InitializeHighContrast@CDesktopManager@@AEAAXXZ @ 0x180049BB8 (-InitializeHighContrast@CDesktopManager@@AEAAXXZ.c)
 *     ?_UpdateInstructions@CProjectionBorderVisual@@IEAAJXZ @ 0x18009360C (-_UpdateInstructions@CProjectionBorderVisual@@IEAAJXZ.c)
 *     ?GetPillarBoxColor@CImmersiveState@@SAXPEAU_D3DCOLORVALUE@@@Z @ 0x1800B9364 (-GetPillarBoxColor@CImmersiveState@@SAXPEAU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil@@QEAA_NXZ @ 0x18001EF60 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@det.c)
 */

char CDesktopManager::IsHighContrastMode(void)
{
  char result; // al
  int pvParam; // [rsp+20h] [rbp-18h] BYREF
  char v2; // [rsp+24h] [rbp-14h]

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::GetImpl'::`2'::impl) )
    return *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 26);
  pvParam = 16;
  if ( !SystemParametersInfoW(0x42u, 0x10u, &pvParam, 0) )
    return 0;
  result = 1;
  if ( (v2 & 1) == 0 )
    return 0;
  return result;
}
