/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_GifSuggestionOnDesktop@@@wil@@SA_NXZ @ 0x180284EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GifSuggestionOnDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802856F8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GifSuggestionOnDesktop@@@details@wil@@QEA.c)
 */

char __fastcall wil::Feature<__WilFeatureTraits_Feature_GifSuggestionOnDesktop>::IsEnabled(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GifSuggestionOnDesktop>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_GifSuggestionOnDesktop>::GetImpl'::`2'::impl,
    a2);
  return 1;
}
