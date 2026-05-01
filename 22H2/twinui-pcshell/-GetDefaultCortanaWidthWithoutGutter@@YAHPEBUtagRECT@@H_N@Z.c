/*
 * XREFs of ?GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H_N@Z @ 0x18009B248
 * Callers:
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x180018510 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x180243940 (-PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x18027F378 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x180018BA0 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 *     ?GetCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@_N@Z @ 0x18009B1BC (-GetCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@_N@Z.c)
 *     ?IsTextScaleFactorWithinThreshold@@YAEH_N@Z @ 0x18009B3B0 (-IsTextScaleFactorWithinThreshold@@YAEH_N@Z.c)
 */

__int64 __fastcall GetDefaultCortanaWidthWithoutGutter(const struct tagRECT *a1, int a2, char a3)
{
  unsigned int CortanaWidthWithoutGutter; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  bool v9; // dl
  int v11; // [rsp+48h] [rbp+20h] BYREF

  CortanaWidthWithoutGutter = GetCortanaWidthWithoutGutter(a1, a3);
  v11 = 0;
  v6 = CortanaWidthWithoutGutter;
  if ( (int)CortanaFeatureConfiguration::GetDWORD((CortanaFeatureConfiguration *)0x3A, &v11) >= 0 && (v7 = v11) != 0
    || (v8 = MulDiv(a1->right - a1->left, 96, a2), IsTextScaleFactorWithinThreshold(v8, v9))
    && (int)CortanaFeatureConfiguration::GetDWORD((CortanaFeatureConfiguration *)0x38, &v11) >= 0
    && (v7 = v11) != 0 )
  {
    v6 += v7;
  }
  return v6;
}
