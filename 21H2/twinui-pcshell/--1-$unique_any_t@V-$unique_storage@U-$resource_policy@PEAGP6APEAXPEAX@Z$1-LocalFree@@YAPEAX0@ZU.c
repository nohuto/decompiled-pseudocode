/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18026528C
 * Callers:
 *     ?AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBGPEAU_EXPLICIT_ACCESS_W@@@Z @ 0x1800A1FA0 (-AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBGPEAU_EXPLICIT_ACCESS_W@@@Z.c)
 *     _SearchSettings::SearchSettingsHelper::AddAceToKeyRecursively_::_1_::dtor$1 @ 0x1800A21E5 (_SearchSettings--SearchSettingsHelper--AddAceToKeyRecursively_--_1_--dtor$1.c)
 *     ?CreateKeyAndSetSecurityDescriptor@SearchSettingsHelper@SearchSettings@@SAJPEBG@Z @ 0x1800A2A24 (-CreateKeyAndSetSecurityDescriptor@SearchSettingsHelper@SearchSettings@@SAJPEBG@Z.c)
 *     _SearchSettings::SearchSettingsHelper::CreateKeyAndSetSecurityDescriptor_::_1_::dtor$3 @ 0x1800A2CDE (_SearchSettings--SearchSettingsHelper--CreateKeyAndSetSecurityDescriptor_--_1_--dtor$3.c)
 *     ?CreateShellFeedsRegEncryptionFlag@ShellFeedsEncryptionHelper@1@AEAAJXZ @ 0x1800B2098 (-CreateShellFeedsRegEncryptionFlag@ShellFeedsEncryptionHelper@1@AEAAJXZ.c)
 *     ?EnsureAppContainerAccesses@ShellFeedsEncryptionHelper@1@AEAAJXZ @ 0x1800B27E4 (-EnsureAppContainerAccesses@ShellFeedsEncryptionHelper@1@AEAAJXZ.c)
 *     ?PrecreateStartMenuConfigRegKey@StartRegHelpers@StartUI@@YAXXZ @ 0x1800CC0D8 (-PrecreateStartMenuConfigRegKey@StartRegHelpers@StartUI@@YAXXZ.c)
 *     _StartUI::StartRegHelpers::PrecreateStartMenuConfigRegKey_::_1_::dtor$1 @ 0x1800CC30A (_StartUI--StartRegHelpers--PrecreateStartMenuConfigRegKey_--_1_--dtor$1.c)
 *     _KioskPositioner::GetUserSidString_::_1_::dtor$1 @ 0x1800D678C (_KioskPositioner--GetUserSidString_--_1_--dtor$1.c)
 *     ?LoadAssignedAccessConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1800D67FC (-LoadAssignedAccessConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguratio.c)
 *     _KioskPositioner::LoadAssignedAccessConfiguration_::_1_::dtor$0 @ 0x1800D6C8F (_KioskPositioner--LoadAssignedAccessConfiguration_--_1_--dtor$0.c)
 *     ?GetCompatJsonFileNameForThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180121DB4 (-GetCompatJsonFileNameForThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetCompatJsonFileNameForThisUser_::_1_::dtor$2 @ 0x180121ED4 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--GetCompatJsonF_ea_180121ED4.c)
 *     ?JsonFileBelongsToThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEBG@Z @ 0x180124648 (-JsonFileBelongsToThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_N.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::JsonFileBelongsToThisUser_::_1_::dtor$2 @ 0x1801247BE (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--JsonFileBelong_ea_1801247BE.c)
 *     _wil::make_unique_string_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy_unsigned_short___void___(__cdecl_)(void__)_&LocalFree_wistd::integral_constant_unsigned___int64_0__unsigned_short___unsigned_short___0_std::nullptr_t________::_1_::dtor$0 @ 0x1804CF7BA (_wil--make_unique_string_wil--unique_any_t_wil--details--unique_storage_wil--detail_ea_1804CF7BA.c)
 *     _TryGetCertSubjectName_::_1_::dtor$4 @ 0x1804CFF52 (_TryGetCertSubjectName_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

HLOCAL __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(
        void **a1)
{
  void *v1; // rcx
  HLOCAL result; // rax

  v1 = *a1;
  if ( v1 )
    return LocalFree(v1);
  return result;
}
