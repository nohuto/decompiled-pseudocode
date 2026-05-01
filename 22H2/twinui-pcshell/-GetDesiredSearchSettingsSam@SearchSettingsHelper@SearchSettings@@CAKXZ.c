/*
 * XREFs of ?GetDesiredSearchSettingsSam@SearchSettingsHelper@SearchSettings@@CAKXZ @ 0x1800A6D98
 * Callers:
 *     ?AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBGPEAU_EXPLICIT_ACCESS_W@@@Z @ 0x1800A1F80 (-AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBGPEAU_EXPLICIT_ACCESS_W@@@Z.c)
 *     ?CreateKeyAndSetSecurityDescriptor@SearchSettingsHelper@SearchSettings@@SAJPEBG@Z @ 0x1800A2A04 (-CreateKeyAndSetSecurityDescriptor@SearchSettingsHelper@SearchSettings@@SAJPEBG@Z.c)
 *     ?CreateKeyAndSetSecurityDescriptorRecursively@SearchSettingsHelper@SearchSettings@@SAJXZ @ 0x1800A2CD0 (-CreateKeyAndSetSecurityDescriptorRecursively@SearchSettingsHelper@SearchSettings@@SAJXZ.c)
 *     ?DoKeysExistAndCanAccess@SearchSettingsHelper@SearchSettings@@SA_NXZ @ 0x1800A2FF8 (-DoKeysExistAndCanAccess@SearchSettingsHelper@SearchSettings@@SA_NXZ.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_47503639@@@details@wil@@QEAA_NXZ @ 0x1800AB5B4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_47503639@@@details@wil@@QEAA_NXZ.c)
 */

__int64 SearchSettings::SearchSettingsHelper::GetDesiredSearchSettingsSam(void)
{
  return (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_47503639>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_47503639>::GetImpl'::`2'::impl) != 0
       ? 196639
       : 131103;
}
