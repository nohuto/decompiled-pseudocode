/*
 * XREFs of ?JsonFileBelongsToThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEBG@Z @ 0x180124648
 * Callers:
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18011F320 (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 *     ?CompatFolderChangeCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBW4FolderChangeEvent@wil@@PEBG@Z @ 0x180120A00 (-CompatFolderChangeCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008EFC8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??$get_token_information@U_TOKEN_USER@@@wil@@YA?AV?$unique_ptr@U_TOKEN_USER@@U?$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@PEAX@Z @ 0x1800D62C4 (--$get_token_information@U_TOKEN_USER@@@wil@@YA-AV-$unique_ptr@U_TOKEN_USER@@U-$default_delete@U.c)
 *     ?reset@?$unique_ptr@U_TOKEN_USER@@U?$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@QEAAXPEAU_TOKEN_USER@@@Z @ 0x1800D6FFC (-reset@-$unique_ptr@U_TOKEN_USER@@U-$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@QEAAXPEAU_TOKE.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEBV10@QEBG@Z @ 0x180116EB0 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_180116EB0.c)
 *     ?GetCompatJsonFileNameForThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180121DB4 (-GetCompatJsonFileNameForThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CommercialCloudAppBackup_AppCompatBackupOnStartFix@@@details@wil@@QEAA_NXZ @ 0x180127528 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CommercialCloudAppBackup_AppCompa.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18020B078 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18026528C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU.c)
 */

// Hidden C++ exception states: #wind=3
bool __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::JsonFileBelongsToThisUser(
        winrt::Windows::Internal::Shell::implementation::AppBackupListener *this,
        const unsigned __int16 *a2)
{
  PSID *CompatJsonFileNameForThisUser; // rax
  bool v5; // bl
  const char *v6; // r9
  const WCHAR *v7; // rax
  LPWSTR StringSid; // [rsp+30h] [rbp-9h] BYREF
  PSID *v10; // [rsp+38h] [rbp-1h] BYREF
  PSID v11[4]; // [rsp+40h] [rbp+7h] BYREF
  _QWORD Src[4]; // [rsp+60h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CommercialCloudAppBackup_AppCompatBackupOnStartFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_CommercialCloudAppBackup_AppCompatBackupOnStartFix>::GetImpl'::`2'::impl) )
  {
    CompatJsonFileNameForThisUser = winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetCompatJsonFileNameForThisUser(
                                      (__int64)this,
                                      v11);
    if ( (unsigned __int64)CompatJsonFileNameForThisUser[3] >= 8 )
      CompatJsonFileNameForThisUser = (PSID *)*CompatJsonFileNameForThisUser;
    v5 = CompareStringOrdinal((LPCWCH)CompatJsonFileNameForThisUser, -1, a2, -1, 1) == 2;
    std::wstring::_Tidy_deallocate(v11);
  }
  else
  {
    wil::get_token_information<_TOKEN_USER>(&v10);
    StringSid = 0LL;
    if ( !ConvertSidToStringSidW(*v10, &StringSid) )
    {
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0x2D0,
        (unsigned int)"pcshell\\twinui\\appbackuplistener\\lib\\appbackuplistener.cpp",
        v6);
      __debugbreak();
    }
    std::wstring::wstring((__int64)v11, StringSid);
    v7 = (const WCHAR *)std::operator+<unsigned short>(Src, (__int64)v11, (__int64)L".json");
    if ( *((_QWORD *)v7 + 3) >= 8uLL )
      v7 = *(const WCHAR **)v7;
    v5 = CompareStringOrdinal(v7, -1, a2, -1, 1) == 2;
    std::wstring::_Tidy_deallocate(Src);
    std::wstring::_Tidy_deallocate(v11);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&StringSid);
    wistd::unique_ptr<_TOKEN_USER,wistd::default_delete<_TOKEN_USER>>::reset((void **)&v10, 0LL);
  }
  return v5;
}
