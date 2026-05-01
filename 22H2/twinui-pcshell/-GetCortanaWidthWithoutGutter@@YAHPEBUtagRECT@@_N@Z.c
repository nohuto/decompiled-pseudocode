/*
 * XREFs of ?GetCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@_N@Z @ 0x18009B1BC
 * Callers:
 *     ?ComputeAndOnTraySearchItemChanged@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x1800757C4 (-ComputeAndOnTraySearchItemChanged@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     ?GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H_N@Z @ 0x18009B248 (-GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H_N@Z.c)
 *     ?GetTaskbarSearchBoxWidth@@YAHPEBUtagRECT@@_N@Z @ 0x1800C0068 (-GetTaskbarSearchBoxWidth@@YAHPEBUtagRECT@@_N@Z.c)
 *     ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x180243940 (-PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ.c)
 *     ?CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z @ 0x18027A350 (-CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z.c)
 *     ?ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x18027A520 (-ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     ?OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z @ 0x18027DC00 (-OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x18027F378 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x180018BA0 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 *     ?IsSmallIconsMode@@YA_NXZ @ 0x18009B2E0 (-IsSmallIconsMode@@YA_NXZ.c)
 */

__int64 __fastcall GetCortanaWidthWithoutGutter(const struct tagRECT *a1, char a2)
{
  int v3; // esi
  int v4; // ebx
  unsigned int v5; // edi
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF

  v3 = a1->right - a1->left;
  if ( a2 && IsSmallIconsMode() )
  {
    return 258;
  }
  else
  {
    v4 = 344;
    if ( v3 < 1196 )
      v4 = 320;
    if ( a2 )
    {
      v7 = 0;
      v5 = v4;
      if ( (int)CortanaFeatureConfiguration::GetDWORD(
                  (CortanaFeatureConfiguration *)((unsigned int)(v3 >= 1196) + 30),
                  &v7) >= 0
        && v7 >= 0xF0
        && (int)v7 <= v4 )
      {
        return v7;
      }
      return v5;
    }
  }
  return (unsigned int)v4;
}
