/*
 * XREFs of ?GetSearchboxTaskbarMode@@YA?AW4SearchboxTaskbarMode@@XZ @ 0x18000FF14
 * Callers:
 *     ?ShowInternal@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x1800120FC (-ShowInternal@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOpti.c)
 *     ?ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x180281014 (-ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOption.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180010180 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchInAllMarkets@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800101CC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchInAllMarkets@@@details@wil@@QEAAX_N.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x180010CEC (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 */

__int64 __fastcall GetSearchboxTaskbarMode(TabletModeHelpers *a1)
{
  __int64 v1; // rdx
  unsigned int v2; // ebx
  unsigned int v4; // eax
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = 1;
  if ( !TabletModeHelpers::IsTabletMode(a1) )
  {
    LOBYTE(v1) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchInAllMarkets>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_SearchInAllMarkets>::GetImpl'::`2'::impl,
      v1);
    v5 = 2;
    if ( (unsigned int)SHRegGetDWORD(
                         HKEY_CURRENT_USER,
                         L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
                         L"SearchboxTaskbarMode",
                         &v5) == -2147024894
      && (v6 = 0,
          (int)SHRegGetDWORD(
                 HKEY_CURRENT_USER,
                 L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
                 L"SearchboxTaskbarModeForceGlyph",
                 &v6) >= 0) )
    {
      v4 = v5;
      if ( v6 )
        return 1;
      return v4;
    }
    else
    {
      return v5;
    }
  }
  return v2;
}
