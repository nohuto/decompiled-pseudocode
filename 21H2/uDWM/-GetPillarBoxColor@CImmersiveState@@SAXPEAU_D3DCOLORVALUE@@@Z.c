/*
 * XREFs of ?GetPillarBoxColor@CImmersiveState@@SAXPEAU_D3DCOLORVALUE@@@Z @ 0x1800B9364
 * Callers:
 *     ?SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800B987C (-SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x180086EBC (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     GetStaticImmersiveColorPrivForHighContrastState @ 0x1800C1AF0 (GetStaticImmersiveColorPrivForHighContrastState.c)
 */

void __fastcall CImmersiveState::GetPillarBoxColor(struct _D3DCOLORVALUE *a1)
{
  __int64 v2; // rdx
  int StaticImmersiveColorPrivForHighContrastState; // eax
  D3DVALUE v4; // xmm0_4

  LOBYTE(v2) = CDesktopManager::IsHighContrastMode();
  StaticImmersiveColorPrivForHighContrastState = GetStaticImmersiveColorPrivForHighContrastState(570LL, v2);
  v4 = GammaLUT_sRGB_to_scRGB[(unsigned __int8)StaticImmersiveColorPrivForHighContrastState] / 255.0;
  a1->a = 1.0;
  a1->r = v4;
  a1->g = GammaLUT_sRGB_to_scRGB[(unsigned __int64)(unsigned __int16)StaticImmersiveColorPrivForHighContrastState >> 8]
        / 255.0;
  a1->b = GammaLUT_sRGB_to_scRGB[BYTE2(StaticImmersiveColorPrivForHighContrastState)] / 255.0;
}
