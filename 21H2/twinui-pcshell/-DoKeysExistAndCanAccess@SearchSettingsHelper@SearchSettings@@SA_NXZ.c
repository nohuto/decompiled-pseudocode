/*
 * XREFs of ?DoKeysExistAndCanAccess@SearchSettingsHelper@SearchSettings@@SA_NXZ @ 0x1800A3018
 * Callers:
 *     ?AuditWebSearchExtensions@SearchAppExperienceManager@@CAXXZ @ 0x1800A2268 (-AuditWebSearchExtensions@SearchAppExperienceManager@@CAXXZ.c)
 * Callees:
 *     ?GetDesiredSearchSettingsSam@SearchSettingsHelper@SearchSettings@@CAKXZ @ 0x1800A6DB8 (-GetDesiredSearchSettingsSam@SearchSettingsHelper@SearchSettings@@CAKXZ.c)
 *     ?HasKeyAccess@SearchSettingsHelper@SearchSettings@@CA_NPEAUHKEY__@@PEBGK@Z @ 0x1800A6EC0 (-HasKeyAccess@SearchSettingsHelper@SearchSettings@@CA_NPEAUHKEY__@@PEBGK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55370823@@@details@wil@@QEAA_NXZ @ 0x1800AB610 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55370823@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56277908@@@details@wil@@QEAA_NXZ @ 0x1800AB64C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56277908@@@details@wil@@QEAA_NXZ.c)
 */

bool SearchSettings::SearchSettingsHelper::DoKeysExistAndCanAccess(void)
{
  unsigned int DesiredSearchSettingsSam; // edi
  HKEY v1; // rcx
  HKEY v2; // rcx
  bool HasKeyAccess; // bl
  HKEY v4; // rcx
  HKEY v5; // rcx

  DesiredSearchSettingsSam = SearchSettings::SearchSettingsHelper::GetDesiredSearchSettingsSam();
  HasKeyAccess = SearchSettings::SearchSettingsHelper::HasKeyAccess(
                   v1,
                   L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings",
                   DesiredSearchSettingsSam);
  if ( HasKeyAccess )
    HasKeyAccess = SearchSettings::SearchSettingsHelper::HasKeyAccess(
                     v2,
                     L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings\\WebSearchProviders",
                     DesiredSearchSettingsSam);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55370823>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55370823>::GetImpl'::`2'::impl)
    && HasKeyAccess )
  {
    HasKeyAccess = SearchSettings::SearchSettingsHelper::HasKeyAccess(
                     v4,
                     L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings\\WebSearchProviders\\InstalledDates",
                     DesiredSearchSettingsSam);
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56277908>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56277908>::GetImpl'::`2'::impl) )
  {
    if ( !HasKeyAccess )
      return HasKeyAccess;
    HasKeyAccess = SearchSettings::SearchSettingsHelper::HasKeyAccess(
                     v5,
                     L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings\\WebSearchProviders\\Index",
                     DesiredSearchSettingsSam);
  }
  if ( HasKeyAccess )
    return SearchSettings::SearchSettingsHelper::HasKeyAccess(
             v5,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
             DesiredSearchSettingsSam);
  return HasKeyAccess;
}
